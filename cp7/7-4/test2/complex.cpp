#include <iostream> //cout을 사용하기위해 사용
using namespace std;

#include "complex.hpp" //클래스 complex를 쓰기위해 사용

Complex::Complex(int a , int b){
    this->real =a ;
    this -> img = b;
    cout<<"복소수"<< a<<"+" <<b<<"j 생성"<<endl;
}

  Complex& operator++(Complex&c) {
        ++c.real; //c 실수부 증가
        ++c.img;  //c 허수부 증가
        return c; //변형된 객체 c참조 리턴
    }

    
    Complex operator--(Complex&c , int x) {
        Complex temp = c; // 감소 이전 객체 상태를 저장
        c.real--; //c 실수부 감소
        c.img--;  // c 허수부 감소
        return temp;//c감소 하기전 의 값 리턴
    }

void Complex::show(){
    cout << real << "+" << img << "j" << endl;
}