#include <iostream>

using namespace std;

class Complex {
private:
    double real; 
    double imag; 

public:
   
    Complex() : real(0.0), imag(0.0) {} 
    Complex(double r) : real(r), imag(0.0) {} 
    Complex(double r, double i) : real(r), imag(i) {} 

    
    double getReal() const {
        return real;
    }

    double getImaginary() const {
        return imag;
    }

    
    Complex add(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex multiply(const Complex& other) const {
        double newReal = real * other.real - imag * other.imag;
        double newImag = real * other.imag + imag * other.real;
        return Complex(newReal, newImag);
    }
};

int main() {
    double real, imag;

   
    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> real >> imag;
    Complex z1(real, imag);

    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> real >> imag;
    Complex z2(real, imag);

  
    cout << "z1: Real = " << z1.getReal() << ", Imaginary = " << z1.getImaginary() << endl;
    cout << "z2: Real = " << z2.getReal() << ", Imaginary = " << z2.getImaginary() << endl;

   
    Complex sum = z1.add(z2);
    cout << "Sum of z1 and z2: Real = " << sum.getReal() << ", Imaginary = " << sum.getImaginary() << endl;

   
    Complex product = z1.multiply(z2);
    cout << "Product of z1 and z2: Real = " << product.getReal() << ", Imaginary = " << product.getImaginary() << endl;

    return 0;
}
