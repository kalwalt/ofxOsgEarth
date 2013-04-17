#include "testApp.h"

#include <osgDB/ReadFile>
#include <osgViewer/View>
#include <osgGA/TrackballManipulator>



//--------------------------------------------------------------
void testApp::setup(){
    std::cout << "setup" << std::endl;

    osg::Node* myModel = osgDB::readNodeFile("data/gdal_tiff.earth");

    getView()->setSceneData(myModel);
    getView()->setCameraManipulator(new osgGA::TrackballManipulator());

}

//--------------------------------------------------------------
void testApp::update(){
     // std::cout << "update" << std::endl;
}

//--------------------------------------------------------------
void testApp::draw(){
     // std::cout << "draw" << std::endl;
    ofDrawBitmapString("ofxOsgEarth Demo", 10, 10);
    ofDrawBitmapString("fps: "+ofToString((ofGetFrameRate())), 10, 25);


}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    std::cout << "keypressed" << std::endl;
    switch(key) {
        case '1':
            ofSetWindowPosition(100,100);
            break;
        case '2':
            ofSetWindowShape(400, 300);
            break;
        case 'f':
            ofSetFullscreen(false);
            break;
        case 'F':
            ofSetFullscreen(true);
            break;

    }
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
  //   std::cout << "keyReleased" << std::endl;
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
  //   std::cout << "mouseMoved" << x << "/" << y << std::endl;
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
  //  std::cout << "mouseDragged" << x << "/" << y <<  std::endl;
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
 //   std::cout << "mousePressed" << x << "/" << y <<  std::endl;

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
  //  std::cout << "mouseReleased" << x << "/" << y <<  std::endl;

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
   // std::cout << "windowResized" << w << "x" << h <<  std::endl;
}

