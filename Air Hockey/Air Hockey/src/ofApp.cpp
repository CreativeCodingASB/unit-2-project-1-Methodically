#include "ofApp.h"
#include "ofxNetwork.h"

int posX=9999, posY=9999;

//--------------------------------------------------------------
void ofApp::setup()
{
    c.Create();
    c.Bind(12344);
    c.SetNonBlocking(true);
}

//--------------------------------------------------------------
void ofApp::update()
{
    puck.Update();
    puck.CheckCollisions(player._position, player._positionPrevious);
    if(puck.sending)
    {
        c.Send(puck.send.c_str(), puck.send.length());
    }
}

//--------------------------------------------------------------
void ofApp::draw()
{
    ofBackground(0, 0, 255);
    ofSetColor(255);
    ofDrawRectangle(10, 10, ofGetWidth()-20, ofGetHeight()-20);
    ofSetColor(0);
    ofSetColor(255, 0, 0);
    ofDrawRectangle((ofGetWidth()/2)-5, 10, 10, ofGetHeight()-20);
    ofDrawRectangle(0, ofGetHeight()/3, 10, ofGetHeight()/3);
    ofDrawRectangle(ofGetWidth()-10, ofGetHeight()/3, 10, ofGetHeight()/3);
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, 60);
    ofSetColor(255);
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, 50);
    player.Update(mousePos.x, mousePos.y);
    player.Draw();
    puck.Draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
    if(key=='d')
    {
        player.setSide(false);
    }
    if(key=='f')
    {
        player.setSide(true);
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y)
{
    mousePos.set(x, y);
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button)
{

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button)
{

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button)
{

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y)
{

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y)
{

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h)
{

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg)
{

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo)
{

}
