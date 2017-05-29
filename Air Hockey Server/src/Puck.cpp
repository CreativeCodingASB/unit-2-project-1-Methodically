//
//  Puck.cpp
//  Air Hockey Server
//
//  Created by Rana Lulla on 5/5/2017.
//
//

#include "Puck.hpp"

Puck::Puck()
{
    _position.x=ofGetWidth()/2;
    _position.y=ofGetHeight()/2;
}
Puck::~Puck(){}
void Puck::Draw()
{
    ofSetColor(255, 100, 100);
    ofDrawCircle(_position, 50);
}
void Puck::Update()
{
    if(_position.y<60||_position.y>ofGetHeight()-60)
    {
        _velocity.y*=-1;
    }
    if(_position.x<60||_position.x>ofGetWidth()-60)
    {
        if(_position.y<ofGetHeight()/3+50||_position.y>ofGetHeight()/3*2-50)
        {
            _velocity.x*=-1;
        }
    }
    _position+=_velocity;
}
void Puck::CheckCollisions(ofVec2f pos, ofVec2f prevPos)
{
    if(ofDist(pos.x, pos.y, _position.x, _position.y)<100)
    {
        ofVec2f vel=_position-pos;
        
        ofVec2f playerVel=pos-prevPos;
        
        vel.normalize();
        
        _velocity=vel*playerVel.length();
    }
}
void Puck::setPos(ofVec2f pos){_position=pos;}
void Puck::setVel(ofVec2f vel){_velocity=vel;}









