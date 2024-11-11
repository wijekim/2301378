#ifndef SHAPE_HPP_
#define SHAPE_HPP_


#include <iostream> 
using namespace std;


class Shape{ // 기본값 클래스
    int x , y; //x,y좌표값
public:
    Shape(int x , int y);
    ~Shape();
   
    void showPoint(); //x,y 좌표값을 출력해 주는함수
};

class Circle:public Shape{ //shape을 상속접근한 Circle 클래스
    int radius; //반지름
public:
    Circle(int x ,int y, int radius);
    ~Circle();
   
    void show(); //좌표값 하고 반지름의 값을 출력해주는 함수
};

class Rect : public Shape{//shape을 상속접근한 Rect 클래스
    int w, h; //폭 하고 넓이
public:
    Rect(int x ,int y, int w , int h);
    ~Rect();
    
    void show(); //좌표,폭,높이를 출력해주는함수
};

class Triangle : public Shape{//shape을 상속접근한 Triangle 클래스
    int w , h; //밑변과 넓이
public:
    Triangle(int x,int y ,int w, int h);
    ~Triangle();
    
    void show(); //  좌표값하고 밑변 , 높이를 출력해주는 함수


};


#endif