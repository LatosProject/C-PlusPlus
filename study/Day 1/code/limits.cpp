#include <iostream>
#include <climits>
int main(){
    using namespace std;
    int n_int= INT_MAX;
    short n_short=SHRT_MAX;
    long n_long=LONG_MAX;
    long long n_llong=LLONG_MAX;
    //sizeof是一种内存容量度量函数，是一种表达式长度的运算符
    //sizeof的计算发生在编译时刻，所以可以用来被当做常数表达式使用
    cout << "int is " << sizeof (int) << " bytes." << endl;
    cout << "short is " << sizeof n_short << " bytes." << endl;
    cout << "long is" << sizeof n_long << " bytes." << endl;
    cout << "long long is" << sizeof n_llong << " bytes." << endl;
    cout << endl;
    //----------------------------------------------------------
    cout << "Maximum values:" << endl;
    cout << "int:" << n_int << endl;
    cout << "short:" << n_short << endl;
    cout << "long:" << n_long << endl;
    cout << "long long:" << n_llong << endl << endl;
    //-----------------------------------------------------------
    cout << "Minimum int value = " << INT_MIN << endl;
    //char_bit代表每个字节的位数
    cout << "Bits per byte = " << CHAR_BIT << endl;
    return 0;
}
