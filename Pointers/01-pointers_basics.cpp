#include <iostream>
#include <string>
using namespace std;

// =================================


int main(){
    int *p;   // declaration Pointer point to data int
    int x = 37; // declaration variable x in int and assign value 37 to variable.

    p = &x;

    cout << "x= " << x << endl;
    cout << "*p= " << *p << endl;

    //indirection

    *p = 120;

    cout << "The Value of x : " << x << endl;
    cout << "Value of Memory location pointed to Using P " << *p << endl;

    cout << "The Location of Pointer &P : " << &p << endl;

    cout << "The Pointer Memory Address point To P : " << p << endl;

    cout << "The Memory Address of X : " << &x << endl;

    return 0;
}