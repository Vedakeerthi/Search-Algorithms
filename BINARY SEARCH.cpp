#include<iostream>
	using namespace std;

 class normal{
 	public:
 		int a[100],i,n,j,key;
 		void getdata(void);
 		void sort(void);
 		void binary(void);
 };
 
 void normal :: getdata(void)
 {
 	cout<<"==============================BINARY SEARCH==========================="
 	;cout<<"\nENTER THE NUMBER OF ELEMENTS TO BE ENTERED IN THE GIVEN ARRAY: ";
 	cin>>n;
 	cout<<"ENTER THE ELEMENTS OF THE ARRAY: ";
 	for(i=0;i<n;i++)
	 cin>>a[i];
	
 }
 
 void normal :: sort(void)
 {
 	for(i=0;i<n-1;i++)
 	{
 		for(j=i+1;j<n;j++)
 		{
 			if(a[i]>a[j])
 			{
            int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
		 }
	 }
	 cout<<"THE SORTED ARRAY IS GIVEN AS: "
	 ;for(i=0;i<n;i++)
	 {
	 cout<<a[i]<<"\t";
     }
	 cout<<"\nENTER THE KEY VALUE TO BE FOUND IN THE GIVEN ARRAY:";
	 cin>> key;
	
 }
 
 void normal :: binary(void)
 {
    	int low=0,high=n-1,mid;
 	 	while (low <= high)
 	 	{
 	 		mid = (low+high)/2;
 	 		if(a[mid] == key)
 	 		{
		    	cout<<"THE VALUE "<< key << " IS FOUND IN "<< mid+1;return;
		    }
			else if(key > a[mid])
				low = mid+1;
			
			else if(key < a[mid])
				high = mid-1;
			
			else
			{
			    cout<<"THE VALUE "<< key << " IS NOT FOUND IN THE GIVEN ARRAY" ;
				return;
		    }
			
	
	    }
 }
 
 int main()
 {
 	normal n;
 	n.getdata();
 	n.sort();
 	n.binary();
 	return 0;
 }
