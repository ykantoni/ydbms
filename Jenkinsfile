pipeline {
    agent none
    stages {
        stage('build') {
//            agent { docker { image 'maven:3.3.3' } }
            agent any
            steps {
//                sh 'mvn --version'
                sh 'pwd'
                sh 'if [ -d build ]; then rm -rf build/*; fi'
                sh 'if [ ! -d build ]; then mkdir build; fi'
//                sh 'if [ ! -d build ]; then mkdir build; else rm -f build/*; fi'
                sh 'cd build && cmake ..'
            }
        }
        stage('test') {
            agent any
            steps {
                sh 'echo hello test'
            }
        }
        stage('deploy') {
            agent any
            steps {
                retry(3) {
                    sh 'ls -lha'
                }

                timeout(time: 1, unit: 'MINUTES') {
                    sh 'echo hello deploy'
                }
            }
        }        
    }
}
