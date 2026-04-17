#include <iostream>
using namespace std;

class A {
private:
    int A1;
    float A2;

public:
    // Getters
    int getA1() {
        return A1;
    }

    float getA2() {
        return A2;
    }

    // Setters
    void setA1(int valor) {
        A1 = valor;
    }

    void setA2(float valor) {
        A2 = valor;
    }

    void MA1() {
        cout << "MA1" << endl;
    }

    void MA2() {
        cout << "MA2" << endl;
    }
};

class B {
private:
    int B1;
    float B2;

public:
    // Getters
    int getB1() {
        return B1;
    }

    float getB2() {
        return B2;
    }

    // Setters
    void setB1(int valor) {
        B1 = valor;
    }

    void setB2(float valor) {
        B2 = valor;
    }

    void MB1() {
        cout << "MB1" << endl;
    }

    void MB2() {
        cout << "MB2" << endl;
    }
};

// Função principal para testar
int main() {
    return 0;
}