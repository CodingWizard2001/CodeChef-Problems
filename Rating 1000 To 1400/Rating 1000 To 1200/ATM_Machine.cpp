// There is an ATM machine. Initially, it contains a total of K units of money. N people (numbered 1 through N) want to withdraw money; for each valid i, the i-th person wants to withdraw Ai units of money. The people come in and try to withdraw money one by one, in the increasing order of their indices. Whenever someone tries to withdraw money, if the machine has at least the required amount of money, it will give out the required amount. Otherwise, it will throw an error and not give out anything; in that case, this person will return home directly without trying to do anything else. For each person, determine whether they will get the required amount of money or not.


#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len,amount;
        // cout<<"Enter the length of array : ";
        cin>>len;
        // cout<<"Enter the total units of cash present at ATM : ";
        cin>>amount;
        int arr[len];
        for(int i = 0;i < len;i++){
            // cout<<"Enter the unit of cash "<<(i + 1)<<"th person want to withdraw : ";
            cin>>arr[i];
        }
        // cout<<"Query will be : ";
        for(int i = 0;i < len;i++){
            if(arr[i] <= amount){
                cout<<1;
                amount -= arr[i];
            }
            else cout<<0;
        }
        cout<<endl;
    }
}