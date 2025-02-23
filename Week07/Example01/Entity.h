#pragma once

#include <iostream>

using namespace std;

#ifndef ENTITY_H_
#define ENTITY_H_

class Entity { // Abstract
    protected:
        int x;
        int y;
    
    public:
        Entity(int x, int y);
        virtual ~Entity();

        virtual void Move(int dx, int dy) = 0;
        virtual void PrintPosition() const;
};

#endif
