#include <iostream>
#include <thread>

int hello(){
/*     int i = 1000000000;
    while(i!=0){
        i--;
    } */
//    std::cout<<"\nHello Multithreading world!";
    std::cout<<"\nthis is thread 2";
    return 0;
};

int hello2(){
    std::cout<<"\nthis is thread 3";
    return 0;
};
int hello3(){
    std::cout<<"\nthis is not another thread, this is part of thread 1";
    return 0;
};

int main(){
    std::thread t1(hello);
    std::thread t2(hello2);
    hello3();
    int i = 1000000;    // This is to test how long thread 1 can wait and still be first to complete tasks
    while(i!=0){
        i--;
    }
    std::cout<<"\nthis is thread 1";
    t2.join();
    t1.join();
    
    return 0;
}