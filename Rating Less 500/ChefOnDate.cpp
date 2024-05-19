// Chef and his girlfriend went on a date. Chef took X dollars with him, and was quite sure that this would be enough to pay the bill. At the end, the waiter brought a bill of Y dollars. Print "YES" if Chef has enough money to pay the bill, or "NO" if he has to borrow from his girlfriend and leave a bad impression on her.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int dollarChefHave,bill;
        cout<<"Enter the dollar chef have : ";
        cin>>dollarChefHave;
        cout<<"Enter the bill chef have to paid : ";
        cin>>bill;
        if(dollarChefHave >= bill) cout<<"Yes chef can pay bill"<<endl;
        else cout<<"No chef can't pay bill"<<endl;
    }
}