// You know that 1 kg of pulp can be used to make 1000 pages and 1 notebook consists of 100 pages. Suppose a notebook factory receives N kg of pulp, how many notebooks can be made from that?

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter no. of kg pulp receives by factory : ";
        cin>>n;
        cout<<"No. of notebooks can be made : "<<((n * 1000) / 100)<<endl;
    }
}