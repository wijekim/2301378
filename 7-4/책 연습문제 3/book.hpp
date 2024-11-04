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

    bool operator! (); //부정하는 함수
     //ture ,false를 사용할때 bool을 사용한다.

    

	};


#endif