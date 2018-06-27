/* Programmer: Andrea Padula
 Course: CSC 544
 Assignment 1 */

/* This program generates the visualization of a text file. The visualization chosen
 is a Bar Graphs that based on the value changes color for more frequent numbers and obviously more a number is frequent higher the bar will be.
 Moreover to have a better understanding of the data three randomly generated set of numbers are created. This helps to compare better the visualization */
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
