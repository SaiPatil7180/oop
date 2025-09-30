#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:
    // Constructor 
    Complex(float p = 0, float q = 0) {  
        real = p;
        imag = q;
    }

  
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex operator+(const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }

    
    friend Complex operator*(const Complex& c1, const Complex& c2);
};


Complex operator*(const Complex& c1, const Complex& c2) {
    float realPart = (c1.real * c2.real) - (c1.imag * c2.imag);
    float imagPart = (c1.real * c2.imag) + (c1.imag * c2.real);
    return Complex(realPart, imagPart);  
}

int main() {
    Complex c1(3, 4);
    c1.display();  

    Complex c2(1, 6);
    c2.display(); 

    Complex c3 = c1 + c2;  
    cout << "Sum: ";
    c3.display();  

    Complex c4 = c1 * c2;  
    cout << "Product: ";
    c4.display();  

    return 0;
}
