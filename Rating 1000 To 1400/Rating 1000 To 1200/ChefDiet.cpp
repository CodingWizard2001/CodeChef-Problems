// Chef decided to go on a diet during the following N days (numbered 1 through N). Part of the diet plan is to eat K grams of protein during each day. For each valid i, Chef wants to buy Ai grams of protein in the morning of the i-th day and then eat K grams of protein as part of his dinner. If he has any protein remaining, he can store it and use it in later dinners. Initially, Chef is storing 0 grams of protein. Determine whether Chef will have enough protein all the time during his diet. In case he will not have enough, find the first day on which Chef will be unable to eat K grams of protein.


#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int size,minimalProtein;
        // cout<<"Enter the no. of the days : ";
        cin>>size;
        // cout<<"Enter the minimal protein he have to take : ";
        cin>>minimalProtein;
        
        vector<int> arr(size);
        for (int i = 0; i < size; ++i) {
            // cout<<"Enter the amount of protein he take at : "<<(i + 1)<<"th day";
            cin >> arr[i];
        }

        int storedProtein = 0;
        bool isPossible = true;

        for (int i = 0; i < size; ++i) {
            storedProtein += arr[i];
            if (storedProtein >= minimalProtein) {
                storedProtein -= minimalProtein;
            } 
            else {
                cout << "NO " << i + 1 << endl;
                isPossible = false;
                break;
            }
        }
        if (isPossible) cout << "YES" << endl;
    }
}