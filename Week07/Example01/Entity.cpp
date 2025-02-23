#include <iostream>
#include "Entity.h"

using namespace std;

Entity::Entity(int x, int y) : x{ x }, y{ y } {}
Entity::~Entity() {
    cout << "Entity Destructor Called" << endl;
}

/*
void Entity::Move(int dx, int dy) {
    x += dx;
    y += dy;
}
*/

void Entity::PrintPosition() const {
    cout << "Entity : " << x << ", " << y << endl;
}