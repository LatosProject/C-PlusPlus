#include <iostream>
int main (){
    using namespace std;
	short num1 = 80;
    unsigned int num2 =42110;
    long long num3= 3000000000;
    int num4 = 88;
    //显示编码为88的字符
    cout << char(num4) << endl;
    cout.put(num4) << endl;
    char char1 = num4;
    cout << char1 << endl;

    //----------------------------

    auto cars =14;//int type
    auto iou = 150.37;//double type
    auto level = 'b' ;//char type
    auto crat = u'/u00002155';// unsigned type

    return 0;
}