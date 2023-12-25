//adding two complex number using operator overloading
#include<iostream>
using namespace std;

class Complex{
private:
double imag;
double real;

public:
Complex(double i,double r){
    imag=i;
    real=r;
}
    Complex operator +(const Complex& obj){
        return Complex(real+obj.real,imag+obj.imag);
    }
    void display(){
        cout<<"The sum is"<<real<<'+'<<imag<<'i'<<endl;
    }
};
int main(){
    Complex c1(2.0,3.0),c2(5.0,6.0);
    Complex result=c1+c2;
    result.display();
    return 0;
}
