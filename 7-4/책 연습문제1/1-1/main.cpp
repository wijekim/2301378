
#include "book.hpp"

int main(){

    Book a("청춘",20000,300),b("미래",30000,500);

    a += 500;
    b -= 500;

    a.show();
    b.show();
}