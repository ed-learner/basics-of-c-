#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Complete the code.
     int a;
     long b;
     char c;
     float d;
     double e;

     //to get precision with:
     //cout use cout<< fixed<< setprecision(precisiondesired)<<nr<<;

     cin>>a>>b>>c>>d>>e;

     cout<<a<<endl;
     cout<<b<<endl;
     cout<<c<<endl;

     cout<<fixed<<setprecision(2)<<d<<endl;
     cout<<fixed<<setprecision(9)<<e<<endl;

    return 0;
}
