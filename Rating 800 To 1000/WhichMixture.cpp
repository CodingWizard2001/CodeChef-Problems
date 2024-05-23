// Chef has A units of solid and B units of liquid. He combines them to create a mixture. What kind of mixture does Chef produce: a solution, a solid, or a liquid? A mixture is called :

// 1.  A solution if A > 0 and B > 0
// 2.  A solid if B = 0 or
// 3.  A liquid if A = 0.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfUnitsSolid,noOfUnitsLiquid;
        cout<<"Enter the no. of units of solid : ";
        cin>>noOfUnitsSolid;
        cout<<"Enter the no. of units of liquid : ";
        cin>>noOfUnitsLiquid;
        if(noOfUnitsLiquid > 0 && noOfUnitsSolid > 0) cout<<"It's a solution"<<endl;
        else if(noOfUnitsLiquid == 0) cout<<"It's a liquid"<<endl;
        else cout<<"It's a solid"<<endl;
    }
}