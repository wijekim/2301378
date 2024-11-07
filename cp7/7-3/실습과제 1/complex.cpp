#include <iostream>
using namespace std;

#include "complex.hpp"

Complex::Complex(int a , int b){
    this->real =a ;
    this -> img = b;
    
}

Complex Complex::operator+(Complex cp){
    Complex tmp; //임시객체 생성
    tmp.real = this->real + cp.real; //실수부 더하기
    tmp.img = this->img + cp.img; // 허수부 더하기

    return tmp; //더한 결과 리턴
}

void Complex::show(){
    cout << real << "+" << img << "j" << endl;
}