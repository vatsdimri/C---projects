#include<iostream>
using namespace std;

class circle{ 
    public :
        double radius;

        double compute_area(){
            return 3.14 * radius * radius ;
        }
};

class rectangle{
    public:
        double width, breadth;

        double compute_area(){
            return width * breadth ;
        }
};


int main(){
    circle obj1;
    rectangle obj2;
    rectangle obj3;
    cout << "\nThis program calculate the area of a circle.\n \
    what is the radius of the circle? \t";
    cin >> obj1.radius;

    cout << "\n Radius of the circle is: " << obj1.radius << endl;
    cout << "Area of the circle is: " << obj1.compute_area();

    cout << "\nThis part of the program calculate the area of \
    a rectangle.\n what are width and breadth of the rectangle?\n\
    Width: ";
    cin >> obj2.width;
    cout << "\n Breadth: ";
    cin >> obj2.breadth;
    cout << " The area of the rectangle is: " << obj2.compute_area();
    cout << "\nThis part of the program calculate the area of \
    a rectangle.\n what are width and breadth of the rectangle?\n\
    Width: ";
    cin >> obj3.width >> obj3.breadth; // inputing two values at same time
    cout << "\n The area of the rectangle is: " << obj3.compute_area();
    
    //main();
    return 0;
}