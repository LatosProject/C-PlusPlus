#include<iostream>
void info_func_2();
void info_func_1();
int main(){
    using namespace std;
    info_func_1();
    info_func_2();
    return 0;
}
void info_func_1(){
    std::cout << "Three blind mice" << std::endl;
}
void info_func_2(){
    std::cout << "See how they run" << std::endl;
}