#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void binary(int arr[],int num1,int low,int high);
void binary(int arr[],int num1,int low,int high)
{
 int mid=(low+high)/2;
 if(num1==arr[mid])
 {
  cout<<"ELEMENT FOUND";

  getch();
exit(0);
 }
 if(low>high)
 {
  cout<<"ELEMENT DOES NOT EXIT";

  getch();
  exit(0);

 }
 if(num1<arr[mid])
  binary(arr,num1,low,mid-1);
 if(num1>arr[mid])
  binary(arr,num1,mid+1,high);
}
void main()
{
clrscr();
int arr[20],n,i,num,j;
cout<<"HOW MANY ELEMENTS DO YOU WANT TO INSERT....?"<<endl;
cin>>n;
cout<<"ENTER THE ELEMENTS :"<<endl;
for(i=0;i<n;i++)
{
cin>>arr[i];
}
for(i=0;i<n;i++)
{
 cout<<arr[i]<<"\t";
}
for(i=0;i<n;i++)
{
 for(j=i+1;j<n;j++)
 {
  if(arr[i]>arr[j])
  {
   arr[i]=arr[i]+arr[j];
   arr[j]=arr[i]-arr[j];
   arr[i]=arr[i]-arr[j];
  }
 }
}
cout<<endl<<"THE SORTED ARRAY IS :"<<endl;
for(i=0;i<n;i++)
{
 cout<<arr[i]<<"\t"<<endl;
}

cout<<"ENTER THE ELEMENTS DO YOU WANT TO SEARCH :"<<endl;
cin>>num;
binary(arr,num,0,n-1);
getch();
}