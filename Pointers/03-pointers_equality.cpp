#include <iostream>
#include <string>
using namespace std;

// =================================


int main(){
    int *p, *q;
    
    p = q;

    bool check = p == q;

    cout << "p = q : " << check  << endl;  //1 => ture  0 => falsep

    *p = 530;

    cout << "*p : " << *p << endl;
    cout << "*q : " << *q << endl;



    return 0;
}