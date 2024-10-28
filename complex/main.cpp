#include <iostream>
#include "complex.hpp" //헤더파일 선언

using namespace std;


int main() {
    Complex x(2, 3), y(-5, 10), sum; //객체생성
    sum = ComplexAdd(x, y);
    cout << "두 복소수의 합은";
    sum.show(); //출력함수 호출
    return 0;
}
