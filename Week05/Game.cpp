#include <iostream>
#include <string>

using namespace std;

class Player {
public:
    string name;

private:
    int health;
    int xp;

    void Talk(string text);
    bool isDead();

};

int main() {
    Player* p_ptr = new Player();
    p_ptr->name = "Donghyun";
    cout << p_ptr->name << endl;
    return 0;
}