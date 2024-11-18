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
    x= 0;
    y = 0;
}
template<class T,class T2>
void GClass<T,T2>::set(T a, T2 b){
    x = a;
    y = b;
}

template<class T,class T2>
void GClass<T,T2>::get(T& a, T2& b){
    a = x;
    b = y;
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