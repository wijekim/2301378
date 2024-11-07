#ifndef BOOK_HPP_   
#define BOOK_HPP_   


#include <string>
using namespace std; 

// Book 클래스
class Book {
	string title;       //타이틀
	int price, pages;  //가격, 페이지 
public:
		
	Book(string title = "", int price = 0, int pages = 0);//생성자
	void show();  //출력하는 함수
	string getTitle();   //타이틀을 반환해주는 함수

    Book& operator +=(int price); //가격을 증가시키는 +=연산자 함수
    Book& operator -=(int price); //가격을 감소시키는 -=연산자 함수
	
	};


#endif