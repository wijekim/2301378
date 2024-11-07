#include <iostream> 
using namespace std;

#include "shape.hpp" // 클래스를 쓰기위해 헤더파일 선언

void Shape::set(int x, int y){
    this ->x = x; //좌표값 x설정
    this ->y = y; //좌표값 y설정
}
void Shape::showPoint(){ //좌표 출력
    cout << "좌표 (" << x << "," <<y<< ")에 ";
}
void Circle::setCircle(int x, int y ,int radius){
    set(x,y); //부모 클래스  set 함수를 호출하여 좌표출력
    this -> radius = radius;

}
void Circle::show(){
    showPoint(); //부모클래스에서 showPoint함수 출력
    cout << "에 반지름" << radius << "인 원" << endl;  
}

void Rect::setRect(int x ,int y ,int w , int h){
    set(x,y); //부모 클래스  set 함수를 호출하여 좌표출력
    this -> w= w; //폭설정
    this -> h =h; // 높이 설정
}

void Rect::show(){
    showPoint(); //부모클래스에서 showPoint함수 출력
    cout << "에 폭" << w << ", 높이" << h<<"인 직사각형" << endl;  

}

void Triangle::setTriangle(int x ,int y ,int w , int h){
    set(x,y); //부모 클래스  set 함수를 호출하여 좌표출력
    this -> w= w; //밑변 설져ㅓㅇ
    this -> h=h; // 높이 설정

}

void Triangle::show(){
    showPoint();//부모클래스에서 showPoint함수 출력
    cout << "에 밑변" << w << ", 높이" << h<<"인 삼각형" << endl;  

}
