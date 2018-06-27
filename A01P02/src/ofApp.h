#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
        std::vector<int> class_data;
        std::vector<int> random_data;
        std::vector<int> random_data2;
        std::vector<int> random_data3;
        void readfile(vector<int>& data);
        void random_generate(vector<int>& data);
        int data_counts[100];
        int random_counts1[100];
        int random_counts2[100];
        int random_counts3[100];
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
        void doCounts(vector<int>& data,int counts[]);
        void drawBarGraph(int data[],int y);
        void reset();
		
};
