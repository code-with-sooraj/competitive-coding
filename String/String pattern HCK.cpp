#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	cin >> s;    
	for(int i=s.length()-1;i>=0;i--)
	{
		for(int j=s.length()-1;j>=i;j--)
		{
			cout<<s[j];
		}
		cout<<endl;
	}
}
