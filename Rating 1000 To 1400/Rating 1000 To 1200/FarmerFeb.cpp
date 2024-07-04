// Farmer Feb has three fields with potatoes planted in them. He harvested x potatoes from the first field, y potatoes from the second field and is yet to harvest potatoes from the third field. Feb is very superstitious and believes that if the sum of potatoes he harvests from the three fields is a prime number, he'll make a huge profit. Please help him by calculating for him the minimum number of potatoes that if harvested from the third field will make the sum of potatoes prime. At least one potato should be harvested from the third field.



#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n <= 1) return false;
    if(n <= 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    for(int i = 5;i * i <= n;i += 6){
        if((n % i == 0) || ((n % (i + 2)) == 0)) return false;
    }
    return true;
}
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int firstField,secondField;

        // cout<<"Enter the total potatoes harvest in first field : ";
        cin>>firstField;
        
        // cout<<"Enter the total potatoes harvest in second field : ";
        cin>>secondField;
        int thirdField = 1;
        bool flag;
        while(true){
            int total = (firstField + secondField + thirdField);
            if(isPrime(total)) break;
            thirdField++;
        }
        cout<<thirdField<<endl;
    }
}