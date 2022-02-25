#include <iostream>
using namespace std;
int main (){
    double degrees;
    int min;
    int second;
    const double n =60;
    cout << "degrees" << endl;
    cin >> degrees;
    cout << "min" << endl;
    cin >> min;
    cout << "second" << endl;
    cin >> second;
    degrees = degrees + min / n + second / n / n;
    cout << degrees << endl;
    return 0;
}