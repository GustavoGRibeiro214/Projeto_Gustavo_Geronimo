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

    void MB3(){
        cout <<"MB3" << endl;
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
    void MC3(){
        cout <<"MC3" << endl;
    }
};

class D {
private:
    int D1;
    float D2;

public:
    // Getters
    int getD1() {
        return D1;
    }

    float getD2() {
        return D2;
    }

    // Setters
    void setD1(int valor) {
        D1 = valor;
    }

    void setD2(float valor) {
        D2 = valor;
    }

    void MD1() {
        cout << "MD1" << endl;
    }

    void MD2() {
        cout << "MD2" << endl;
    }
    void MD3(){
        cout <<"MD3 alteração" << endl;
    }
    void MD4(){
        cout << "MD4" <<endl;
    }
};

int main() {
    return 0;
}
