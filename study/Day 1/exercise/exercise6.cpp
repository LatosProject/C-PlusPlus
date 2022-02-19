#include<iostream>
double conversion(double);
int main(){
    using namespace std;
    double light_years;
    cout << "请输入光年以天文单位： " << endl;
    cin >> light_years;
    cout << "转换为: " << conversion(light_years) << endl;
    return 0;
}

double conversion(double n){
    return n*63240;
}