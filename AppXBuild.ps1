param (
    [string]$project = "Hololens-Nav"
)

cd $project/UWP; 
nuget restore TravisTest.sln; 
msbuild.exe TravisTest.sln /t:Build /p:Configuration=Debug /p:Platform=x86 /verbosity:d