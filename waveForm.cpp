#include<iostream>
using namespace std;
void wave(int a[][5],int row,int col)
{
    for(int i=0;i<col;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<row;j++)
            cout<<a[j][i]<<" ";
        }
        
        else{
            for(int j=row-1;j>=0;j--)
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[4][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    /*
    input
    1  2  3  4  5
    6  7  8  9  10
    11 12 13 14 15
    16 17 18 19 20
    output
    1  6  11 16 17 12 7 2 3 8 13 18 19 14 9 4 5 10 15 20
    
    1 6 11 16 
    17 12 7 2
    3 8 13 18
    19 14 9 4
    5 10 15 20
    */
   wave(arr,4,5);

} 