node {
	stage ('Checkout'){
		cleanWs()
		checkout scm
	}	

	stage ('Build Unity Project'){
   		 powershell './UnityBuild.ps1 -project Hololens-Nav -NoNewWindow'
	}

	stage ('Build AppX Project'){
		powershell './AppXBuild.ps1 -project Hololens-Nav -NoNewWindow'
	}
	
	stage ('Upload to S3'){
		powershell './deployS3.ps1'
	}
}
