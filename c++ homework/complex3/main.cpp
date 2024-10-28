
#include <iostream>
#include "complex.hpp" 

using namespace std;



int main() {
Complex x(5, 5), y(2, 2), sum, sub;
ComplexManager man;
sum = man.ComplexAdd(x, y); //복소수 합
cout << "두 복소수의 합";
sum.show();
sub = man.ComplexSub(x, y); // 복소수 차
cout << "두 복소수의 차";
sum.show(); //출력함수
return 0;
}