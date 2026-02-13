// COMSC-210 | Lab 6 | Loma Kim
#include <iostream>
using namespace std;

const int SIZE = 5;

//Function Prototypes
void enterArrayData(double []);
void outputArrayData(double []);
// double sumArray(double* []);

int main(){
    //Declarations
    double *ptr = nullptr;
    ptr = new double[SIZE];

    // Input array data
    enterArrayData(ptr);

    // Ouptut array data

    delete [] ptr;

    return 0;
}

void enterArrayData(double* arr) {
//    double *tempArr = nullptr;
//    tempArr = new double[SIZE];
    cout << "Data entry for the array:\n";
    for (int i = 0; i < SIZE; i++){
        cout << "\t> Element #" << i << ": ";
        cin >> *(arr + i);
    }
    cout << "Data entry complete.\n";

}
void outputArrayData(double* arr) {
    cout << "Outputting array elements: ";
    for (int i = 0; i < SIZE; i++)
        cout << *(arr + i) << " ";
    
    cout << endl;
}
// double sumArray(double* []); {}