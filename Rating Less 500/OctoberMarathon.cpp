// Chef organized a 30 kilometers marathon in Chefland. The participants receive medals on completing the marathon as following:

// 1.  If the total time taken is less than 3 hours, they receive a GOLD medal.
// 2.  If the total time taken is greater than equal to 3 hours but less than 6 hours, they receive a SILVER medal.
// 3.  If the total time taken is greater than equal to 6 hours, they receive a BRONZE medal.

// Chefina participated in the marathon and completed it in X hours. Which medal would she receive?

#include <iostream>
using namespace std;
int main(){
    int finishTime;
    cout<<"Enter when chefina finished the marathon : ";
    cin>>finishTime;
    if(finishTime < 3) cout<<"Chefina will get Gold medal"<<endl;
    else if(finishTime >= 3 && finishTime < 6) cout<<"Chefina will get Silver medal"<<endl;
    else cout<<"Chefina will get Bronze medal"<<endl;
}