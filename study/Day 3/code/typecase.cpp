#include <iostream>
using namespace std;
int main(){
    int auks, bats ,coots;

    auks = 19.99 + 11.99;
    //强制类型转换
    //int类型 为计算机最自然的类型往往两个相同类型的值相加会先转换成int 算出结果后 再转换为之前的类型 这种办法看起来很别扭，但是运算速度更快
    //int 和 float 相加会优先转换为更高的数值类型
    bats = (int) 19.99 +(int) 11.99; //c表示
    coots = int (19.99) + int (11.99); //c++表示
    cout <<"auks = " << auks << ", bats = " << bats << ", coots = " << coots << endl;

    char ch = 'z';
    cout <<"the code for " << ch << " is ";
    cout << int(ch) << endl ;
    cout <<"yes ,the code is  ";
    //staticvim_case 可用于将值转换为另一种数值类型，它比传统的数值转换更严格
    cout << static_cast<int>(ch) << endl;
 


    return 0;
}