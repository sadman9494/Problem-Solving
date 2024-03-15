#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&arr, int start , int mid, int last)
{
   int l = start;
   int k = mid+1;
   int m = last;
   int p = start;
  vector<int>temp = arr;

  while (l<=mid &&  k <=last)
  {
     if(temp[l] <= temp[k])
     {
        arr[p] = temp[l];
        l++;
        
     }
     else 
     {
        arr[p] = temp[k];
        k++;
       
     }
      p++;
  }

  while (l<=mid)
  {
    arr[p]=temp[l];
    l++;
    p++;
  }
  while(k<=last)
  {
    arr[p] = temp[k];
    k++;
    p++;
  }
}

void divide(vector<int>& arr, int start, int end)
{
    if(start == end)
    {
        return;
    }
    int mid = start + (end - start)/2;
    divide(arr, start, mid);
    divide (arr , mid+1, end);
    merge(arr, start, mid, end);
}

int main()
{
    vector<int> arr = {-1,100,56,-8000,2};
    divide(arr, 0, arr.size()-1);
    for(auto i : arr)
    {
        cout << i << " ";
    }
}