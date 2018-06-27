
#include "ofApp.h"
//--------------------------------------------------------------
void ofApp::setup(){
    
    myFont.load("verdana.ttf", 14, true, true); //set the font of our numbers
    ofSetBackgroundColor(0); //set background to black
    readfile(class_data);//read the file
    reset();// initialize all elements to zero
    doCounts(class_data,data_counts); //count the number of occurrence of a number

    
}
//--------------------------------------------------------------
void ofApp::reset(){
    for (int i=0; i<100; i++) {//loop on our data_counts to make sure that every value is set to zero
        data_counts[i]=0;//set to zero
    }
}
//--------------------------------------------------------------
void ofApp::readfile(vector<int>& data){
    
    ofFile file;
    file.open(ofToDataPath("data01.txt"), ofFile::ReadWrite, false); //read a file
    while(file) {
        int temp;
        file >> temp;
        data.push_back(temp);//push the value in the text file into our vector
    }
}
//--------------------------------------------------------------
void ofApp::doCounts(vector<int>& data,int counts[]){
    for (int i=0; i<data.size(); i++) {//count the number of occurrences of a number
        counts[data[i]]=counts[data[i]]+1;//increase the count
    }
    
}
//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    int s=50;

    for (int i = 0; i < 100; i++) {
        
        //ofDrawRectangle((i % 10) * s+(i%10), (floor(i/10) * s)+ gap, s, s);//helped me to find the right spot to place the numbers

        ofColor color = ofColor::fromHsb(data_counts[i]*25, 255,255,data_counts[i]*25);//choose the color
        ofSetColor( color );//set the color
        std::string str = std::to_string(i);//convert our int i to a string to display it in our table
        myFont.drawString(str,((i % 10) * s)+(i%10)+20, (floor(i/10) * s)+40); //find the right position to write the numbers and display it
  
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
