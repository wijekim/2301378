#include <iostream> //cout을 사용하기 위해 선언
using namespace std;

#include "power.hpp" //클래스를 사용하기 위해 선언


Power::Power(int a,int b){
    kick = a;
    punch = b;
}

Power Power::operator-(int opn){ //-연산자 함수
    Power pt; // 임시객체
    pt.kick = kick - opn; //kick에 opn빼기
    pt.punch = punch - opn; // punch에 opn빼기

    return pt; //임시객체 리턴
}

void Power::show() {
cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}