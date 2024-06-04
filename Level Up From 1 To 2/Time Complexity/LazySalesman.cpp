// Ved is a salesman. He needs to earn at least W rupees in N days for his livelihood. However, on a given day (1 ≤ i ≤ N), he can only earn Ai rupees by working on that day. Ved, being a lazy salesman, wants to take as many holidays as possible. It is known that on a holiday, Ved does not work and thus does not earn anything. Help maximize the number of days on which Ved can take a holiday. It is guaranteed that Ved can always earn at least W rupees by working on all days.


#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int numberOfDays,totalWage;
        cout<<"Enter the number of days : ";
        cin>>numberOfDays;

        cout<<"Enter the total wage : ";
        cin>>totalWage;

        int arr[numberOfDays];
        for(int i = 0;i < numberOfDays;i++){
            cout<<"Enter the wage of "<<(i + 1)<<"th day : ";
            cin>>arr[i];
        }

        int sum = 0,idx = 0;
        sort(arr,arr+ numberOfDays);
        for(int i = (numberOfDays - 1);i >= 0;i--){
            sum += arr[i];
            if(sum >= totalWage){
                idx = i;
                break;
            }
        }

        cout<<"The number of days on which Ved can take a holiday will be : "<<idx<<endl;
    }
}