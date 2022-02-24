#include <iostream>
int main(){
    using namespace std;
    cout.setf(ios_base::fixed,ios_base::floatfield);
    cout << "9/5 = "<< 9 / 5 << endl;
    cout << "9.0/5 = " << 9.0/5 <<endl;
    cout << "1.e7 /9.0 ＝ " << 1.e7/9.0 << endl; 
    return 0;
}