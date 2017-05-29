//
//  Player.cpp
//  Air Hockey
//
//  Created by Rana Lulla on 17/04/2017.
//
//

#include "Player.hpp"

Player::Player(){}
Player::~Player(){}
void Player::setSide(Boolean side)
{
    right=side;
}
void Player::Draw()
{
    ofSetColor(0);
    ofDrawCircle(_position, 50);
}
void Player::Update(int posX, int posY)
{
    _positionPrevious=_position;
    _position.x=posX;
    _position.y=posY;
    if(right)
    {
        if(ofGetWidth()/2+55>_position.x)
        {
            _position.x=ofGetWidth()/2+55;
        }
        if(ofGetWidth()-60<_position.x)
        {
            _position.x=ofGetWidth()-60;
        }
    }
    if(!right)
    {
        if(ofGetWidth()/2-55<_position.x)
        {
            _position.x=ofGetWidth()/2-55;
        }
        if(60>_position.x)
        {
            _position.x=60;
        }
    }
    if(ofGetHeight()-60<_position.y)
    {
        _position.y=ofGetHeight()-60;
    }
    if(60>_position.y)
    {
        _position.y=60;
    }
}
