#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    // Default constructor (zero arguments)
    Complex() : real(0), imag(0) {}

    // Constructor with one argument
    Complex(double r) : real(r), imag(0) {}

    // Constructor with two arguments
    Complex(double r, double i) : real(r), imag(i) {}

    // Function to return the real part
    double rpart() const {
        return real;
    }

    // Function to return the imaginary part
    double ipart() const {
        return imag;
    }

    // Function to add two complex numbers
    Complex add(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Function to multiply two complex numbers
    Complex mul(const Complex& other) const {
        double r = (real * other.real) - (imag * other.imag);
        double i = (real * other.imag) + (imag * other.real);
        return Complex(r, i);
    }

    // Function to display the complex number
    void display() const {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    Complex c1; // Default constructor
    Complex c2(3); // Constructor with one argument
    Complex c3(3, 4); // Constructor with two arguments

    c1.display(); // Output: 0 + 0i
    c2.display(); // Output: 3 + 0i
    c3.display(); // Output: 3 + 4i

    Complex c4 = c3.add(c2); // Adding c3 and c2
    c4.display(); // Output: 6 + 4i

    Complex c5 = c3.mul(c2); // Multiplying c3 and c2
    c5.display(); // Output: 9 + 12i

    return 0;
}
