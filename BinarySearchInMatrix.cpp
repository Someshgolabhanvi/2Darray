#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int N=matrix.size(),M=matrix[0].size();
    int row_index,col_index,start=0,end=N*M-1; 
            
            
                while(start<=end)
                {
                    int mid = start + (end-start)/2;
                    row_index=mid/M;
                    col_index=mid%M;
                    if(matrix[row_index][col_index]==target)
                    return 1;
                    else if(matrix[row_index][col_index]<target)
                    start=mid+1;
                    else
                    end=mid-1;
                }
                 return 0;
    }
int main()
{   int target;
    cin>>target;
    vector<vector<int>> matrix = {{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24},{25,26,27,28,29,30},{31,32,33,34,35,36}};
    cout<<searchMatrix(matrix,target);
} 