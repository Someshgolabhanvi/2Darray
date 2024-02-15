#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void transpose(vector<vector<int> >& matrix)
    { 
        // code here 
            int n=matrix.size();
            for(int j=0;j<n-1;j++)
            for(int i=j+1;i<n;i++)
            {
              
                  swap(matrix[i][j],matrix[j][i]);
            }
            for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix.size();j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }

int main()
{
    vector<vector<int>> matrix = {{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24},{25,26,27,28,29,30},{31,32,33,34,35,36}};
    transpose(matrix);
} 