#ifndef COMPLEX_HPP
#define COMPLEX_HPP

class Complex; // 전방 선언

class ComplexManager {
public:
    Complex ComplexAdd(Complex c1, Complex c2);
};

class Complex {
private:
    int a, b; // a: 실수부, b: 허수부
public:
    Complex(); // 기본 생성자
    Complex(int A, int B); // 매개변수가 있는 생성자

    friend Complex ComplexManager::ComplexAdd(Complex c1, Complex c2); // friend 함수

    void show(); // 출력 함수
};

#endif
