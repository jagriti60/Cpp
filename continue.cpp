#include<iostream>
using namespace std;
int main()
{
    int i=1;
    while(i<=8)
    {
        if (i==5)
            continue;
        cout<<i<<endl;
        i++;
    }
    return 0;
}