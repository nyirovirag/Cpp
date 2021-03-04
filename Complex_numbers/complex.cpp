#include "complex.h"
#include <iostream>

//Setters
void Complex::setReal(double inputR){
    _real = inputR;
}

void Complex::setImag(double inputI){
    _imag = inputI;
}

//Getters
double Complex::getReal(){
    double realPublic = _real;
    return realPublic;
}

double Complex::getImag(){
    double imagPublic = _imag;
    return imagPublic;
}

//Operations:
//Adding two complex numbers
Complex Complex::operator+(Complex num2) {
    Complex resAdd(_real + num2._real, _imag + num2._imag);
    return resAdd;
}

//Subtracting two complex numbers
Complex Complex::operator-(Complex num2){
    Complex resSub(_real - num2._real, _imag - num2._imag);
    return resSub;
}

//Muliplying two complex numbers
Complex Complex::operator*(Complex num2){
    Complex resMul(((_real * num2._real) + ((_imag * num2._imag) * (-1))) , (_real * num2._imag + num2._real * _imag));
    return resMul;
}

//Dividing two complex numbers
Complex Complex::operator/(Complex num2){
    //div_num_real = (_real * num2._real) + (_imag * (-num2._imag) * (-1))
    //div_num_imag = _real * (-num2._imag) + num2._real * _imag
    //div_denom = (num2._real * num2._real) + (num2._imag * (-num2._imag) * (-1))
    //resDiv = div_num_real / div_denom , div_num_imag  /  div_denom

    
    Complex resDiv(((_real * num2._real) + (_imag * (-num2._imag) * (-1))) / ((num2._real * num2._real) + (num2._imag * (-num2._imag) * (-1)))  
    ,  ( _real * (-num2._imag) + num2._real * _imag ) / ((num2._real * num2._real) + (num2._imag * (-num2._imag) * (-1))));
    return resDiv;
}

//Multiplying a complex number with scalar
Complex Complex::operator*(double n){
    Complex resScal(n * _real , n * _imag);
    return resScal;
}


