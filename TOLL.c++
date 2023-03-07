#include <iostream>
#include<string>
using namespace std;
class Toll
{
    public:
        double i=0;
        
        double payingcar(double TollAmt)
        {
            i=TollAmt;
            return i;
        }
        int nonpayingcar()
        {
            if(i==0) return 1;
            else return 0;
        }
};
int main()
{
    int j,t;
    double TollAmt,p;
    string VehicleNo;
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>VehicleNo>>TollAmt;
        Toll obj;
        p+= obj.payingcar(TollAmt);
        obj.nonpayingcar();
    }
    cout<<t<<endl<<p;
	return 0;
}
