#pragma once

#include <iostream>
#include "Entity.h"

using namespace std;

#ifndef PLAYER_H_
#define PLAYER_H_

class Player : public Entity{
    public:
        int* hp;
        int xp;
    
    public:
        Player(int x, int y, int hp, int xp);
        virtual ~Player();
        
        virtual void Move(int dx, int dy) override;

        virtual void PrintPosition() const override;
};

#endif