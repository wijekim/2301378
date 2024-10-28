
#include <iostream>
#include "complex.hpp"

using namespace std;

Complex::Complex() : a(0), b(0) {
    cout << "복소수 " << a << "+" << b << "j 생성" << endl;
}

Complex::Complex(int A, int B) : a(A), b(B) { // 생성자
    cout << "복소수 " << A << "+" << B << "j 생성" << endl;
}

Complex ComplexManager::ComplexAdd(Complex c1, Complex c2) { // 복소수 더하기
    Complex cpt; // 결과를 저장할 로컬 변수

    // 복소수의 합
    cpt.a = c1.a + c2.a;
    cpt.b = c1.b + c2.b;

    return cpt; 
}

void Complex::show() { // 복소수 출력
    cout << a << "+" << b << "j" << endl;
}
