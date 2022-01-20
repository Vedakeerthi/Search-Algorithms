#include<iostream>
using namespace std;
 
 class normal
 {
 	public:
 		int a[100],n,i,key;
 		void getdata(void);
 		void sequential(void);
 };
 
 void normal :: getdata(void)
 {
 	cout<<"===========================LINEAR SEARCH========================="
 	;cout<<"\nENTER THE NUMBER OF ELEMENTS TO BE ENTERED IN THE GIVEN ARRAY:";
 	cin>>n;
 	cout<<"ENTER THE ELEMENTS OF THE ARRAY:"
 	;for(i=0;i<n;i++)
 	cin>>a[i]
 	;cout<<"ENTER THE KEY ELEMENT TO BE FOUND IN THE GIVEN ARRAY:"
 	;cin>>key;
 }
 
 void normal :: sequential(void)
 {
 	for(i=0;i<n;i++)
	{
		if(a[i] == key)
		{
			cout<<"THE VALUE "<< key <<" IS FOUND IN THE VALUE "<< i+1;
			return; 
		}
	 } 
	 cout<<"THE ENTERED VALUE "<< key <<" IS NOT FOUND IN THE GIVEN ARRAY";
 }
 
 int main()
 {
 	normal n;
 	n.getdata();
 	n.sequential();
 	return 0;
 }
