// There are 4 companies in the markets of Chef land - A, B, C and D. This year,

// 1. Company A made a profit of P lakh rupees,
// 2. Company B made a profit of Q lakh rupees,
// 3. Company C made a profit of R lakh rupees,
// 4. Company D made a profit of S lakh rupees.

// There is said to be a monopoly in the market if the profit made by one company is strictly greater than the sum of profits made by all other companies. Determine if there is a monopoly in the market or not.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int p,q,r,s;
        cout<<"Enter the amount of profit made by  Company A : ";
        cin>>p;
        cout<<"Enter the amount of profit made by  Company B : ";
        cin>>q;
        cout<<"Enter the amount of profit made by  Company C : ";
        cin>>r;
        cout<<"Enter the amount of profit made by  Company D : ";
        cin>>s;
        int max = 0;
        if(p > q && p > r && p > s) max = p;
        else{
            if(q > r && q > s) max = q;
            else{
                if(r > s) max = r;
                else max = s;
            }
        }
        if((2 * max) > (p + q +r + s)) cout<<"Yes there is a monopoly in market"<<endl;
        else cout<<"No there is no monopoly in market"<<endl;
    }
}