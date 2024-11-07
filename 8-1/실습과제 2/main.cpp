#include "shape.hpp"



int main() {
    Circle x; Rect y; Triangle z;
    x.setCircle(0, 0, 2); // x, y는 기본클래스의 멤버함수를 통해 설정
    y.setRect(1, 1, 5,10); // x, y는 기본클래스의 멤버함수를 통해 설정
    z.setTriangle(2, 2, 3, 4); // x, y는 기본클래스의 멤버함수를 통해 설정
    x.show(); y.show(); z.show(); // x, y의 출력은 기본클래스 멤버를 통해 출력
}