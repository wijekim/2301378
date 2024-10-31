#include <iostream>
using namespace std;

#include "complex.hpp"

int main() {
Complex x(2, 3), y(-5, 10), sum;

sum = x*y;
cout << "두복소수의 곱은";


sum.show(); //더한값 출력
return 0;
}