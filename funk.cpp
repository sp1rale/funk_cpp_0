#include "funk.h"
#include <iostream>
#include <cmath>
#include <string>

// Task 1
void printRectangle(int N, int K) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

// Task 2
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

// Task 3
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Task 4
int cube(int n) {
    return n * n * n;
}

// Task 5
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Task 6
bool isPositive(int n) {
    return n > 0;
}

// Task 7
double power(double base, int exponent) {
    return std::pow(base, exponent);
}

// Task 8
int sumInRange(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        sum += i;
    }
    return sum;
}

// Task 9
void findPerfectNumbers(int start, int end) {
    for (int number = start; number <= end; number++) {
        int sumOfDivisors = 0;
        for (int i = 1; i <= number / 2; i++) {
            if (number % i == 0) {
                sumOfDivisors += i;
            }
        }
        if (sumOfDivisors == number) {
            std::cout << number << " is a perfect number." << std::endl;
        }
    }
}

// Task 10
void printCard(const std::string& card) {
    std::cout << "Card: " << card << std::endl;
}

// Task 11
bool isLuckyNumber(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum == 7; 
}