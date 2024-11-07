#ifndef SHAPE_HPP_
#define SHAPE_HPP_

class Shape{ // 기본값 클래스
protected: // 파생 클래스에서만 접근가능
    int x , y; //x,y좌표값


};

class Circle:public Shape{ //shape을 상속접근한 Circle 클래스
    int radius; //반지름
public:
    void setCircle(int x ,int y, int radius);// 좌표 값하고 반지름값을 설정해 주는 함수
    void show(); //좌표값 하고 반지름의 값을 출력해주는 함수
};

class Rect : public Shape{//shape을 상속접근한 Rect 클래스
    int w, h; //폭 하고 넓이
public:
    void setRect(int x ,int y, int w , int h); //좌표값하고 폭 , 높이를 설정하는 함수
    void show(); //좌표,폭,높이를 출력해주는함수
};

class Triangle : public Shape{//shape을 상속접근한 Triangle 클래스
    int w , h; //밑변과 넓이
public:
    void setTriangle(int x,int y ,int w, int h); // 좌표값하고 밑변 , 높이를 설정하는 함수
    void show(); //  좌표값하고 밑변 , 높이를 출력해주는 함수


};


#endif