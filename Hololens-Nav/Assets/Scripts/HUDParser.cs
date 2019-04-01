using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class HUDParser : MonoBehaviour
{
    public enum stepType { turn, depart, arrive };

    public GameObject player;
    public TextMeshProUGUI instructionText;
    public TextMeshProUGUI distanceText;
    public TextMeshProUGUI etaText;
    public TextMeshProUGUI timeText;

    public Image arrow;
    public Sprite left;
    public Sprite right;
    public Sprite upLeft;
    public Sprite upRight;
    public Sprite downLeft;
    public Sprite downRight;
    public Sprite straightLeft;
    public Sprite straightRight;
    public Sprite straight;
    public Sprite uTurn;


    Vector3 startPos;
    bool start = false;

    float remaining = 0;
    DateTime eta;
    private Queue<BannerStep> steps;

    public void Initialise(route route)
    {
        startPos = player.transform.position;

        steps = new Queue<BannerStep>();

        foreach (leg currentLeg in route.legs)
        {
            eta = DateTime.Now.AddSeconds(currentLeg.duration);//   currentLeg.duration;
            foreach (step currentStep in currentLeg.steps)
            {
                steps.Enqueue(new BannerStep(currentStep.maneuver, currentStep.distance));
            }
        }

        start = true;
    }

    void Update()
    {
        timeText.SetText(DateTime.Now.ToString("HH:mm"));

        TimeSpan diff = eta.Subtract(DateTime.Now);
        string newETA = "ETA " + eta.ToString("HH:mm") + "\n" + diff.Minutes + " Min";

        etaText.SetText(newETA);

        if (start)
        {
            distanceText.SetText((remaining + "m"));

            float current = Vector3.Distance(startPos, player.transform.position);
            if (remaining > current - 2 && remaining < current + 2)
            {
                BannerStep next = steps.Dequeue();

                switch (next.maneuver.modifier)
                {
                    case "straight":
                        arrow.sprite = straight;
                        break;
                    case "right":
                        arrow.sprite = straightRight;
                        break;
                    case "left":
                        arrow.sprite = straightLeft;
                        break;
                    case null:
                        if (next.maneuver.instruction.Contains("northwest"))
                            arrow.sprite = upLeft;
                        else if (next.maneuver.instruction.Contains("northeast"))
                            arrow.sprite = upRight;
                        else if (next.maneuver.instruction.Contains("north"))
                            arrow.sprite = straight;
                        else if (next.maneuver.instruction.Contains("southwest"))
                            arrow.sprite = downRight;
                        else if (next.maneuver.instruction.Contains("southeast"))
                            arrow.sprite = downRight;
                        else if (next.maneuver.instruction.Contains("west"))
                            arrow.sprite = left;
                        else if (next.maneuver.instruction.Contains("east"))
                            arrow.sprite = right;
                        break;
                }

                remaining = next.duration;
                startPos = player.transform.position;

                string instructionString = "";
                if (next.instruction.Contains("in") || next.instruction.Contains("onto") || next.instruction.Contains("on"))
                {
                    instructionString = "<line-height=115%><size=65%>";

                    string[] words = next.instruction.Split(' ');
                    foreach (string word in words)
                    {
                        instructionString += word + " ";

                        if (word.Equals("in") || word.Equals("onto") || word.Equals("on"))
                        {
                            instructionString += "</size>\n<b>";
                        }
                    }

                    instructionString += "</b>";
                }
                else
                {
                    instructionString = "<line-height=115%><size=65%>" + next.instruction + "</size>";
                }

                instructionText.SetText(instructionString);
            }
        }
    }  
}

internal class BannerStep
{
    public maneuver maneuver;
    public string instruction;
    public float duration;

    public BannerStep(maneuver man, float dist)
    {
        maneuver = man;
        instruction = man.instruction;
        duration = dist;
    }
}