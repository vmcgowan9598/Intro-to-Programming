#include<iostream>
using namespace std;
int main()
{
int n,k,ans=-1;
cout<<"Enter size of array"<<endl;
cin>>n;
int arr[n];
cout<<"Enter elements of array"<<endl;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"Enter element to be searched"<<endl;
cin>>k;
for(int i=0;i<n;i++)
{
if(arr[i]==k)
{
ans=i;
break;
}
}
if(ans!=-1)
cout<<"The element "<<k<<" is present at index "<<ans;
else
cout<<"The element "<<k<<" is not there in the array";
return 0;
}

binary search:
#include <iostream> #include <conio.h> using namespace std; int main() {     // define an array that contain numbers in ascending order     int num[]= {2,5,9,12,17,37,86};     int i,x,f,S,E,M;     cout<<"Array: ";     for(i=0; i<7; i++)     {         cout<<num[i]<<" ";     }     // store the number in variable x to search in the array     cout<<"\n\nEnter number to search ";     cin>>x;     // set the value of variable f=0     f=0;     // set the start index S, end index E with the start and end index of the array     S=0;     E=6;     // run a while loop till S is less than or equal to E     while(S<=E)     {         // find the middle index M by dividing the sum of S and E by 2         // and consider only the integer part of the result.         M=(S+E)/2;         // check if value of x is equal to the value of num[M] then print message         // 'Number found at index' along with the value of M and set f=1 and then break the loop         if(x==num[M])         {             cout<<"Number found at index "<<M;             f=1;             break;         }         else if(x>num[M])  // check if value of x is greater than the value at num[M] then set the start index S=M+1         {             S=M+1;         }         else if(x<num[M])  // check if value of x is smaller than the value at num[M] then set the end index E=M-1         {             E=M-1;         }     }     // check if value of f is 0 then print number not found     if(f==0)     {         cout<<"Number not found";     }     return 0; }