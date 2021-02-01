//#include<iostream>
//using namespace std;
//int main()
//{
//	for(int i=0;i<5;i++)
//	{
//		for(int j=0;j<4;j++)
//		{
//			cout<<"*";
//		}
//		cout<<endl;
//	}
//} 

//Hollow 

//#include<iostream>
//using namespace std;
//int main()
//{
//	for(int i=1;i<=5;i++)
//	{
//		for(int j=1;j<=4;j++)
//		{
//			if(i==1||i==5)
//			{
//				cout<<"*";
//			}
//			else if(j==1||j==4)
//			{
//				cout<<"*";
//			}
//			else
//			{
//				cout<<" ";
//			}
//		}
//		cout<<endl;
//	}
//}


//Inverted Half Pyramid

#include<iostream>
using namespace std;
int main()
//{
//	for(int i=5;i>=1;i--)
//	{
//		for(int j=1;j<=i;j++)
//		{
//			cout<<"*";
//		}
//		cout<<endl;
//	}
//}


//{
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=n;j++)
//		{
//			if(j<=n-i)
//			{
//				cout<<" ";
//			}
//			else
//			{
//				cout<<"*";
//			}
//		}
//		cout<<endl;
//	}
//}
//



//Half Pyramid using numbers

//{
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=i;j++)
//		{
//			cout<<i;
//		}
//		cout<<endl;
//	}
//}




//Floyds Triangle

//{
//	int n;
//	cin>>n;
//	int count=1;
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=i;j++)
//		{
//			cout<<count<<" ";
//			count+=1;
//		}
//		cout<<endl;
//	}
//}
//


//ButterFly Pattern

//{
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=i;j++)
//		{
//			cout<<"*";
//		}
//		int space = 2*n-2*i;
//		for(int j=1;j<=space;j++)
//		{
//			cout<<" ";
//		}
//		for(int j=1;j<=i;j++)
//		{
//			cout<<"*";
//		}
//		cout<<endl;
//	}
//	
//	for(int i=n;i>=1;i--)
//	{
//		for(int j=1;j<=i;j++)
//		{
//			cout<<"*";
//		}
//		int space = 2*n-2*i;
//		for(int j=1;j<=space;j++)
//		{
//			cout<<" ";
//		}
//		for(int j=1;j<=i;j++)
//		{
//			cout<<"*";
//		}
//		cout<<endl;
//	}
//}
//	
//	


//Inverted Pattern

//{
//	int n;
//	cin>>n;
//	int count = 1;
//	for(int i=n;i>=1;i--)
//	{
//		for(int j=1;j<=i;j++)
//		{
//			cout<<count<<" ";
//			count++;
//		}
//		count = 1;
//		cout<<endl;
//	}
//}


//10101 Pattern

//{
//	int n;
//	cin>>n;
//	
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=i;j++)
//		{
//			if((i+j)%2==0)
//			{
//				cout<<0<<" ";
//			}
//			else
//			{
//				cout<<1<<" ";
//			}
//		}
//		cout<<endl;
//	}
//}




// Rhombus Pattern
//
//{
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=i;j<=n-1;j++)
//		{
//			cout<<" ";
//		}
//		for(int z=1;z<=n;z++)
//		{
//			cout<<"* ";
//		}
//		cout<<endl;
//	}
//}
//
//



//Tree Pattern

//{
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=i;j<=n-1;j++)
//		{
//			cout<<" ";
//		}
//		for(int z=1;z<=i;z++)
//		{
//			cout<<z<<" ";
//		}
//		cout<<endl;
//	}
//}
//



//Palindromic pattern
//{
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=i;j<=n-1;j++)
//		{
//			cout<<"  ";
//		}
//		
//		for(int j=i;j>=1;j--)
//		{
//			cout<<j<<" ";
//		}
//		
//		for(int j=2;j<=i;j++)
//		{
//			cout<<j<<" ";
//		}
//		
//		
//		cout<<endl;
//	}
//	
//	cout<<endl;
//}


//{
//	int n;
//	cin>>n;
//
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=n-i;j++)
//		{
//			cout<<"  ";
//		}
//		
//		for(int j=1 ;j<=2*i-1;j++)
//		{
//			cout<<"* ";
//		}
//		cout<<endl;
//	}
//	
//	for(int i=n;i>=1;i--)
//	{
//		for(int j=1;j<=n-i;j++)
//		{
//			cout<<"  ";
//		}
//			
//		for(int j=1 ;j<=2*i-1;j++)
//		{
//			cout<<"* ";
//		}
//		cout<<endl;
//	}
//		
//		
//
//}



	































