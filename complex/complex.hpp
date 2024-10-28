#ifndef COMPLEX_HPP
#define COMPLEX_HPP

class Complex{
    int a,b;
public:
    Complex();
    Complex(int a, int b);

    friend Complex ComplexAdd(const Complex& c1 , const Complex& c2 );

    void show();
};

#endif