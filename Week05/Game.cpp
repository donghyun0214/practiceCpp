#include <iostream>
#include <string>

#include "Player.h"

using namespace std;

int main() {
    Player* p_ptr = new Player();
    p_ptr->name = "Donghyun";
    cout << p_ptr->name << endl;
    return 0;
}