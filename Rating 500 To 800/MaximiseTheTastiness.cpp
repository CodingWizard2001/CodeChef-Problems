// Chef is making a dish that consists of exactly two ingredients. He has four ingredients A,B,C and D with tastiness a,b,c, and d respectively. He can use either A or B as the first ingredient and either C or D as the second ingredient. The tastiness of a dish is the sum of tastiness of its ingredients. Find the maximum possible tastiness of the dish that the chef can prepare.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int a,b,c,d;
        cout<<"Enter the tastiness of a ingredients : ";
        cin>>a;
        cout<<"Enter the tastiness of a ingredients : ";
        cin>>b;
        cout<<"Enter the tastiness of a ingredients : ";
        cin>>c;
        cout<<"Enter the tastiness of a ingredients : ";
        cin>>d;
        int ans = 0;
        if(a > b) ans += a;
        else ans += b;
        if(c > d) ans += c;
        else ans += d;
        cout<<"The maximum possible tastiness of the dish that the chef can prepare are : "<<ans<<endl;
    }
}