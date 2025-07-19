#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
//linear search approch time complexity O(n)
bool linearsearch(vector<vector<int>> & num, int target)
{
    int m=num.size() , n= num[0].size();
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(num[i][j]==target)
            {
                return true;
            }
        
        }
    }
    return false;
    
}
bool searchmatrix1(vector<vector<int>> &mat ,int target)
{
    int m=mat.size() , n=mat[0].size();
    int r=0, c=n-1;
    while(r<m && c>=0)
    {
        if(target==mat[r][c])
        {
            return true;
        }
        else if(target<mat[r][c])
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    return false;
}
bool searchmatrix(vector<vector<int>>& mat,int target)
{
    int m=mat.size() , n=mat[0].size();
    int r=0 , c=n-1;       //  time complexity = O(m*n)
    while(r<m && c>=0)
    {
        if(target==mat[r][c])
        {
            return true;
        }
        else if(target<mat[r][c])
        {
           c--;
        }
        else
        {
            r++;
        }
    }
    return false;
}

int main()
{
    // vector<vector<int>>mat={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    // int target=5;
    // cout<<searchmatrix(mat,target); 
    vector<vector<int>>matrix ={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target =34;
 //  cout<<searchmatrix1(matrix,target);   
   
   // 2D vector create 
   vector<vector<int>>vac={{1,2,3},{4,5,6},{7,8,9}};
   
   //row = vac.size();
   //column = vac[0].size();
   for(int i=0;i<vac.size();i++)
   {
       for(int j=0;j<vac[0].size();j++)
       {
           cout<<vac[i][j]<<" ";
       }
       cout<<endl;
   }
   
   cout<<linearsearch(matrix,target);
   

    return 0;
}
