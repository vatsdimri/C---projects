#include <iostream>
using namespace std;

class Base{
    // Any class containing a virtual function is called an abstract class
    // Abstract classes can't have any object
    // the classes that inherit the abstract classes have to implement the 
    // the functions
    int x;
    public:
        virtual void fun()=0; // This is virtual function 
        int getX(){return x;}

};

class derived: public Base{
    // The derived class is inheriting the Base class
    // This mean it will have to define a function called fun()
    int y;
    public:
        void fun(){cout<<"fun() called";}
};

int main(int argc, char* argv[]){
    int i;
    derived der;
    der.fun();
    return 0;
}