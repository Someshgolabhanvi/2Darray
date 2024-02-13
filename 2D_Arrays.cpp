#include<iostream>
using namespace std;
int main()
{
    int arr[4][3];
    int k=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            k+=1;
            cout<<k<<" ";
        }
        cout<<endl;
    }
}