#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    
    void add(const Complex &c) {
       real=real+c.real;
       imag=imag+c.imag;
    }

   
    Complex subtract(const Complex &c) {
        return Complex(real - c.real, imag - c.imag);
    }

    
    void display() const {
        cout << real << " + i" << imag << endl;
    }
};

int main() {
    // Create two complex numbers
    Complex c1(4, 5);
    Complex c2(8, 9);

    // Perform addition and subtraction
   c2.add(c1);
    Complex diff = c1.subtract(c2);

    // Display results
    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Addition: ";
    c2.display();

    cout << "Subtraction: ";
    diff.display();

    return 0;
}