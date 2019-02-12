$x="BRANCH_NAME";
$y = (get-item env:$x).Value;
Rename-Item "Hololens-nav/UWP/build/bin/Win32" "Win32-$y";
echo $y;
aws s3 cp "Hololens-nav/UWP/build/bin/" s3://hololens-nav --recursive --include "*";