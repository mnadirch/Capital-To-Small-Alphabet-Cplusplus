#include <iostream>
using namespace std;
int main()
	{
		char a;
		while(a!='0')
		{
			cout<<"Capital Alphabet: ";
			cin>>a;
		{
			if(a>='A' && a<='Z')
			{	a=a+32;
			cout<<"Small Alphabet is : "<<a<<endl;  }
		
			else if(a=='0'){
				return 0;	}
			
			else
			{	cout<<"Enter a capital Alphabet!! "<<endl;  }
		}
		    }
		return 0;}

