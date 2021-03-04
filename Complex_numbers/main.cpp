#include <iostream>
#include "complex.h"

using namespace std;

int main(){

    Complex num;
    Complex num2;
    double scalar = 2;

    //Set and get the first complex number
    double inputR, inputI;
    cout << "Set the real value of the first complex number: ";
    cin >> inputR;
    num.setReal(inputR);

    cout << "Set the imaginary value of the first complex number: ";
    cin >> inputI;
    num.setImag(inputI);

    cout << "The real value of the first complex number is: " << num.getReal() << endl;
    cout << "The imaginary value of the first complex number is: " << num.getImag() << endl;
    cout << endl;

    //Set and get the second complex number
    double inputR2, inputI2;
    cout << "Set the real value of the second complex number: ";
    cin >> inputR2;
    num2.setReal(inputR2);

    cout << "Set the imaginary value of the second complex number: ";
    cin >> inputI2;
    num2.setImag(inputI2);

    cout << "The real value of the second complex number is: " << num2.getReal() << endl;
    cout << "The imaginary value of the second complex number is: " << num2.getImag() << endl;
    cout << endl;

    //Operations
    Complex resAdd = num + num2;
    Complex resSub = num - num2;
    Complex resMul = num * num2;
    Complex resDiv = num / num2;
    Complex resScal = num * scalar;

    cout << "The sum of the two complex numbers is: " << resAdd << endl;
    cout << "The sub of the two complex numbers is: " << resSub << endl;
    cout << "The result of the multiplication is: " << resMul << endl;
    cout << "The result of the division is: " << resDiv << endl;
    cout << "The result of the multiplication of the first complex number and the given scalar number is: " << resScal << endl;

    return 0;
}
