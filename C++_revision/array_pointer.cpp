#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
    int intarray[] = {1, 2, 3};
    int* p = intarray;  // p now contains the address of the first element of the array 
    // p = &intarray[0]
    // cout<< (*p)++ << endl ;
    // cout<< *p++ << endl ;
    cout << p <<"\n" << p++ << "\n" << p << endl;

    cout << intarray[0];
    return 0;
}