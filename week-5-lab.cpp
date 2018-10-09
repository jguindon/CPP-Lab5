#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int main() {
int a,b,w,l,h, y=2;
    cout <<"What's the height?" << endl;
    cin >> a;
    cout <<"What's the width?" << endl;
    cin >> b;
        w = pow(a,y);
        l = pow(b,y);
     h = l+w;
        h = pow(h,y);
    cout <<"Width(Squared) + Height(Squared) equals:" << h << endl;
{
auto total = h;
     cout<< "Now lets square root it!" << endl;
    sqrt(h);
     cout << sqrt(h) << endl;


}
ofstream Lab5;
Lab5.open ("text.txt");
Lab5 << "Your triangle has 3 sides that are: \n" << a << "cm," << b << "cm," << sqrt(h) << "cm." << endl;
Lab5.close();



return 0;

}