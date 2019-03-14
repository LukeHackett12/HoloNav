param (
    [string]$project = "Hololens-Nav"
)

cd $project/UWP; 
nuget restore $project.sln; 
msbuild.exe $project.sln /t:Build /p:Configuration=Release /p:Platform=x86 /verbosity:d
