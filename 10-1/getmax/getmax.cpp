#include<iostream>
using namespace std;


template<class T>

T getmax(T a[], int b){ //배열 a 에서 b개의 수중 가장큰 값 리턴
    T max = a[0]; //초기 값을 0으로 초기화
    for(int i = 0;i<b;i++){
        if(max<a[i]){
            max = a[i];
        }
    }
    return max;   //max값 리턴
}

int main() {
    int a[5]={-5, 10, 30, 20, 6};
    double b[4]= {3.14, 1.5, -6.0, 0.5};
    char c[3] = {'a' , 'x' ,'p'};

    //컴파일러가 자동으로 자료형을 지정햊 주지만 , 명시적으로 지정해 주는 방법도 있다.
    cout << "정수배열의 최대값은"<< getmax<int>(a,5)<< endl; //정수형변수 지정
    cout <<"실수배열의 최대값은" << getmax<double>(b,4) << endl; //실수형 변수 지정
    cout << "문자배열의 최대값은"<< getmax<char>(c,3) << endl; //문자형 변수 지정
}
