#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    //int count=1;
    while (i<=n)
    {
       int j=1;
        while(j<=n)
        {
            int ch=i+j-1;
            cout<<ch<<" ";
            j=j+1;
           // count=count+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}
   