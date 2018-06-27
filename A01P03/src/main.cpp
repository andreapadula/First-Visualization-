
/* Programmer: Andrea Padula
 Course: CSC 544
 Assignment 1 */

/* This program generates the visualization of a text file. The visualization chosen
 is a "bingo" table that based on the value the number changes intensity/color for more frequent numbers. As a bingo table every number is displayed and it is easy to see to which numbers occur the most. */
#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
	ofSetupOpenGL(800,800,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
