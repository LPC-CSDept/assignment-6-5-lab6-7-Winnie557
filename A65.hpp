//

#include <iomanip>
#include <iostream>
using namespace std;

// complete two functions
// swap() ; to swap all three values like (a, b, c) to (c, a, b)
void getInput(int &a, int &b, int &c){
    cout << "Enter three integers: " << endl;
    cin >> a >> b >> c;
}
void swap(int &a, int &b, int &c){
    a = a + b + c;
    b = a - (b+c);
    c = a - (b+c);
    a = a - (b+c);
}
//              This function will use swaptwo().

// swaptwo() ; to swap two values (a, b) to (b, a)
void getInput1(int &a, int &b){
    cout << "Enter two integers: " << endl;
    cin >> a >> b;
}
void swaptwo(int &a, int &b){
    a = a+b;
    b = a-b;
    a = a-b;
}
int main(){
    int a, b, c;
    getInput(a,b,c);
    cout << "Before swapping a = " << a << ", b = " << b << ", c = " << c << endl;
    swap(a,b,c);
    cout << "After swapping a = " << a << ", b = " << b << ", c = " << c << endl;
    getInput1(a,b);
    cout << "Before swapping a = " << a << ", b = " << b << endl;
    swaptwo(a,b);
    cout << "After swapping a = " << a << ", b = " << b << endl;
    return 0;
}




