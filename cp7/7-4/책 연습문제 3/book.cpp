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

bool Book::operator !(){
    if(price==0){
        return true;
    }
    else{
        return false;
    }
}