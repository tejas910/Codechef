#include <bits/stdc++.h>
using namespace std;
int main(){
	int x=0;
	double y=0.0;
	cin>>x>>y;
	if(x%5==0 && x<=y-0.5){
		y = (y-x)-0.50;
		printf("%0.2f\n",y);
	}
	else{
		printf("%0.2f\n",y);
	}


	return 0;
}