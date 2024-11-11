#include "point.hpp"

Point::Point(int x ,int y){
    this -> x = x;
    this -> y = y;
}

int Point::getX(){
    return x; //x값 리턴
}

int Point::getY(){
    return y; // y값 리턴

}

void Point::move(int x , int y){
    this->x = x;
    this->y = y;
}



ColorPoint::ColorPoint(int x , int y ,string str):Point(x,y){ // 생성자
    this -> str = str ; //초기화
}

void ColorPoint::setPoint(int x,int y){
    move(x,y); //protected에서 선언된 move함수는 파생클래스에서사용 가능하다.
}

void ColorPoint::setColor(string str){
    this->str =str;
}

void ColorPoint::show(){
    cout<<str<<"색으로 ("<<getX()<<" , "<<getY()<<") 에 위치한 점입니다."<<endl;
}