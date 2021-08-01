#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int t1,t2;
    t1 = 0;
    t2 = 1;
    if(n==1)
    {
        cout<<t1;
        return 0;
    }
    else if(n == 2)
    {
        cout << "0\n1\n";;
        return 0;
    }
    else
    {
            int temp;
            cout << "0\n1\n";
            for(int i=3;i<=n;i++)
            {
                temp = t1+t2;
                cout << temp << "\n";
                t1 = t2;
                t2 = temp;
            }
    }
    return 0;
}