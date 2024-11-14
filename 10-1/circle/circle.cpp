#include <iostream>
using namespace std;

class Circle{
    int radius;
public:
    Circle(int radius);
    Circle operator>(Circle a);
    int getRadius();
};

Circle::Circle(int radius){
    this->radius = radius;
}

int Circle::getRadius(){
    return radius;
}

template <class T>
T bigger(T a , T b ){
    if(a>b)
        return a;
    else
        return b;
    
}

Circle Circle::operator >(Circle a){
    Circle c = a;

    if(a.radius>radius){
        
    }

    

    
}


int main(){

    int a=20, b=50 ,c;
    c = bigger(a,b);
    cout<< "20과 50중 큰값은"<<c<<endl;

    Circle dount(10),pizza(20),y;

    y = bigger(dount,pizza);
    cout<<"dount과 pizza중 큰 반지름은"<<y.getRadius()<<endl;
}