//Write a program that asks for an index and a number
#include <iostream>
using namespace std;
int main()
{
    int position,i,n,value;
    cout<<"Enter number of elements in array\n"<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter elements\n"<<endl;
    for(i=0;i<n;i++) 
    cin>>array[i];
    cout<<"Enter the location where you wish to insert an element\n"<<endl;
    cin>>position;
    cout<<"Enter the value to insert\n"<<endl;
    cin>>value;
    for(i=n-1;i>=position-1;i--)
    array[i+1]=array[i];
	array[position-1]=value;
    cout<<"Resultant array is\n"<<endl;
    for(i=0;i<=n;i++)
    cout<<array[i]; 
    return 0;
}