  #include <iostream>
  using namespace std;
  int main(){	
    int height;
    const int n = 30.48;
    cout << "请输入你的身高____(cm)\b\b\b\b\b\b\b\b\b";
    cin >> height;
    height = height * 30.48;
    cout << "你的身高为" << height << "英尺" << endl;

    return 0;
  }