#include<iostream>
#include<climits>
#include<vector>
using namespace std;



// bubblesort
// void bubblesort(int arr[],int n){  
//    for(int i =0; i<n-1;i++){
//        for(int j =0; j<n-i-1; j++){
//            if(arr[j]>arr[j+1]){
//                swap(arr[j],arr[j+1]);
//            }
//        }
//      }
//   }

// selection sort
void selectionsort(int arr[],int n){  
   for(int i =0; i<n-1;i++){
      int SI =i;
       for(int j =i+1; j<n; j++){
           if(arr[j]<arr[SI]){
          SI = j;
           }
         }
         swap(arr[i],arr[SI]);
     }
  }

  // insertion sort
  void insertionsort(int arr[], int n){
   for(int i=1; i<n;i++){
      int curr=arr[i];
      int prev = i-1;
      while(prev >=0 && arr[prev] > curr){
         arr[prev+1]=arr[prev];
         prev--;
      }
      arr[prev+1]=curr;
   }
  }

  void print(int arr[], int n){
   for(int i=0; i<n; i++){
       cout << arr[i] <<"\t";
   }
  }

int main (){


// int a[]={5,15,22,1,-15,24};
// int size = 6;
// int smallest = INT_MAX;
// int largest = INT_MIN;

// int indexofsmallest;
// int indexoflargest ;
// for(int i=0;i<size;i++){
//     if(a[i]<smallest){
//         smallest=a[i];
//         indexofsmallest = i;
//     }
//     if(a[i]>largest){
//         largest=a[i];
//         indexoflargest = i;
//     }
  
// }

// cout << "smallest ="<< smallest <<"\n";
// cout << "smallest ="<< largest <<"\n";
// cout << "index of smallest ="<< indexofsmallest <<"\n";
// cout << "index of largest ="<< indexoflargest <<"\n";

// int arr[]={4,2,7,8,1,2,5};
// int size=7;
// int target =5;
// int indexoftarget;
// for(int i=0;i<size;i++){
//     if(arr[i]==target){
//         indexoftarget = i;
//     }
// }
// cout <<"index of target "<< indexoftarget <<"\n";

// vector

// vector<int>vec(4,0);
// for(int i=0;i<4;i++){
//     cout <<vec[i]<<"\n";
// }

// subarray
// int n =5;
// int arr[n]={1,2,3,5,6};
// for(int st=0;st<n;st++){
//     for(int end=st;end<n;end++){
//       for(int i=st;i<=end;i++){
//         cout << arr[i];
//       }
//       cout <<"\t ";
//     }
//     cout << endl;
// }

// max subarray sum
// int n =7;
// int arr[n]={3,-4,5,4,-1,7,-8};
// int maxsum = INT_MIN;

// for(int st=0;st<n;st++){
//     int currsum=0;
//     for(int end=st;end<n;end++){
//      currsum +=arr[end];
//       maxsum = max(currsum, maxsum);
//     }
// }
// cout << "max sum = "<<maxsum <<"\n";

// kadane's algorithm 

// int n =7;
// int arr[n]={3,-4,5,4,-1,7,-8};
// int maxsum = INT_MIN;
// int currsum=0;
// for(int st=0;st<n;st++){
//  currsum +=arr[st];
//  maxsum = max(currsum,maxsum);
//  if(currsum<0){
//     currsum =0;
//  }
// }
// cout<<"Max subarray sum = "<<maxsum<<"\n";


//two sum 

// int n=4;
// int arr[n]={2,7,11,15};
// int target = 17;
// vector<int> ans;

// for(int i=0;i<n;i++){
//    for(int j =i+1;j<n;j++){
//       if (arr[i]+arr[j]==target){
//         ans.push_back(i);
//         ans.push_back(j);
//       }
//    }
  
// }
// for(int i=0;i<ans.size();i++){
//    cout<<ans.at(i)<<"\n";
// }


// moore's voting without sorting - return majority element 


// vector<int>nums={7,9,8,9,9,9,};
// int n = nums.size();

// int count =0;
// int ans =0;

// for(int i=0;i<n;i++){
// if(count ==0){
//    ans= nums[i];
// }  if (ans == nums[i]){
//    count ++;
// }else{
//    count --;
// }
// }
// cout << ans <<"\n";


// bubble sort

    int n =5;
    int arr[] = {4,5,2,1,3};

   //bubblesort( arr,  n);
   // selectionsort( arr,  n);
   insertionsort(arr,n);
   print( arr,  n);
    return 0;
}


