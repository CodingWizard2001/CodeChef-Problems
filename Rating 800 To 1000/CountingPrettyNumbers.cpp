// Vasya likes the number 239. Therefore, he considers a number pretty if its last digit is 2,3 or 9. Vasya wants to watch the numbers between L and R (both inclusive), so he asked you to determine how many pretty numbers are in this range. Can you help him?


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int start,end;
        cout<<"Enter the starting number : ";
        cin>>start;
        cout<<"Enter the ending number : ";
        cin>>end;
        int noOfPrettyNumbers = 0;
        for(int i = start;i <= end;i++){
            int digit = (i % 10);
            if(digit == 2 || digit == 3 || digit == 9) noOfPrettyNumbers++;
        }
        cout<<"No. of pretty numbers from "<<start<<" to "<<end<<" will be : "<<noOfPrettyNumbers<<endl;
    }
}