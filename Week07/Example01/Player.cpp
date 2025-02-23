#include <iostream>
#include "Entity.h"
#include "Player.h"

using namespace std;

Player::Player(int x, int y, int hp, int xp)
    : Entity{x, y}, xp{ xp } {
        this->hp = new int;
        *(this->hp) = hp;
    }

Player::~Player() {
    delete hp;
    cout << "Player Destructor Called" << endl;
}

void Player::Move(int dx, int dy) {
            x += dx * 2;
            y += dy * 2;
}

void Player::PrintPosition() const{
    cout << "Player : " << x << ", " << y << endl;
}