#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int testcase;
	cin>>testcase;
	vector<char> v;
	for(int i=0;i<testcase;i++){
		int a,b;
		cin>>a>>b;
		if(a > b){
			v.push_back('>');
		}
		else if (a < b)
		{
			v.push_back('<');
		}
		else{
			v.push_back('=');
		}
	}
	for (auto i = v.begin(); i != v.end(); ++i)
	{
		cout<<*i<<"\n";
	}
	return 0;
}