#include<iostream>
using namespace std;

void weirdAlgorithm(int n)
{
    while(n != 1)
    {
        cout<<n<<" ";
        n = !(n & 1) ? n/2 : 3*n + 1;
    }
    cout<<1;
}
int main()
{
    int n;
    cin>>n;
    weirdAlgorithm(n);
}