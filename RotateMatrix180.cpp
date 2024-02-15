#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//space complexity O(n^2) and Time Complexity O(n^2)
// void rotate(vector<vector<int> >& matrix) {
//     int n=matrix.size();
//     vector<vector<int>> ans(n, vector<int>(n));
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 ans[n-i-1][n-j-1]=matrix[i][j];
//             }
//         }
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 cout<<ans[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }

// 90+90 rotation with space complexity O(1) and Time Complexity O(n^2)
// void rotate(vector<vector<int> >& matrix) {
//         // Code here4
//         for(int i=0;i<matrix.size()-1;i++)
//         for(int j=i+1;j<matrix[0].size();j++)
//         {
//             swap(matrix[i][j],matrix[j][i]);
//         }
//         for(int i=0;i<matrix.size();i++)
//         {
//             int start=0,end=matrix.size()-1;
//             while(start<end)
//             {
//                 swap(matrix[i][start],matrix[i][end]);
//                 start++,end--;
//             }

//         }
//         for(int i=0;i<matrix.size()-1;i++)
//         for(int j=i+1;j<matrix[0].size();j++)
//         {
//             swap(matrix[i][j],matrix[j][i]);
//         }
//         for(int i=0;i<matrix.size();i++)
//         {
//             int start=0,end=matrix.size()-1;
//             while(start<end)
//             {
//                 swap(matrix[i][start],matrix[i][end]);
//                 start++,end--;
//             }

//         }

//         for(int i=0;i<matrix.size();i++)
//         {
//             for(int j=0;j<matrix.size();j++)
//             {
//                 cout<<matrix[i][j]<<" ";
//             }
//             cout<<endl;
//         }
    
//     }

// reversing coloum and row
    void rotate(vector<vector<int> >& matrix) {
        // Code here
        for(int i=0;i<matrix.size();i++)
        {
            int start=0,end=matrix.size()-1;
            while(start<end)
            {
                swap(matrix[start][i],matrix[end][i]);
                start++,end--;
            }

        }
        for(int i=0;i<matrix.size();i++)
        {
            int start=0,end=matrix.size()-1;
            while(start<end)
            {
                swap(matrix[i][start],matrix[i][end]);
                start++,end--;
            }

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
    vector<vector<int>> matrix= {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    rotate(matrix);
}  