#include <iostream>
using namespace std;
int main(){
    //const限定一个变量不允许被修改
    const int Lbs_per_sth =14;
    int lbs;

    cout << "Enter your weight in pounds:";
    cin >> lbs;
    int stone = lbs / Lbs_per_sth;
    int pounds = lbs % Lbs_per_sth;
    cout << lbs << " pounds are " << stone << " stone, " << pounds << "pound(s）。\n";
    return 0;
}