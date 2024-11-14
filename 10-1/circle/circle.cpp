#include <iostream>
using namespace std;

class Circle{
    int radius;
public:
    Circle(int radius=1); //생성자 함수
    bool operator>(Circle a); // > 연산자 함수
    int getRadius(); //멤버 변수를 리턴해주는 함수
};

Circle::Circle(int radius){ //반지름값 초기화
    this->radius = radius;
}

int Circle::getRadius(){ 
    return radius; //반지름 값을 리턴
}

template <class T> // 자료형일때는 class를 선언해 주고 , 템플릿매개변수 T를 선언해준다
T bigger(T a , T b ){

    if(a>b) //두 값을 비교
        return a; 
    else
        return b;
    
}

bool Circle::operator >(Circle a){ //두객체 반지름 비교
    
    return this->radius > a.radius; //반지름 을 비교 하여 리턴
    
}


int main(){

    int a=20, b=50 ,c;
    c = bigger(a,b);
    cout<< "20과 50중 큰값은"<<c<<endl;

    Circle dount(10) , pizza(20), y;

    y = bigger(dount,pizza); //템플릿 bigger에서 
    cout<<"dount과 pizza중 큰 반지름은"<<y.getRadius()<<endl;


}
