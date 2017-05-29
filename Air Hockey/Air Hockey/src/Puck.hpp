//
//  Puck.hpp
//  Air Hockey
//
//  Created by Rana Lulla on 19/4/2017.
//
//

#ifndef Puck_hpp
#define Puck_hpp

#include <stdio.h>
#include "ofMain.h"

class Puck
{
    public:
        Puck();
        ~Puck();
        void Draw();
        void Update();
        void setPos(ofVec2f pos);
        void setVel(ofVec2f vel);
        void CheckCollisions(ofVec2f pos, ofVec2f prevPos);
        string send;
        bool sending;
    private:
        ofVec2f _position;
        ofVec2f _velocity;

};

#endif /* Puck_hpp */
