#include <iostream>
using namespace std;

#include "complex.hpp"

int main() {
    Complex x(2, 3);
    ++x; //복소수 결과 증가
    cout << "증가결과";
    x.show();//증가된 결과 출력
    x--; //복소수 결과 감소
    cout << "감소결과";
    x.show();//감소된 결과 출력
}