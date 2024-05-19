// Chef's coding class is very famous in Chefland. This year X students joined his class and each student will require one chair to sit on. Chef already has Y chairs in his class. Determine the minimum number of new chairs Chef must buy so that every student is able to get one chair to sit on.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfStudent,noOfSeatChefHave;
        cout<<"Enter the no. of student : ";
        cin>>noOfStudent;
        cout<<"Enter the no. of chair chef have : ";
        cin>>noOfSeatChefHave;
        if(noOfStudent > noOfSeatChefHave) cout<<"The minimum number of new chairs Chef must buy so that every student is able to get one chair to sit on will be : "<<(noOfStudent - noOfSeatChefHave)<<endl;
        else cout<<"The minimum number of new chairs Chef must buy so that every student is able to get one chair to sit on will be : "<<0<<endl;
    }
}