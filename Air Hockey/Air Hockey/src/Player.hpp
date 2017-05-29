//
//  Player.hpp
//  Air Hockey
//
//  Created by Rana Lulla on 17/04/2017.
//
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include "ofMain.h"

class Player
{
    public:
        Player();
        ~Player();
    
        void Draw();
        void Update(int mouseX, int mouseY);
        void setSide(Boolean side);
        ofVec2f _position;
        ofVec2f _positionPrevious;
    
    private:
    
        Boolean right;

};

#endif /* Player_hpp */
