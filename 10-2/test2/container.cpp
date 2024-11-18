#include <iostream>
using namespace std;

// 템플릿 클래스 Container , 자료형 T
template <class T>
class Container{
    T* p; // 동적 배열의 시작 주소를 저장할 포인터
    int size;  // 배열의 크기
public:
    Container(int n); //생성자
    ~Container(); //소멸자
    void set(int index, T value); //배열에 값을 설정
    T get(int index); //배열의 값 반한
};


template <class T>
Container<T>::Container(int n){
    size =n; //배열 크기 저장
    p = new T[n]; //크기 n 동적배열 생성
   

}
template <class T>
Container<T>::~Container(){
    delete [] p;// 동적 배열 메모리 삭제
}

template <class T>
void Container<T>::set(int index , T value){
    p[index] = value; //배열 p index에 value를 저장
}

template <class T>
T Container<T>::get(int index){
    return p[index]; //인덱스값 반환
}


int main() {
    Container<char> c(26);
    for (int i = 0; i < 26; i++)
    c.set(i, 'a' + i);
    for (int i = 25; i >= 0; i--)
    cout << c.get(i);
    cout << endl;
}