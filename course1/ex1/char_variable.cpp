#include<iostream>
using namespace std;

int main(int argc, char* argv[]){
    char charvar1 = 'A';
    char charvar2 = '\t';
    
    cout << "\\"; // it will print only one backslash
    cout << "\n\xB2 \n";
    

    cout << "value of charvar1 is: " << charvar1 << endl;
    cout << "value of charvar2 is: " << charvar2 << endl;

    charvar1 = 'B';
    cout << "value of charvar1 is: " << charvar1 << endl;
    cout << '\n'; // this will creat an empty line
    cout << "number of arguments passed is:  " << argc << endl; // printing the value of argc 

    
    for(int i = 0; i < argc ; i++){
        cout << *argv[i];
    }
    cout << argv[1] << endl;
    return 0;
}
