node {
    try {
    	stage ('Checkout'){
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
            cleanWs()
    	}
        
    	notifySuccessful()


    } catch (e) {
        currentBuild.result = "FAILED"
        notifyFailed()
        throw e
    }
}

def notifySuccessful(){
    slackSend (color: '#00FF00', message: "SUCCESSFUL: Job '${env.JOB_NAME} [${env.BUILD_NUMBER}]' (${env.BUILD_URL})")
}

def notifyFailed() {
   slackSend (color: '#FF0000', message: "FAILED: Job '${env.JOB_NAME} [${env.BUILD_NUMBER}]' (${env.BUILD_URL})")
}
