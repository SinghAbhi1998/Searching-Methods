#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int arr[20],n,i,num;
 cout<<"HOW MANY ELEMENTS DO YOU WANT TO INSERT ?"<<endl;
 cin>>n;
 cout<<"ENTER THE ELEMENTS:-"<<endl;
 for(i=0;i<n;i++)
 {
  cin>>arr[i];
 }
 for(i=0;i<n;i++)
 {
  cout<<arr[i]<<"\t";
 }
 cout<<"\nENTER THE ELEMENT DO YOU WANT TO SEARCH.?"<<endl;
 cin>>num;
 int count=0;
 for(i=0;i<n;i++)
 {
  if(num==arr[i])
  {
   cout<<"\nELEMENT FOUND"<<endl<<"AT THE POSITION OF :-"<<endl<<i+1;
   count=1;
  }
 }
 if(count==0)
  cout<<"Element not found.";
 getch();
}