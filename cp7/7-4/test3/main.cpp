#include <iostream>
using namespace std;
#include "power.hpp"

int main() {
    Power a(3, 5), b;
    a.show();
    b.show();
    b = 2*a; // 파워 객체와 정수 곱하기
    a.show();
    b.show();
}
