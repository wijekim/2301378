
#include "tv.hpp"
TV::TV() { //TV클래스 생성자
    cout << "TV 생성" << endl; 
}

void TV::setTV(int size){
    this -> size = size; //size설정
}

int TV::getSize(){
    return size; //사이즈값 반환
}

 WideTV::WideTV() { //wideTV클래스 생성자
    cout << "WideTv 생성" << endl; 
}

void WideTV::setWideTV(int size , bool videoIn){
    setTV(size);
    this -> videoIn = videoIn;
}

bool WideTV::getVideoIn(){
    return videoIn;
}
 SmartTV::SmartTV(){//SmartTV클래스 생성자
    cout << "SmartTV 생성" << endl; 
}
void SmartTV::setSmartTV(int size , bool videoIn , string ipAdder){
    setWideTV(size , videoIn); //setWideTv함수로 값설정
    this ->ipAdder = ipAdder; // ip 주소 설정
}

string SmartTV::getIpAdder(){
    return ipAdder;
}