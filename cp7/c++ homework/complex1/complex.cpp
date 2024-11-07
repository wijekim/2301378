#include <iostream> 
using namespace std;
#include "complex.hpp"


Complex::Complex(){
    a=0;
    b=0;
    cout<<"복소수"<<a<<"+"<<b<<"j 생성"<<endl;
}
Complex::Complex(int A , int B){ //생성자
    a = A;
    b = B;

    cout<<"복소수"<<A<<"+"<<B<<"j 생성"<<endl;
}
Complex ComplexAdd( Complex c1 , Complex c2 ){//새로운 객체로 생성후 반환
    Complex cpt;

    //복소수 더한값 
    cpt.a = c1.a+c2.a;
    cpt.b = c1.b+c2.b;

    return cpt; 
   

}
void Complex::show(){ //복소수 출력함수
    cout<<a<<"+"<<b<<"j"<<endl;
}

