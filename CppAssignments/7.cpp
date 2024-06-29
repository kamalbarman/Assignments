#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

  
    friend std::istream& operator>>(std::istream &input, Complex &c) {
        input >> c.real >> c.imag;
        return input;
    }

   
    friend std::ostream& operator<<(std::ostream &output, const Complex &c) {
        output << "(" << c.real << " + " << c.imag << "i)";
        return output;
    }

    
    Complex operator+(const Complex &c) const {
        return Complex(real + c.real, imag + c.imag);
    }


    Complex operator*(const Complex &c) const {
        return Complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
    }

  
    Complex operator-() const {
        return Complex(-real, -imag);
    }
};

int main() {
    Complex c1, c2, result;

    std::cout << "Enter first complex number (real and imaginary part): ";
    std::cin >> c1;

    std::cout << "Enter second complex number (real and imaginary part): ";
    std::cin >> c2;

    result = c1 + c2;
    std::cout << "Sum: " << result << std::endl;

    result = c1 * c2;
    std::cout << "Product: " << result << std::endl;

    result = -c1;
    std::cout << "Negation of first number: " << result << std::endl;

    return 0;
}
