

#ifndef TV_HPP_
#define TV_HPP_
#include<iostream>
#include <string>
using namespace std;

class TV{
    int size;
public:
    TV();// 생성자
    void setTV(int size);
    int getSize();  // 반환하는 멤버함수

};

class WideTV : public TV{
    bool videoIn;
public:
    WideTV();// 생성자
    void setWideTV(int size , bool videoIn);
    bool getVideoIn();// 반환하는 멤버함수
};

class SmartTV : public WideTV{
    string ipAdder;
public:
    SmartTV();// 생성자
    void setSmartTV(int size , bool videoIn , string ipAdder);
    string getIpAdder();// 반환하는 멤버함수
};

#endif 