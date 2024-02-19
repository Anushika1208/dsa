class Solution {
public:
void reverse(vector<int> &arr,int start,int end)
{
    while(start<=end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
    void rotate(vector<int>& nums, int k) {
    int n=nums.size();
    k=k%n;
    reverse(nums,0,n-1);
    reverse(nums,k,n-1);
    reverse(nums,0,k-1);

    }
};


// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// void reverse(int arr[],int start,int end)
// {
//     while(start<=end)
//     {
//         int temp=arr[start];
//         arr[start]=arr[end];
//         arr[end]=temp;
//         start++;
//         end--;
//     }
// }
// void rotateArray(int arr[], int n, int k) {
//     reverse(arr,arr+k);
//     reverse(arr+k,arr+n);
//     reverse(arr,arr+k);
//     // Write your code here.
// }

// int main()
// {
//     int n;
//     cin >>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];

//     }
//     int k;
//     cin >> k;
//     rotateArray(arr,n,k);
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;

// }
