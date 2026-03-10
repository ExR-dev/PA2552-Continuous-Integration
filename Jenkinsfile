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
    }

    post {
        always {
            echo 'Build finished.'
        }
        success {
            echo 'Build succeeded!'
        }
        failure {
            echo 'Build failed!'
        }
        cleanup {
            sh "${PREMAKE} clean || true"
        }
    }
}