#ifndef POINT_HPP_
#define POINT_HPP

#include<iostream>
#include<string>
using namespace std;


class Point{
    int x , y;
public:
    Point(int x , int y);
    int getX();
    int getY();
protected:
    void move(int x , int y);
};

class ColorPoint: public Point{
    string str;
public:
    ColorPoint(int x= 0, int y = 0, string str = "BLACK");
    void setPoint(int x, int y);    
    void setColor(string str);         
    void show();
};

#endif