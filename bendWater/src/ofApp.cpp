#include "ofApp.h"


ofMolecule::ofMolecule() {
	pos = ofVec2f(0, 0);
	vel = ofVec2f(1,1);
	drag = ofRandom(.95, .998);
}
ofMolecule::ofMolecule(ofVec2f p) {
	pos = p;
	vel = ofVec2f(1, 1);
	drag = ofRandom(.95, .998);
}
void ofMolecule::update() {
	ofVec2f mouse(ofGetMouseX(), ofGetMouseY());
	frc = mouse - pos;
	
	float dist = frc.length();
	frc.normalize();
	vel *= drag;
	vel += frc * 0.6;
	printf("Vel: %f,%f\n", vel.x, vel.y);
	pos += vel;
	//printf("Point after: %f,%f\n", pos.x, pos.y);

	//keep in screen
	if (pos.x > ofGetWidth()) {
		pos.x = ofGetWidth();
		vel.x *= -1.0;
	}
	else if (pos.x < 0) {
		pos.x = 0;
		vel.x *= -1.0;
	}
	if (pos.y > ofGetHeight()) {
		pos.y = ofGetHeight();
		vel.y *= -1.0;
	}
	else if (pos.y < 0) {
		pos.y = 0;
		vel.y *= -1.0;
	}
}
void ofMolecule::draw() {
	ofDrawCircle(pos.x, pos.y, 5);
}
//--------------------------------------------------------------
void ofApp::setup(){
	
}

//--------------------------------------------------------------
void ofApp::update(){
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	
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