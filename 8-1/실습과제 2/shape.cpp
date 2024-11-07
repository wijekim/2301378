#include <iostream> 
using namespace std;

#include "shape.hpp" // 클래스를 쓰기위해 헤더파일 선언


void Circle::setCircle(int x, int y ,int radius){
    //protected를 사용하여 x,y값을 파생클래스에서 설정할수  있다.
    this ->x = x; //좌표값 x설정
    this ->y = y; //좌표값 y설정 
    this -> radius = radius;//반지름값 설정

}
void Circle::show(){
    
    cout << "좌표 (" << x << "," <<y<< ")"<< "에 반지름" << radius << "인 원" << endl;  
}

void Rect::setRect(int x ,int y ,int w , int h){
    //protected를 사용하여 x,y값을 파생클래스에서 설정할수  있다.
    this ->x = x; //좌표값 x설정
    this ->y = y; //좌표값 y설정 
    this -> w= w; //폭설정
    this -> h =h; // 높이 설정
}

void Rect::show(){
    
     cout << "좌표 (" << x << "," <<y<< ")에 폭" << w << ", 높이" << h<<"인 직사각형" << endl;  
}



void Triangle::setTriangle(int x ,int y ,int w , int h){
    //protected를 사용하여 x,y값을 파생클래스에서 설정할수  있다.
    this ->x = x; //좌표값 x설정
    this ->y = y; //좌표값 y설정 
    this -> w= w; //밑변 설정
    this -> h=h; // 높이 설정

}

void Triangle::show(){
   
    cout << "좌표 (" << x << "," <<y<< ")" << "에 밑변" << w << ", 높이" << h<<"인 삼각형" << endl;  

}
