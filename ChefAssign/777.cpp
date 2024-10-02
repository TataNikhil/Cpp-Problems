//Reach Fast
//777_1
//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/REACHFAST
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t; 
    while(t--) {
        int a, b, k;
        cin>>a>>b>>k;
        int res = 0;
        int diff = abs(a - b); 
        res = diff/k;
        if(diff%k != 0) {
            res++;
        }
        cout<<res<<endl;
    }
}