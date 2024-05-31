#include<iostream>
using namespace std;

int main()
{ 
    int var1;  // define var1 as integer
    int var2;  // define var2 as integer
    var1 = 20;  //assign value to var1
    var2 = var1 + 10; // assign value to var2
    cout << "var1 + 10 is ";  //output text 
    cout << var2 << endl;  //output value of var2
    /* Comment out printing of Hello world!
    cout << "Hello World!"; //prints Hello world! But
    it won't work because it is inside comment block
    */
    cout << &var1 << endl; // printing the address of var1
    cout << &var2 << endl; // printing the address of var2
    // checkibng the size of char, int, float and double
    cout << "size of char: " << sizeof(char) << "byte" << endl;
    cout << "size of integer: " << sizeof(int) << "byte" << endl;
    cout << "size of float: " << sizeof(float) << "byte" << endl;
    cout << "size of double: " << sizeof(double) << "byte" << endl; 

    return 0;
}