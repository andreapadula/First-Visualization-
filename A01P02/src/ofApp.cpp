#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(0);
    readfile(class_data);// read file
    random_generate(random_data);// generates random numbers
    random_generate(random_data2);
    random_generate(random_data3);
    reset();//set the array count to 0 for all the indices
    doCounts(class_data,data_counts);//counts how many occurrence of numbers
    doCounts(random_data,random_counts1);
    doCounts(random_data2,random_counts2);
    doCounts(random_data3,random_counts3);
    draw();

}
//--------------------------------------------------------------
void ofApp::reset(){//initialize all elements to zero
    for (int i=0; i<100; i++) {
        data_counts[i]=0;//set to 0
    }
    for (int i=0; i<100; i++) {
        random_counts1[i]=0;//set to 0
    }
    for (int i=0; i<100; i++) {
        random_counts2[i]=0;//set to 0
    }
    for (int i=0; i<100; i++) {
        random_counts3[i]=0;//set to 0
    }
}
//--------------------------------------------------------------
void ofApp::random_generate(vector<int>& data){//generates random number between 0 and 99 for the size of our vector
    for (int i = 0; i < class_data.size(); i++) {
        data.push_back(ofRandom(0,100));//push the random number to the array
    }
}
//--------------------------------------------------------------
void ofApp::readfile(vector<int>& data){//read file
    ofFile file;
    file.open(ofToDataPath("data01.txt"), ofFile::ReadWrite, false);//read the file
    while(file) {//fill our vector with the values present in our text file
        int temp;
        file >> temp;
        data.push_back(temp);//push elements
    }
}
//--------------------------------------------------------------
void ofApp::doCounts(vector<int>& data,int counts[]){//count the number of occurrences of a number
    for (int i=0; i<data.size(); i++) {
        counts[data[i]]=counts[data[i]]+1;//increase the count
    }

}
//--------------------------------------------------------------
void ofApp::drawBarGraph(int data[],int y){
    for (int i = 0; i < 100; i++) {
        ofColor color = ofColor::fromHsb(data[i]*25, 255,255 );//choose the color
        ofSetColor( color );//set the color
        ofDrawRectangle(i*9 ,ofGetHeight()/2+y,8, -(data[i]*10));//draw a rectangle with width 8 whose heights are scaled by a factor of 10
    };

}
//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    drawBarGraph(data_counts, -200);//draw the bar graph for each of that created
    drawBarGraph(random_counts1, -100);
    drawBarGraph(random_counts2,0);
    drawBarGraph(random_counts3, 100);
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
