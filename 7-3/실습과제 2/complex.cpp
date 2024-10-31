#include <iostream>
using namespace std;

#include "complex.hpp"

Complex::Complex(int a , int b){
    this->real =a ;
    this -> img = b;
    
}


//복소수 곱 (a+bi)×(c+di)=(ac−bd)+(ad+bc)i
Complex Complex::operator*(Complex cp){
    Complex tmp; //임시객체 생성
    tmp.real = this->real * cp.real - this->img * cp.img; //실수부 곱하기
    tmp.img = this->real * cp.img + this->img * cp.real; // 허수부 곱하기

    return tmp; //더한 결과 리턴
}

void Complex::show(){
    cout << real << "+" << img << "j" << endl;
}