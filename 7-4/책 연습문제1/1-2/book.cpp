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
    return title;
}

// 전달된 가격만큼 b 객체의 가격을 증가시키고, b 객체 자신을 반환
Book& operator +=(Book& b, int price) { 
	b.price += price;  // b 객체의 가격을 price 만큼 증가
	return b; // 변경된 b 객체를 리턴
}
// 전달된 가격만큼 b 객체의 가격을 감소시키고, b 객체 자신을 반환
Book& operator -=(Book& b, int price) {
	b.price -= price;// b 객체의 가격을 price 만큼 감소
	return b; // 변경된 b 객체를 리턴
}