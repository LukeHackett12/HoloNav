 param (
    [string]$project = "Hololens-Nav"
)

cd $project

$dir=cd
unity -quit -batchmode -projectPath $dir -executeMethod BuildScript.build -logfile .\stdout.log
Start-Sleep -m 500
Get-Content .\stdout.log -Tail 1 -Wait | ForEach-Object {
    If ($_.ToString().Contains('Exiting without the bug reporter')) {
        $_;
        Exit;
    }
    Else {
        $_;
    }
}
