#include <iostream>
#include <string>
using namespace std;

// =================================

void f(int *j);

void j(int k);

int main(){
    int i = 0;

    int *p;

    p = &i;

    cout << "*p : " << *p << endl;
    cout << "i : " << i << endl;


// using function to change value of i

    f(p);

    cout << "after f function *p : " << *p << endl;
    cout << "after f function i : " << i << endl;

   *p = 0;

    cout << "*p : " << *p << endl;
    cout << "i : " << i << endl;
// using function to change value of i

    j(i);

    cout << "after function j *p : " << *p << endl;
    cout << "after function j i : " << i << endl;




    return 0;
}


//! pass by reference change original value
void f(int *j){
    *j = 150;
    
}

//! pass by value not change original value
void j(int k){
    k = 200;
}