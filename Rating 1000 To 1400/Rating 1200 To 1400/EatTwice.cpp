// Hasan has recently heard about Chef's restaurant, which serves the tastiest dishes. The restaurant has published a list of N dishes (numbered 1 through N) that will be served in the next M days. For each valid i, the i-th dish will be served only on the Di-th day. Hasan has investigated their tastiness and he knows that for each valid i, the i-th dish has tastiness Vi. Hasan's budget is only large enough to try two dishes. He wants to choose these two dishes in such a way that their total (summed up) tastiness is as large as possible. However, he cannot try 2 dishes on the same day. Help Hasan and calculate the maximum possible total tastiness of the dishes he should try.




#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int n,m;
        cin>>n>>m;
        
        long long int d[n],v[n];
        for(int i=0;i<n;i++) cin>>d[i]>>v[i];
        
        long long int max1=0,max2=0,p=0;
        for(int i=0;i<n;i++){
            if(d[i]<=m && v[i]>max1){
                max1=v[i];
                p=d[i];
            }
        }
        
        for(int i=0;i<n;i++){
            if(d[i]<=m && v[i]>max2 && d[i]!=p) max2=v[i];
        }
        cout<<max1+max2<<endl;
    }
}