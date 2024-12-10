#pragma once

#include <string>

using namespace std;

#ifndef PLAYER_H
#define PLAYER_H

class Player {
public:
    Player();
    Player(string name);
    Player(string name, int health, int xp);
    ~Player();

private:
    string name;
    int health;
    int xp;
};

#endif //PLAYER_H
