
#include "book.hpp"
#include <iostream>
using namespace std;

Book::Book(string title, int price , int pages ){ // title, price, pages 초기화
    this->title = title;
    this->price = price;
    this->pages = pages;
}
void Book::show(){
    cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
}

string Book::getTitle(){
    return title; //타이틀 리턴
}

//전달된 가격만큼 현재 가격을 증가시키고, 자기 자신을 반환
Book& Book::operator +=(int price) { 
	this->price += price;
	return *this;
}
//전달된 가격만큼 현재 가격을 감소시키고, 자기 자신을 반환
Book& Book::operator -=(int price) {
	this->price -= price;
	return *this;
}