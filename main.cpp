// COMSC-210 | Lab 6 | Loma Kim
#include <iostream>
using namespace std;

const int SIZE = 5;

//Function Prototypes
void enterArrayData(double* []);
// void outputArrayData(double* []);
// double sumArray(double* []);

int main(){
    //Declarations
    double *ptr = nullptr;
    ptr = new double[SIZE];

    delete [] ptr;

    return 0;
}

void enterArrayData(double* arr) {

}
// void outputArrayData(double* []) {}
// double sumArray(double* []); {}