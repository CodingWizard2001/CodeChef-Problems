// Chef wants to take Chefina on a date. However, he has to complete one more task before leaving. Since he does not want to be late, he is asking you for help.There are N bags with coins in a row (numbered 1 through N); for each valid i, the i-th bag contains Ai coins. Chef should make the number of coins in each bag divisible by a given integer K in the following way:

// 1. Choose an integer c between 0 and N (inclusive)
// 2. Take some coins from the first c bags ― formally, for each i (1 ≤ i ≤ c), he may choose any number of coins between 0 and Ai inclusive and take them out of the i-th bag
// 3. Move some of these coins to some of the last N - c bags ― formally, for each i (c + 1 ≤ i ≤N), he may place a non-negative number of coins in the i-th bag

// Of course, the number of coins placed in the last N - c bags must not exceed the number of coins taken out from the first c bags, but there may be some coins left over. Let's denote the number of these coins by R. You should find the smallest possible value of R.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        long long int bags,k,sum = 0;
        cout<<"Enter the no. of bags : ";
        cin>>bags;

        cout<<"Enter the value of k : ";
        cin>>k;

        int arr[bags];

        for(int i = 0;i < bags;i++){
            cout<<"Enter the no. od coins present at "<<(i + 1)<<"th bag : ";
            cin>>arr[i];
            sum += arr[i];
        }

        cout<<"The smallest possible value of some coins left over will be : "<<(sum % k)<<endl;
    }
}