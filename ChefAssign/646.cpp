//Finding Shoes
//646
//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FINDSHOES?tab=statement
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    if(n>m){
	    cout<<(n*2)-m<<endl;
	    }
	    else if(n<m || n==m){
	        cout<<n<<endl;
	    }
	}
	return 0;
}
