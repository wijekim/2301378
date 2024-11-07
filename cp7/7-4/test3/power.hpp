#ifndef COMPLEX_HPP_
#define COMPLEX_HPP_

class Power{
    int kick , punch;
public:
    Power(int a =0 , int b =0); //생성자선언
    friend Power operator*(int opn,Power p); //프렌드함수 *연산자 함수 선언

    void show(); // 출력해주는 함수
};


#endif