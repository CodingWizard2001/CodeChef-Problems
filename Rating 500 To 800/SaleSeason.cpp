// It's the sale season again and Chef bought items worth a total of X rupees. The sale season offer is as follows: 
//     1. if X ≤ 100, no discount.
//     2. If 100<X≤1000, discount is 25 rupees.
//     3. If 1000<X≤5000, discount is 100 rupees.
//     4. If X>5000, discount is 500 rupees. 
// Find the final amount Chef needs to pay for his shopping.


#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test-cases : ";
    cin>>t;
    while(t--){
        int x;
        cout<<"Enter amount of chef's rupees he have : ";
        cin>>x;
        if(x > 5000) cout<<(x - 500)<<endl;
        else if(x > 1000) cout<<(x - 100)<<endl;
        else if(x > 100) cout<<(x - 25)<<endl;
        else cout<<x<<endl;
    }
}