// Chef opened a company which manufactures cars and bikes. Each car requires 4 tyres while each bike requires 2 tyres. Chef has a total of N tyres (N is even). He wants to manufacture maximum number of cars from these tyres and then manufacture bikes from the remaining tyres. Chef's friend went to Chef to purchase a bike. If Chef's company has manufactured even a single bike then Chef's friend will be able to purchase it. Determine whether he will be able to purchase the bike or not.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfTyres;
        cout<<"Enter the no. of tyres : ";
        cin>>noOfTyres;
        if(noOfTyres % 4 == 0) cout<<"He will be unable to purchase the bike"<<endl;
        else cout<<"He will be able to purchase the bike"<<endl;
    }
}