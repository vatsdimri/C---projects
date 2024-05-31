#include <iostream>

using namespace std;



class Cube{
    public: 
        double getVolume() {return length_*length_*length_;};
        double getSurfaceArea(){return 6*length_*length_;};
        void setLength(double length){length_ = length;};
    private:
        double length_;
};

int main(){
    Cube c;
    c.setLength(5);
    cout<< "The Volume of the cube is : " << c.getVolume();
    return 0;
}
