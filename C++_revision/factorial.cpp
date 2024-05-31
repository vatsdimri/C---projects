#include <iostream>

using namespace std;

int fact(int n){
    if(n==0)
        return 1;
    if(n == 1)
        return 1;
    return n*fact(n-1); // I have used recursion for factorial
}

int main(){
    int var;
    cout << "Enter a positive integer: ";
    cin >> var;
    cout << "Factorial of " << var << " is : " << fact(var)<<endl;
    return 0;

}