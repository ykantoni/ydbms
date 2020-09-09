pipeline {
    agent none
    stages {
        stage('build') {
            agent { docker { image 'maven:3.3.3' } }
            steps {
                sh 'mvn --version'
            }
        }
        stage('test') {
            agent any
            steps {
                sh 'echo hello test'
            }
        }
        stage('deploy') {
            steps {
                retry(3) {
                    sh 'ls -lha'
                }

                timeout(time: 1, unit: 'MINUTES') {
                    sh 'pwd'
                }
            }
        }        
    }
}
