#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

// painters partition problem 

// bool ispossible(vector<int>& arr, int n , int m, int maxallowedtime){
//     int painters =1;
//     int time = 0;
//     for(int i=0; i<arr.size();i++){
//         if(time + arr[i] <= maxallowedtime){
//             time +=arr[i];
//         } else {
//              painters ++;
//              time = arr[i];
//         }
//         if (painters > m){
//             return false;
//         } 
//     }
//     return true;
// }

// cows prob
bool ispossible(vector<int>& arr, int n , int c, int larstmindistance){
    int cows =1;
    int laststallpos = arr[0];
    for(int i=0; i<arr.size();i++){
        if(arr[i] - laststallpos >= larstmindistance){
            laststallpos = arr[i];
            cows ++;
        } if (cows ==  c){
            return true;
        } 
    }
    return false;
}

int main (){
  
    // pointers
    
//    int target;
//    cin>>target;
//    vector<int>nums ={-1,0,3,4,5,9,12};
//    int n = nums.size();
//    int st =0, end=n-1;
   

//    while(st<=end){
//     int mid = (st + end)/2;
//    if(nums[mid] < target){
//     st = mid+1;
//    } else if (nums[mid] > target){
//     end = mid-1;
//    } else {
//     cout << mid << "\n";
//     return 0;
//    }
//    }
//    cout << "not found"; //pointers 

// painters partition prob


// vector<int>arr = {40,30,10,20};
// int sum =0;
// int maxval = INT_MIN;
// for(int i=0; i<arr.size(); i++){
//     sum +=arr[i];
//     maxval = max(maxval, arr[i]);
// }
// int st = maxval; 
// int end = sum;
// int ans= -1;
// int n=4;
// int m =2;

// while(st <= end){
//     int mid = (st + (end-st)/2);
//     if(ispossible(arr, n, m, mid)){
//         ans = mid;
//         end = mid-1;
//     } else {
//         st = mid+1;
//     }
// }
// cout << ans <<" = Answer";

// cows 

vector<int>arr={1,2,8,4,9};

sort(arr.begin(), arr.end());
int st =1;
int ans=0 , c = 3;
int n =5 , mid;
int end = arr[arr.size()-1] - arr[0];
while(st <= end){
    mid = st + (end-st)/2;
    if(ispossible(arr, n, c, mid)){
        ans = mid;
        st = mid+1;
    } else {
        end = mid-1;
    }
}
cout << ans << " = Answer";

    return 0;
} 