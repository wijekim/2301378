#ifndef COMPLEX_HPP_
#define COMPLEX_HPP

class Complex{
    int real,img;
public:
    
    Complex(int a=0, int b=0); //생성자
    
    Complex operator*(Complex CP); //+연산자 함수 선언
    void show(); //출력해주는 함수

};


#endif