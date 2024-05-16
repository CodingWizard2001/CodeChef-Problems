// While Alice was drinking sugarcane juice, she started wondering about the following facts:

// 1. The juicer sells each glass of sugarcane juice for 50 coins.
// 2. He spends 20% of his total income on buying sugarcane.
// 3. He spends 20% of his total income on buying salt and mint leaves.
// 4. He spends 30% of his total income on shop rent.

// Alice wonders, what is the juicer's profit (in coins) when he sells N glasses of sugarcane juice?


#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int sellGlass;
        cout<<"Enter no. of sell glass : ";
        cin>>sellGlass;
        int sellIncome = (sellGlass * 50); 
        int afterBuyFirst2Thing = ((sellIncome * 20) / 100);
        int afterBuyLastThing = ((sellIncome * 30) / 100);
        cout<<"Profit will be : "<<(sellIncome - afterBuyFirst2Thing - afterBuyLastThing)<<endl;
    }
}