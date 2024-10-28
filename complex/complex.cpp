#include <iostream>
using namespace std;
#include "complex.hpp"


Complex::Complex(){
    a=0;
    b=0;
    cout<<"복소수"<<a<<"+"<<b<<"j 생성"<<endl;
}
Complex::Complex(int A , int B){
    a = A;
    b = B;

    cout<<"복소수"<<A<<"+"<<B<<"j 생성"<<endl;
}
Complex ComplexAdd(const Complex& c1 , const Complex& c2 ){

    int result1 = c1.a+c2.a;
    int result2 = c1.b+c2.b;

    return Complex(result1, result2);
   

}
void Complex::show(){
    cout<<a<<"+"<<b<<"j"<<endl;
}

