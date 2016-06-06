#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
	voro.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
    
	voro.update(tap);
}


//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(0, 0, 0);
    // the bounds of all the points
	voro.draw();
	tap = false;

}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){

	tap = true;
	

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
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
