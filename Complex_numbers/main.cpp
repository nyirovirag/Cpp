#include <iostream>
#include "complex.h"

using namespace std;

int main(){

    Complex num;
    Complex num2(1,-2);
    double n = 2;

    num.setReal();
    num.setImag();
    cout<<endl;
    num.getReal();
    num.getImag();
    cout<<endl;
    num.add(num2);
    num.sub(num2);
    num.mul(num2);
    num.div(num2);
    num.mulScalar(n);

    return 0;
}
