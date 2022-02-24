#include <iostream>
//define定义宏，只要是出现zero标识的变量的值会为0
#define ZERO 0
#include <climits>
int main (){
    using namespace std;
    short sam = SHRT_MAX;
    //unsigned 未签名 表示非负数
    unsigned short sue =sam ;
    
    cout << "sam has " << sam << " dollars and sue has " << sue << endl;
    cout << "Add 1 dallars to each account." << endl;
    sam = sam + 1;
    sue = sue + 1;
    cout << "sam has " << sam << " dollars and sue has " << sue << endl;
    cout << "Poor sam and sue." << endl;
    sam = ZERO;
    sue = ZERO;
    cout << "sam has " << sam << " dollars and sue has " << sue << endl;
    cout << "take 1 dollars from each account." << endl;
    sam = sam - 1;
    sue = sue - 1;
    cout << "sam has " << sam << " dollars and sue has " << sue << endl;
    return 0 ;
}