#include<iostream>
using namespace std;
int main()
{
int n,largest,smallest;
cout<<"enter the size of array :"<<endl;
cin>>n;
int arr[n];
cout<<"enter the numbers : "<<endl;
for(int i=0;i<n;++i)
cin>>arr[i];
largest=smallest=arr[0];
for(int i=1;i<n;i++) {
 if(arr[i]>largest)
        largest=arr[i];

if(arr[i]<smallest)
        smallest=arr[i];
}

cout<<"The smallest Number is "<<smallest<< endl;
cout<<"The largest Number is "<<largest<< endl;

return 0;
}
