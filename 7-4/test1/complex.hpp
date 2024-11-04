#ifndef COMPLEX_HPP
#define COMPLEX_HPP

class Complex{
    int real,img;
public:
    
    Complex(int a=0, int b=0); //생성자
    
    //전위 증가 여러번 연달아 쓰기위해서 참조를 사용
    Complex& operator++(); //전위 ++연산자
    //후위 --연산자 정수형변수는 전위와 후위를 구분하기 위해서이다
    Complex operator--(int x); //후위 --연산자

    void show(); //출력해주는 함수

};


#endif