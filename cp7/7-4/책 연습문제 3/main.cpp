#include <iostream>
#include "book.hpp"

int main() {
	Book book("벼룩시장", 0, 50);
	if (!book){ //book의 가격ㅇ 0인경우 true가 된다.
        cout << "공짜다" << endl;
    }
	return 0;
}