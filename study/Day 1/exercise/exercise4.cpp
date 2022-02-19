#include<iostream>
int mounts(int);
int main(){
    using namespace std;
    int ages;
    cout << "Enter your age: " << endl;
    cin >> ages;
    cout << mounts(ages) << endl;
    return 0;
}
int mounts(int n){
    return n*12;
}