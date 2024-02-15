#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void spiralOrder(vector<vector<int>>& matrix) {
        int top=0;
        int right=matrix[0].size()-1;
        int bottom=matrix.size()-1;
        int left=0;
        vector<int>ans;
        while(left<=right && top<=bottom)
        {
            
        //left to right
            for(int j=left;j<=right;j++)
            ans.push_back(matrix[top][j]);
            top++;
        //top to bottom 
            for(int i=top;i<=bottom;i++)
            ans.push_back(matrix[i][right]);
            right--;
        //right to left
        if(top<=bottom)
        {
            for(int j=right;j>=left;j--)
            ans.push_back(matrix[bottom][j]);
            bottom--;
        }
        //bottom to top
        if(left<=right)
        {
            for(int i=bottom;i>=top;i--)
            ans.push_back(matrix[i][left]);
            left++; 
        }
        } 
        for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;
    }

int main()
{
    vector<vector<int>> matrix = {{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24},{25,26,27,28,29,30},{31,32,33,34,35,36}};
    spiralOrder(matrix);
} 