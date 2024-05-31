#include<iostream>
using namespace std;

int main(int argc, char *argv[]){
    char charvar1 = 'A';
    char charvar2 = '\t';

    cout << "value of charvar1 is: " << charvar1 << endl;
    cout << "value of charvar2 is: " << charvar2 << endl;

    charvar1 = 'B';
    cout << "value of charvar1 is: " << charvar1 << endl;
    cout << '\n';
    cout << argc << endl;
    cout << argv[0]<< endl;
    if(argc >1){
        for(int i = 1; i<= argc; i++){
            cout << argv[i] << endl;
        }

    }
    return 0;
}
