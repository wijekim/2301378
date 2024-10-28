#ifndef COMPLEX_HPP
#define COMPLEX_HPP

class Complex{ //클래스 정의
private:
    int a,b; //a 실수부 , b허수부
public: //접근지정자
    Complex(); //생성자
    Complex(int a, int b); //생성자

    friend Complex ComplexAdd( Complex c1 ,  Complex c2 ); 
    //friend로 private에 접근가능하게 함

    void show(); //출력함수
};

#endif