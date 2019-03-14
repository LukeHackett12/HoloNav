$x="BRANCH_NAME";
$y = (get-item env:$x).Value;
Rename-Item "Hololens-nav/UWP/AppPackages/Hololens-nav" "AppX-$y";
echo $y;
aws s3 cp "Hololens-nav/UWP/AppPackages/" s3://hololens-nav --recursive --include "*";
