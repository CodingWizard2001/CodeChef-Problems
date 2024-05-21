// On every CodeChef user's profile page, the list of problems that they have set, tested, and written editorials for, is listed at the bottom. Given the number of problems in each of these 3 categories as X,Y, and Z respectively (where all three integers are distinct), find if the user has been most active as a Setter, Tester, or Editorialist.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfSet,noOfTested,noOfEditorials;
        cout<<"Enter the no. of set : ";
        cin>>noOfSet;
        cout<<"Enter the no. of tested : ";
        cin>>noOfTested;
        cout<<"Enter the no. of editorials : ";
        cin>>noOfEditorials;
        if(noOfSet > noOfTested && noOfSet > noOfEditorials) cout<<"The user has been most active as a Setter"<<endl;
        else if(noOfTested > noOfSet && noOfTested > noOfEditorials) cout<<"The user has been most active as a Tester"<<endl;
        else cout<<"The user has been most active as a Editorialist"<<endl;
    }
}