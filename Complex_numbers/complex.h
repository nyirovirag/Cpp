#pragma once
#include <iostream>


class Complex{
    private:
        double _real;
        double _imag;
    public:
        Complex(){
            _real=0;
            _imag=0;
        }
        Complex(double real, double imag){
            _real = real;
            _imag = imag;
        }
        //setters
        void setReal(double inputR);
        void setImag(double inputR);
        //getters
        double getReal();
        double getImag();
        //operations
        Complex operator+(Complex num2);
        Complex operator-(Complex num2);
        Complex operator*(Complex num2);
        Complex operator/(Complex num2);
        Complex operator*(double n);

    private:
        friend std::ostream &operator<<(std::ostream &os, Complex &c);
};

inline std::ostream &operator<<(std::ostream &os, Complex &c)   //#include <iostream>
{
  os << c._real << " + " << c._imag << "i";
  return os;
}