pipeline {
    agent any
    
    environment {
        PREMAKE = "premake5"
        BUILD_DIR = "Generated"
    }

    options {
        timestamps()
        // Timeout counter starts AFTER agent is allocated
        timeout(time: 600, unit: 'SECONDS')
    }

    stages {
        
        stage('Checkout') {
            steps {
                git(url: 'https://github.com/ExR-Dev/PA2552-Continuous-Integration.git', branch: 'main')
            }
        }

        stage('Init Submodules') {
            steps {
                sh 'git submodule update --init --force --recursive'
            }
        }

        stage('Generate Makefiles (Premake)') {
            steps {
                sh "${PREMAKE} gmake"
            }
        }

        stage('Build (Make)') {
            steps {
                dir("${BUILD_DIR}") {
                    sh 'make -j$(nproc)'
                }
            }
        }

        stage('Archive Artifacts') {
            steps {
                archiveArtifacts artifacts: 'Generated/**', fingerprint: true
            }
        }

        stage('Run Tests'){
            steps {
                sh './Build/target/Test/Test --gtest_output=xml:reports/gtestresults.xml'
            }
        }
    }

    post {
        always {
            echo 'Build finished.'
            xunit (
                thresholds: [ skipped(failureThreshold: '0'), failed(failureThreshold: '0') ],
                tools: [ GoogleTest(pattern: 'reports/*.xml') ]
            )
        }
        success {
            echo 'Build succeeded!'
        }
        failure {
            echo 'Build failed!'
        }
        cleanup {
            sh "${PREMAKE} clean -s"
        }
    }
}