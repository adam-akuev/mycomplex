#include "pch.h"
#include <iostream>
#include <cmath>

struct Complex {
    double real;
    double imag;
};

namespace MathLib {
    Complex add(const Complex& a, const Complex& b) {
        return { a.real + b.real, a.imag + b.imag };
    }

    Complex subtract(const Complex& a, const Complex& b) {
        return { a.real - b.real, a.imag - b.imag };
    }

    Complex multiply(const Complex& a, const Complex& b) {
        return { a.real * b.real - a.imag * b.imag, a.real * b.imag + a.imag * b.real };
    }

    double modulus(const Complex& a) {
        return std::sqrt(a.real * a.real + a.imag * a.imag);
    }

    Complex divide(const Complex& a, const Complex& b) {
        if (b.real == 0 && b.imag == 0) {
            throw ("Деление на ноль невозможно!!!");
        }
        double denominator = b.real * b.real + b.imag * b.imag;
        return {
            (a.real * b.real + a.imag * b.imag) / denominator,
            (a.imag * b.real - a.real * b.imag) / denominator
        };
    }
}
