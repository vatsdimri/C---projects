#include <iostream>

using namespace std;
int main(){
    int i = 8;
    int* add = &i; // pointer variable
    cout << "Value of i is:  "<<i << endl;
    // & operator gives address also called reference operator
    cout << "Address of i is: "<< &i << endl;  
    // * operator gives values at the address also called dereference operator
    cout << "Value at the address: " << * (&i)<< endl; 

    cout<< "Value of pointer is : "<< add<< endl;

    return 0;
}
