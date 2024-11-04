#include <iostream> //cout을 사용하기위해 사용
using namespace std;

#include "complex.hpp" //클래스 complex를 쓰기위해 사용

Complex::Complex(int a , int b){
    this->real =a ;
    this -> img = b;
    cout<<"복소수"<< a<<"+" <<b<<"j 생성"<<endl;
}

  Complex& Complex::operator++() {
        ++real; //실수부 증가
        ++img;  //허수부 증가
        return *this; //변형된 객체 자신을 리턴
    }

    
    Complex Complex::operator--(int x) {
        Complex temp = *this; // 감소 이전 객체 상태를 저장
        real--; //실수부 감소
        img--;  // 허수부 감소
        return temp;//감소 이전 객체상태를 리턴한다.
    }

void Complex::show(){
    cout << real << "+" << img << "j" << endl;
}
