// Chef recently solved his first problem on CodeChef. The problem he solved has N test cases. He gets a score for his submission according to the following rules:

// 1.  If Chef’s code passes all the N test cases, he gets 100 points.
// 2.  If Chef’s code does not pass all the test cases, but passes all the first M (M < N) test cases, he gets 
// K (K < 100) points.
// 3.  If the conditions 1 and 2 are not satisfied, Chef does not get any points (i.e his score remains at 0 points).

// You are given a binary array A1,A2,…,AN of length N, where Ai = 1 denotes Chef's code passed the ith test case, Ai = 0 denotes otherwise. You are also given the two integers M,K. Can you find how many points does Chef get?



#include <iostream>
#include <climits>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfTestCase,noOfFirstM,noOfK_Points;

        cout<<"Enter the no. of test case : ";
        cin>>noOfTestCase;

        cout<<"Enter the no. of first M : ";
        cin>>noOfFirstM;

        cout<<"Enter the no. of K points : ";
        cin>>noOfK_Points;

        int arr[noOfTestCase];

        for(int i = 0;i < noOfTestCase;i++){
            cout<<"Enter the value of "<<(i + 1)<<"th test case : ";
            cin>>arr[i];
        }

        bool flag = true;
        int count = 0;

        for(int i = 0;i < noOfTestCase;i++){
            if(arr[i] == 0 && i < noOfFirstM){
                flag = false;
                break;
            }
            else if(arr[i] != 0) count++;
        }

        if(flag == false) cout<<"Chef get : "<<0<<" points"<<endl;
        else if(flag == true && count == noOfTestCase) cout<<"Chef get : "<<100<<" points"<<endl;
        else cout<<"Chef get : "<<noOfK_Points<<" points"<<endl;
    }
}