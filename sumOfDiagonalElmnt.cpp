#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[5][5]={3,4,7,18,2,8,33,9,5,4,2,2,7,3,0,8,2,8,9,1,5,1,9,23,0};
    int sum = INT_MIN;
    int first=0;
    for(int i=0;i<5;i++)
    {
        first+=arr[i][i];
    }
    cout<<"first diagonal sum is "<<first<<endl;
    int second=0;
    int i=0,j=4;
    while (j>=0)
    {
        second+=arr[i][j];
        i++,j--;
    }
    cout<<"second diagonal sum is "<<second<<endl;
    
}