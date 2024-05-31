#include "cube.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    Cube c;
    Cube* b = new Cube;
    int* i = new int;
    *i = 7;
    c.setLength(4);
    double volume = c.getVolume();
    cout << "Volume of the cube is :  " << volume<< endl;
    b->setLength(5);
    cout << "Volume of the second cube is : "<< b->getVolume()<< endl;
    cout << "Volume of the second cube is : "<< (*b).getVolume()<< endl;

    cout << "value of b is : "<< b<< endl;
    cout<< "size of b is : "<< sizeof(b)<< "\n";
    cout<< "size of *i is : "<< sizeof(*i)<< endl;
    cout<< "Number of argument variables: " << argc<< endl;

    if(argc >1){
        for(int i = 1; i<= argc; i++){
            cout << argv[i] << endl;
        }

    }
    
    return 0;
}
