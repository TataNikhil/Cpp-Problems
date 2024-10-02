//Jamnash and Assignments
//513
//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/JASSIGNMENTS

#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"Enter the time when Jamnash started the assignment: "<<endl;
    cin>>x;
    //consider time in 24 hour format and only hours are considered unlike(4:34)
    if(x<=7){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}