#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    //create 2d vector
    int n,m;
    cin>>n>>m;
    vector<vector<int> >matrix(n,vector<int>(m,3));
    //vector<vector<int>>matrix(3,vector<int>(4,1));
//     for(int i=0;i<3;i++)
//     {
//     for(int j=0;j<4;j++)
//     {
//         cout<<matrix[i][j]<<" ";
//     }
//     cout<<endl;
// }
// cout<<"Rows "<<matrix.size();
// cout<<endl;
// cout<<"Cols "<<matrix[0].size();

cout<<"Rows "<<matrix.size();
cout<<endl;
cout<<"Cols "<<matrix[0].size()<<endl;

for(int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)
    {
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}
}