#include <iostream>
#include <cmath>
int main(){
     using namespace std;
     double area;
     cout << "Enter the floor area, in square feet,of your ho11me： ";
     cin >> area;
     double side;
     side = sqrt(area);
     cout << "That's the equivalent of a square" << side << endl;
     cout << "How fascinating" << endl;
     return 0;
}