#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;//number can be 1060 very long
    cin>>n;
    while (true)
    {
        cout<<n<<" ";
        if (n==1)
        break;
        if(n%2==0)// if number = event then divide by2
        n=n/2;
        else
        n=n*3+1;
    }
    return 0;
}
