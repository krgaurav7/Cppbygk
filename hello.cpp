#include<iostream>
using namespace std;

//int main (){


// int a,b;
// cout <<"Enter the value of a and b :\n";
// cin >> a;
// cin >> b;

// int sum =a+b;
// int difference = a-b;
// int product = a*b;
// int divide = a/b;
// int modulo = a%b;

// cout << "sum = " << sum <<"\n";
// cout << "difference = " << difference<<"\n";
// cout << "product = " << product<<"\n";
// cout << "divide = " << divide<<"\n";
// cout << "modulo = " << modulo<<"\n";



// int n;
// cout << "Enter the value of n :: \n";
// cin >>n;
// if(n<0){
//     cout << n << " negative\n";
// }else{
//     cout << n <<" Positive\n";
// }

// char ch;
// cout << "Enter the Character to check Uppercase and Lowercase ::\n";
// cin >> ch;

// if (ch >='a' && ch<='z'){
//     cout << ch << " is LOWERCASE\n";
// }else {
//     cout << ch <<" is UPPERCASE\n";
// }


// int n;
// cout << "Enter the value n upto which you want to calculate sum ::\n";
// cin >> n;
// int sum =0;
// for (int i=0;i<=n;i++){
//     if (i%3==0){
//        sum = sum+i;
//     }
// }
// cout << sum ;

// int n;
// cout <<"Enter the number\n";
// cin >> n;
// bool isPrime = true;
// for (int i = 2 ; i<n ; i++){
//     if (n % i==0){
//         isPrime = false;
//         break;
//     }
// }
// if (isPrime == true){
//     cout << "No is Prime\n";
// } else {
//      cout << "No is not Prime\n";
// }

// factorial of number 
// int n;
// cout << "Enter value of n\n";
// cin >> n;

// int pdt =1;
// for (int i =1;i<=n;i++){
//     pdt = pdt*i;
// }
// cout << pdt;

// int n;
// cout << "Enter the value of n\n";
// cin >> n;
// char c;
// cout << "Enter the value you want to print :: \n";
// cin >> c;
// for (int i =0; i<n;i++){
//     c = 'A';
//     for (int j=1; j<=n; j++){
//         cout << c <<"\t" ;
//         c++;
//     } 
//  cout <<"\n";
// }

// int n;
// cout << " Enter the value of n ::\n";
// cin >> n;
// char ch = '*';
// for (int i=0; i<n; i++){
//       for (int j=0; j<=i+1; j++){
//         cout << ch <<" ";
//     }
//     cout <<"\n";
// }

// int n;
// cout <<"Enter the value of n :: \t";
// cin >>n;

// for (int i=0;i<n;i++){
//   int k =1;
//   for (int j=0;j<i+1;j++){
//     cout << k <<" ";
//     k++;
//   }
//   cout << "\n";
// }


// int n =6; 
// char ch='A';
// for (int i = 0; i<n; i++){
//    for (int j=0;j<i;j++){
//     cout<< " ";
//   }
//     for(int j=0;j<n-i;j++){
//      cout <<ch;
//    } 
//    ch++;
//   cout <<"\n";
// }

// int n=4;
// for(int i=0; i<n; i++){
//   for (int j=n-i-1;j>0;j--){
//     cout<< " ";
//   }
//   int k=1;
//   for(int j=0;j<i+1;j++){
//     cout<< k <<;
//     k++;
//   }
//   for(int j=i;j>0;j--){
//   cout<< j <<;
//   }
//   cout<<"\n";
//   }

// int n=4;

// for(int i=0;i<n;i++){
  
//    for(int j=n-i; j>0; j--){
//     cout << " ";
//    }
//     cout << "*"; 
//     if (i!=0){
//       for(int j=0; j<(2*(i-1)); j++){
//         cout << " ";
//        }
//        cout << "*";
//     }
//  cout << "\n";
// }
// for(int i=0; i<n-1; i++){
//   for (int j=0;j<i+1;j++){
//     cout << " ";
//   }
//   cout <<"*";
//  if (i!=n-2){
//   int k =(2*(n-i)-5);
//   for (int j=0; j<k; j++){
//     cout << " ";
//   }
//   cout << "*";
//  }
//   cout << "\n";
// }

// Butterfly pattern 
// int n=4;
// for( int i=0; i<=n; i++){
//   for (int j =0; j<i; j++){
//     cout <<"*";
//   }
//   for (int j=0; j<2*(n-i); j++){
//     cout <<" ";
//   }
//   for (int j =0; j<i; j++){
//     cout <<"*";
//   } 
//   cout << "\n";
// }
// for( int i=1; i<=n+1; i++){
//   for (int j=n+1-i; j>0; j--){
//     cout <<"*";
//   }
//   int k =2*(i);
//   for (int j=2; j<k; j++){
//     cout <<" ";
//   }
//   for (int j=n+1-i; j>0; j--){
//     cout <<"*";
//   }
//   cout << "\n";
// }

// int sumNumber (int n){
//    int digitsum =0; 
//     while (n>0){
//         int lstdigit = n%10;
//         n = n/10;
//         digitsum = digitsum+lstdigit;
//     }
//     return digitsum;
// }
// int main (){
// int n;
// cout<<"Enter the value of Number :: \n";
// cin >>n;
// cout << "sum ="<<sumNumber(n) <<"\n";


// float binomialCoeff(int n, int r){
//     int fact =1;
// for (int i=1;i<=n;i++){
//     fact = fact*i;
// }

// int factr =1;
// for (int i=1;i<=r;i++){
//     factr = factr*i;
// }

// int d = (n-r);
// int factd =1;
// for (int i=1;i<=d;i++){
//     factd = factd*i;
// }
// float result = ((fact)/((factr)*(factd)));

// return result;
// }
// int main (){
// int n;
// int r;
// cout <<"Enter value of n and r ::\n";
// cin >> n ;
// cin >> r ;

// cout << "Desire Output= "<< binomialCoeff(n,r);
//  return 0;   
// }
  

// bitwise operator 
// int main (){
// int a=6, b=10;

// cout << (a&b) <<"\n";
// cout << (a|b) <<"\n";
// cout << (a^b) <<"\n";

// cout << (10 << 2) <<"\n";
// cout << (10 >> 1) <<"\n";
//     return 0;
// }

