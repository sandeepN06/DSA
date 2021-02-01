//Pythogorean Triplet

#include<bits/stdc++.h>
using namespace std;
//
//bool check(int x, int y, int z)
//{
//	int a = max(x,max(y,z));
//	
//	int b,c;
//	
//	if(a==x)
//	{
//		b= y;
//		c = z;
//	}
//	else if(a==y)
//	{
//		b=x;
//		c = z;
//	}
//	else
//	{
//		b = x;
//		c = y;
//	}
//	
//	if(a*a == b*b + c*c)
//	{
//		return true;
//	}
//	return false;
//	
//}
//
//
//int main()
//{
//	int x,y,z;
//	cin>>x>>y>>z;
//	if(check(x,y,z))
//	{
//		cout<<"It is a pythogorean Triplet"<<endl;
//	}
//	else
//	{
//		cout<<"Not a pythogorean Triplet"<<endl;
//	}
//}



// Binary to decimal

int checkBinary(int n)
{
	int ans = 0;
	int x = 1;
	while(n>0)
	{
		int y = n%10;
		ans+= x*y;
		x = x*2;
		n = n/10;
	}
	return ans;
}

int octalToDecimal(int n)
{
	int ans = 0;
	int x = 1;
	while(n>0)
	{
		int y = n%10;
		ans += y*x;
		x = x*8;
		n = n/10;
	}
	return ans;
}

int hexaToDecimal(string n)
{
	int ans = 0;
	int x = 1;
	int s = n.size();
	
	for(int i=s-1;i>=0;i--)
	{
		if(n[i]>='0'&&n[i]<='9')
		{
			ans+= x*(n[i]-'0');
		}
		else if(n[i]>='A'&&n[i]<='F')
		{
			ans+= x*(n[i]-'A'+10);
		}
		x = x*16;
		
	}
	return ans;
	
}

//////////////////////////////////////////// Without LOOOP/////////////////////////////////////////////////////////
int decimalToBinary(int n)
{
	int ans = 0;
	int x = 1;
	while(x<n)
	{
		x = x* 2;
	}
	x = x/2;
	
	while(x>0)
	{
		int lastDigit = n/x;
		n = n-lastDigit*x;
		x = x/2;
		ans = ans*10 + lastDigit;
	}
	return ans;
}


int decimalToOctal(int n)
{
	int ans = 0;
	int x = 1;
	while(x<n)
	{
		x = x*8;
	}
	x = x/8;
	
	while(x>0)
	{
		int lastDigit = n/x;
		n = n-lastDigit*x;
		x = x/8;
		ans = ans*10 + lastDigit;
	}
	return ans;
	
}

string decimalToHexa(int n)
{
	int x = 1;
	string ans = "";
	while(x<=n)
	{
		x = x*16;
	}
	x = x/16;
	
	while(x>0)
	{
		int lastDigit = n/x;
		n = n-lastDigit*x;
		x = x/16;
		
		if(lastDigit<=9)
		{
			ans = ans+to_string(lastDigit);
		}
		else
		{
			char c = 'A' + lastDigit-10;
			ans.push_back(c);
		}
	}
	return ans;
	
}



int main()
{
	int n;
	cin>>n;
//	cout<<checkBinary(n)<<endl;
//	cout<<octalToDecimal(n)<<endl;
//	cout<<hexaToDecimal(n)<<endl;
//	cout<<decimalToBinary(n)<<endl;
//	cout<<decimalToOctal(n)<<endl;
	cout<<decimalToHexa(n)<<endl;
}
