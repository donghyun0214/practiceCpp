#include <iostream>

#include "Entity.h"
#include "Player.h"

using namespace std;

int main() {
    Player p {1, 1, 10, 10};

    return 0;

    /*
    이렇게 한 번 이해해보자

    Entity가 가상이 아니라면? Entity의 메서드를 호출할 것이다

    Entity가 가상이라면? Player 클래스의 객체에서 Move를 호출하였는데
    Entity 클래스의 함수는 안보이기 때문에(가상이기 때문에) Player 함수를 찾아 호출

    이러한 이유로 소멸자도 마찬가지
    */
}