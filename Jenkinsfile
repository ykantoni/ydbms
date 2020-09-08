pipeline {
    agent { docker { image 'maven:3.3.3' } }
    stages {
        stage('build') {
            steps {
                dir(path: '/c:/Users/irenok/.jenkins/workspace/ydbms_master/') {
                    sh 'mvn --version'
                }
            }
        }
    }
}
