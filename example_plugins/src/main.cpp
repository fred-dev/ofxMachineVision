#include "ofMain.h"
#include "ofAppGlutWindow.h"

#include "ofApp.h"

//========================================================================
int main( ){
	ofGLFWWindowSettings windowSettings;
	windowSettings.setGLVersion(3, 0);
	windowSettings.setSize( 1920, 1080);
	windowSettings.depthBits = 32;
	auto window = ofCreateWindow(windowSettings);

	ofRunApp(new ofApp());
}
