// Chef has gone shopping with his 5-year old son. They have bought N items so far. The items are numbered from 1 to N, and the item i weighs Wi grams. Chef's son insists on helping his father in carrying the items. He wants his dad to give him a few items. Chef does not want to burden his son. But he won't stop bothering him unless he is given a few items to carry. So Chef decides to give him some items. Obviously, Chef wants to give the kid less weight to carry. However, his son is a smart kid. To avoid being given the bare minimum weight to carry, he suggests that the items are split into two groups, and one group contains exactly K items. Then Chef will carry the heavier group, and his son will carry the other group. Help the Chef in deciding which items should the son take. Your task will be simple. Tell the Chef the maximum possible difference between the weight carried by him and the weight carried by the kid.


#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfItems,noOfDividedParts;
        cout<<"Enter the no. of items : ";
        cin>>noOfItems;

        cout<<"Enter the no. of divided parts : ";
        cin>>noOfDividedParts;

        vector<int>items(noOfItems);
        for(int i = 0;i < noOfItems;i++){
            cout<<"Enter the weight of "<<(i + 1)<<"th items : ";
            cin>>items[i];
        }

        sort(items.begin(),items.end());

        int totalSum = accumulate(items.begin(),items.end(),0);

        int sumOfKSmallestItems = accumulate(items.begin(),items.begin() + noOfDividedParts,0);

        int sumOfKLargestItems = accumulate(items.end() - noOfDividedParts,items.end(),0);

        int difference1 = abs(totalSum - (2 * sumOfKSmallestItems));
        int difference2 = abs(totalSum - (2 * sumOfKSmallestItems));

        cout<<"The maximum possible difference between the weight carried by him and the weight carried by the kid will be : "<<max(difference1,difference2)<<endl;
    }
}