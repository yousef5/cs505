#include <iostream>
#include <string>
using namespace std;

// =================================


int main(){
    int arr[] = {5, 10, 15, 20, 25};
    int* ptr = arr;

    // Increment pointer
    cout << "Incrementing pointer:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << *ptr << " ";
        ptr++;
    }

    // Decrement pointer back to the start
    cout << "\nDecrementing pointer:" << endl;
    for (int i = 0; i < 5; i++) {
        ptr--;
        cout << *ptr << " ";
    }


      int* intPtr;
    char* charPtr;
    double* doublePtr;

    doublePtr++;

    cout << "Size of int pointer: " << sizeof(intPtr) << " bytes" << endl;
    cout << "Size of char pointer: " << sizeof(charPtr) << " bytes" << endl;
    cout << "Size of double pointer: " << sizeof(doublePtr) << " bytes" << endl;

    return 0;
}