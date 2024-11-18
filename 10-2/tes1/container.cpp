#include <iostream>
using namespace std;

template <class T>
class Container{
    T* p;
    int size;
public:
    Container(int n);
    ~Container();
    void set(int index, T value);
    T get(int index);
};


template <class T>
Container<T>::Container(int n){
    size =n;
    p = new T[n];
   

}
template <class T>
Container<T>::~Container(){
    delete [] p;
}

template <class T>
void Container<T>::set(int index , T value){

}

template <class T>
T Container<T>::get(int index){

}


int main() {
    Container<char> c(26);
    for (int i = 0; i < 26; i++)
    c.set(i, 'a' + i);
    for (int i = 25; i >= 0; i--)
    cout << c.get(i);
    cout << endl;
}