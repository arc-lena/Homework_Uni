#include <iostream>
using namespace std;

int main ()
{   double ak=1;
    int n = 1;
    for(int k=2;k<=n+1;k++)
    {
        cout<<k-1<<' '<<ak<<endl;
        ak=k*ak+1.0/k;
    }
}
