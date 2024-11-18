#include<iostream>
using namespace std;

template<class T , class T2>
class GClass{
    T x;
    T2 y;
public:
    GClass();
    void set(T a ,T2 b);
    void get(T& a , T2& b);
    void swap();

};
template<class T,class T2>
GClass<T,T2>::GClass(){
    x= 0; // x 초기화
    y = 0;// y 초기화

}
template<class T,class T2>
void GClass<T,T2>::set(T a, T2 b){
    x = a; // x에 a 값 저장
    y = b; // y에 b 값 저장
}

template<class T,class T2>
void GClass<T,T2>::get(T& a, T2& b){ //참조로 전달된 변수에 x와 y의 값을 반환
    a = x; //a에 x값 저장
    b = y; // b에 y값 저장
}

template<class T,class T2>
void GClass<T,T2>::swap(){
    T temp = x ;
    x = y;
    y =temp;

    

}

int main() {
    int a, b;
    GClass<int, int> x;
    x.set(2, 5);
    x.get(a, b);
    cout << "a=" << a << '\t' << "b=" << b << endl;
    x.swap();
    x.get(a, b);
    cout << "a=" << a << '\t' << "b=" << b << endl;

    double c, d;
    GClass<double, double> y;
    y.set(3.14, 6.28);
    y.get(c, d);
    cout << "c=" << c << '\t' << "d=" << d << endl;
    y.swap( );
    y.get(c, d);
    cout << "c=" << c << '\t' << "d=" << d << endl;

}