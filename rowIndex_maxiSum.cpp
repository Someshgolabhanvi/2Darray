//print row index with maximum sum
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[5][4]={3,4,7,18,2,8,33,9,5,4,2,2,7,3,0,8,2,8,9,1};
    int sum = INT_MIN;
    int index=-1;
    for(int i=0;i<5;i++)
    {
        int total=0;
        for(int j=0;j<4;j++)
        {
            total+=arr[i][j];
            if(sum<total)
            {
                sum=total;
                index=i;
            }
        }
    }
    cout<<index;
}