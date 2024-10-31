#ifndef COMPLEX_HPP
#define COMPLEX_HPP

class Power{
    int kick , punch;
public:
    Power(int a =0 , int b =0); //생성자선언
    Power operator-(int opn); // -연산자 함수 선언

    void show(); // 출력해주는 함수
};


#endif