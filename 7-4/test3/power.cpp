#include <iostream> //cout을 사용하기 위해 선언
using namespace std;

#include "power.hpp" //클래스를 사용하기 위해 선언


Power::Power(int a,int b){
    kick = a; //kick을 a로 초기화
    punch = b; //pounch를 b로 초기화
}

Power operator*(int opn, Power p){ //*연산자 함수
    Power pt; // 임시객체

    pt.kick = p.kick * opn; //pt에 kick변수에 p객체 kick*opn저장
    pt.punch = p.punch * opn; 

    return pt; //임시객체 리턴
}

void Power::show() {
cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}