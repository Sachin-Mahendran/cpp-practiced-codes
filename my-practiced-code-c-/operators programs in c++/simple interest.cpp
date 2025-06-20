#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int p, r, y;//principal amount,rte of interest,time period in years
    cin >>p>>r>>y;
    double interest=(p* r* y)/100.0;
    double amount=p+interest;
    double discount=interest*0.02;
    double finalSettlement=p+(interest-discount);
    cout<<fixed<<setprecision(2);
    cout<<interest<<endl;
    cout<<amount<<endl;
    cout<<discount<<endl;
    cout<<finalSettlement<<endl;

}
