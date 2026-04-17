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

    void MA3(){
        cout <<"Alteração a classe A partir do clone" << endl;
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

class C {
private:
    int C1;
    float C2;

public:
    // Getters
    int getC1() {
        return C1;
    }

    float getC2() {
        return C2;
    }

    // Setters
    void setC1(int valor) {
        C1 = valor;
    }

    void setC2(float valor) {
        C2 = valor;
    }

    void MC1() {
        cout << "MC1" << endl;
    }

    void MC2() {
        cout << "MC2" << endl;
    }
};

int main() {
    return 0;
}