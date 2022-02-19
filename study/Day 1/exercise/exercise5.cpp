#include<iostream>
int temp(int);
int main(){
    using namespace std;
    cout << "请输入摄氏度以转换为华氏温度: " << endl;
    int num;
    cin >> num;
    cout << "转换为: " << temp (num) << endl;
    return 0;
}
int temp(int n){
    return 1.8 * n + 32.0;
}