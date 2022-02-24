#include <iostream>
int main(){
    using namespace std;
    float hats,heads;
    cout.setf(ios_base::fixed , ios_base::floatfield);
    //使用定点输出，同时精确到小数点后位，防止把较大的数替换成E表示法
    //cout.setf(ios_base::fixed,ios_base::floatfield);
    cout << "enter a number";
    cin >> hats;
    cout << "enter another number:";
    cin >> heads;

    cout << "hats = " << hats << "; heads + " << heads <<endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heada = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl; 
    return 0;
}