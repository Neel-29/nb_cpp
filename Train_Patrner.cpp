#include <iostream>
using namespace std;

class partner
{
    public:
        int n;
        void findpartner()
        {
            if(n%8==1) cout<<n+3<<"LB\n";
            else if(n%8==2) cout<<n+3<<"MB\n";
            else if(n%8==3) cout<<n+3<<"UB\n";
            else if(n%8==7) cout<<n+1<<"SU\n";
            else if(n%8==0) cout<<n-1<<"SL\n";
            else if(n%8==4) cout<<n-3<<"LB\n";
            else if(n%8==5) cout<<n-3<<"MB\n";
            else if(n%8==6) cout<<n-3<<"UB\n";
        }
        partner()
        {
            cin>>n;
        }
};
int main()
{
    int i;
    cin>>i;
    for(int j=0;j<i;j++)
    {
        partner travel;
        travel.findpartner();
    }
}
