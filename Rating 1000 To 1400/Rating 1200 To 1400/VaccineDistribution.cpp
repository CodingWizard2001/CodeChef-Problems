// Finally, a COVID vaccine is out on the market and the Chefland government has asked you to form a plan to distribute it to the public as soon as possible. There are a total of N people with ages a1, a2,…,aN.There is only one hospital where vaccination is done and it is only possible to vaccinate up to D people per day. Anyone whose age is ≥ 80 or ≤ 9 is considered to be at risk. On each day, you may not vaccinate both a person who is at risk and a person who is not at risk. Find the smallest number of days needed to vaccinate everyone.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        float noOfPeople,noOfVaccinate,age;

        // cout<<"Enter the no. of people : ";
        cin>>noOfPeople;

        // cout<<"Enter the no. of people need to vaccinate : ";
        cin>>noOfVaccinate;

        int countRisk = 0,countNotRisk = 0;
        for(int i = 0;i < noOfPeople;i++){
            cin>>age;
            if(age <= 9 || age >= 80) countRisk++;
            else countNotRisk++;
        }

        int d1 = ceil(countRisk / noOfVaccinate);
        int d2 = ceil(countNotRisk / noOfVaccinate);

        cout<<(d1 + d2)<<endl;
    }
}