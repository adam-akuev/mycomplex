#include "pch.h" // Добавьте эту строку
#include <iostream>
#include <cmath>

// Структура для представления комплексного числа
struct Complex {
    double real; // Действительная часть
    double imag; // Мнимая часть
};

namespace MathLib {
    // Функция для сложения комплексных чисел
    Complex add(const Complex& a, const Complex& b) {
        return { a.real + b.real, a.imag + b.imag };
    }

    // Функция для вычитания комплексных чисел
    Complex subtract(const Complex& a, const Complex& b) {
        return { a.real - b.real, a.imag - b.imag };
    }

    // Функция для умножения комплексных чисел
    Complex multiply(const Complex& a, const Complex& b) {
        return { a.real * b.real - a.imag * b.imag, a.real * b.imag + a.imag * b.real };
    }

    // Функция для вычисления модуля комплексного числа
    double modulus(const Complex& a) {
        return std::sqrt(a.real * a.real + a.imag * a.imag);
    }
}
