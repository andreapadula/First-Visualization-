#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(0);//set background to black
    readfile(class_data);//we read the given file
    random_generate(random_data);
    random_generate(random_data2);
    random_generate(random_data3);

}
//--------------------------------------------------------------
void ofApp::readfile(vector<int>& data){
    ofFile file;
    file.open(ofToDataPath("data01.txt"), ofFile::ReadWrite, false);//open the file
    while(file) {//store the contents of the file in a vector of int
        int temp;
        file >> temp;
        data.push_back(temp);
    }
}
//--------------------------------------------------------------
void ofApp::random_generate(vector<int>& data){
    for (int i = 0; i < class_data.size(); i++) {//generate random number between 0 99 and store it into the vector
        data.push_back(ofRandom(0,100));
    }
}
//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255,255,255,40);
    //Class's numbers
    for (int i = 0; i < class_data.size(); i++) {
        ofDrawEllipse(class_data[i] * 8, ofGetHeight()/2, 8, 8);
    };
    //A line of random numbers
    for (int i = 0; i < random_data.size(); i++) {
        ofDrawEllipse(random_data[i] * 8, ofGetHeight()/2+10, 8, 8);
    };
    //A line of random numbers
    for (int i = 0; i < random_data.size(); i++) {
        ofDrawEllipse(random_data2[i] * 8, ofGetHeight()/2+20, 8, 8);
    };
    //A line of random numbers
    for (int i = 0; i < random_data.size(); i++) {
        ofDrawEllipse(random_data3[i] * 8, ofGetHeight()/2+30, 8, 8);
    };
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
