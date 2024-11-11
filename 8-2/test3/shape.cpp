

#include "shape.hpp" // 클래스를 쓰기위해 헤더파일 선언

Shape::Shape(int x, int y){
    this ->x = x; //좌표값 x설정
    this ->y = y; //좌표값 y설정
    cout<<"Shape생성 ,";
}
Shape::~Shape(){
    cout<<"Shape소멸"<< endl;
}

void Shape::showPoint(){ //좌표 출력
    cout << "좌표 (" << x << "," <<y<< ")에 ";
}

//파생 클래스의 생성자가 명시적으로 기본 클래스 생성자를 선택 호출한다.
Circle::Circle(int x, int y ,int radius):Shape(x,y){ 
    this -> radius = radius;
    cout<<"Circle생성"<< endl;
}
Circle::~Circle(){
    cout<<"Circle소멸 ,";
}

void Circle::show(){
    showPoint(); //부모클래스에서 showPoint함수 출력
    cout << "에 반지름" << radius << "인 원" << endl;  
}

//파생 클래스의 생성자가 명시적으로 기본 클래스 생성자를 선택 호출한다.
Rect::Rect(int x ,int y ,int w , int h):Shape(x,y){
  
    this -> w= w; //폭설정
    this -> h =h; // 높이 설정
    cout<<"Rect생성"<< endl;
}

Rect::~Rect(){
    cout<<"Rect소멸 ,";
}


void Rect::show(){
    showPoint(); //부모클래스에서 showPoint함수 출력
    cout << "에 폭" << w << ", 높이" << h<<"인 직사각형" << endl;  

}

//파생 클래스의 생성자가 명시적으로 기본 클래스 생성자를 선택 호출한다.
Triangle::Triangle(int x ,int y ,int w , int h):Shape(x,y){
  
    this -> w= w; //밑변 설져ㅓㅇ
    this -> h=h; // 높이 설정
    cout<<"Triangle생성"<< endl;
}
Triangle::~Triangle(){
    cout<<"Triangle소멸 ,";
}

void Triangle::show(){
    showPoint();//부모클래스에서 showPoint함수 출력
    cout << "에 밑변" << w << ", 높이" << h<<"인 삼각형" << endl;  

}