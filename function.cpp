#include<iostream>
using namespace std;

// check given no is prime or not;;;;

// bool prime (int n){
// int count =0;
// for(int i=1;i<=n;i++){
//     if (n % i == 0){
//         count ++;
//     }}
//     if (count ==2){
//         return true;
//     }else{
//        return false;
//     }

// }

// int main (){
// int n;
// cout <<"Enter value of n ::\n";
// cin >> n ;

// if (prime(n))
//         cout << n << " is a Prime Number." << endl;
//     else
//         cout << n << " is Not a Prime Number." << endl;

//  return 0;   
// }

//prime no between 2 to n 

// bool prime(int n){
   
//     for(int i=2;i<=n;i++){
//      if(n%i==0){
//         return false;
//      } else{
//         return true;
//      }
       
//     }
// }

// int main (){
// int n;
// cout<<"Enter the value of n ::\n";
// cin >>n;

// for(int i=2;i<=n;i++){
//     if (prime(i)){
//         cout <<i <<" ";
//     }
// }
//     return 0;
// }

// Nth Fibonacci number

// int fibo(int n){

//     if (n==0){
//         return 0;
//     } else if (n==1){
//         return 1;
//     } else{
//         long long a = 0, b = 1, c;

//         for (int i = 2; i <= n; i++) {
//             c = a + b;
//             a = b;
//             b = c;
//         }

//     return b;
//     }
// }

// int main(){
// int n;
// cout <<"Enter the value of n::\n";
// cin >> n;

// for (int i=0;i<n;i++){
//     cout << fibo(i) <<" ";
// }

//     return 0;
// }

// decimal to binary number 
// int dectbi (int n){
//     int ans =0;
//     int pow =1;

//     while (n>0){
//         int rem = n%2;
//         n = n/2;

//         ans +=  (rem*pow);
//         pow = pow*10;
//     }
//     return ans;
// }
// int main (){
//     int n;
//     cout <<"Enter the value of n  :: \n";
//     cin>>n;

//     for (int i=1;i<=n;i++){
//         cout << i <<"= " <<dectbi(i) << " \n";
//     }
//     return 0;
// }

// binary to decimal 

// int btc(int n){
// int pow = 1;//2 to pow 0
// int ans =0;
// while(n>0){
//    int rem = n%10;
//     ans = ans + (pow*rem);
//     n= n/10;
//     pow = pow *2;
// }

//     return ans;
// }
// int main (){
//     int n;
//     cout <<"Enter the value of n  :: \n";
//     cin>>n;

// cout << btc(n);
// } 

