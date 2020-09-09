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
    }
}
