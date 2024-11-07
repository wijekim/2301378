#include <iostream>
#include "book.hpp"
using namespace std;


int main() {
	Book a("청춘", 20000, 300);
	string b;
	cout << "책 이름을 입력하세요>>";
	getline(cin, b);

    //b가 a보다 사전적으로 앞에있는지 확인
	if (b < a) //b<a가 참이면 a의 타이틀이 b보다 뒤에있다는 메세지 출력
		cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!" << endl;
	return 0;
}