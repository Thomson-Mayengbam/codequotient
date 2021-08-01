#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std;

void primeFactors(int n){
    int i=2;
    while(n>=i*i)
    {
            if(n%i==0)
            {
                cout<<i<<"\n";
                n = n/i;
            }
            else
                i++;

    }
   if(n<i*i)
    cout << n;
}

int main()
{
    int n;
    cout << "Number: ";
    cin >> n;
    primeFactors(n);
    return 0;
}
