#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int diagonalsum(int arr[][4],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                sum+=arr[i][j];
            }
            else if(j==n-i-1)
            {
                sum+=arr[i][j];
            }
        }
    }
    return sum;
}
int searcharray(vector<vector<int>>nums,int target)
{
    int m=nums.size();
    int n=nums[0].size();
  
    int r=0, c=n-1;
    while(r<m && c>=0) 
    {
        if(target==nums[r][c])
        {
            return true;
        }
        else if(target<nums[r][c])
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
int secondsearcharray(vector<vector<int>>arr,int target)
{
    int m=arr.size();  //row of size
    int n=arr[0].size(); //column of size
    int r=0 ,c=n-1;
    while(r<m && c>=0)
    {
        if(target==arr[r][c])
        {
            return true;
        }
        else if(target<arr[r][c])
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
    //int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
 // int n=4;
 // cout<<diagonalsum(matrix,n);
 
  // 2D array search
 // vector<vector<int>>matrix={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
 // int target=34;
 
  //cout<<searcharray(matrix,target);
  //array search
  //second program
  vector<vector<int>>arr={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
  int target =5;
  cout<<secondsearcharray(arr,target);
}
