// Chef bought N items from a shop. Although it is hard to carry all these items in hand, so Chef has to buy some poly-bags to store these items. 1 poly-bag can contain at most 10 items. What is the minimum number of poly-bags needed by Chef?


#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int boughtItems;
        cout<<"Enter the no. of items chef bought : ";
        cin>>boughtItems;
        if(boughtItems % 10 == 0) cout<<"No. of poly-bags are required : "<<(boughtItems / 10)<<endl;
        else cout<<"No. of poly-bags are required : "<<(boughtItems / 10) + 1<<endl;
    }
}