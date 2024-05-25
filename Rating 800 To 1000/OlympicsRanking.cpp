// In Olympics, the countries are ranked by the total number of medals won. You are given six integers G1,S1, B1, and G2,S2,B2, the number of gold, silver and bronze medals won by two different countries respectively. Determine which country is ranked better on the leader board. It is guaranteed that there will not be a tie between the two countries.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int goldWinByFirstCountry,silverWinByFirstCountry,bronzeWinByFirstCountry,goldWinBySecondCountry,silverWinBySecondCountry,bronzeWinBySecondCountry;
        cout<<"Enter the no. of gold wins by first country : ";
        cin>>goldWinByFirstCountry;
        cout<<"Enter the no. of silver wins by first country : ";
        cin>>silverWinByFirstCountry;
        cout<<"Enter the no. of bronze wins by first country : ";
        cin>>bronzeWinByFirstCountry;
        cout<<"Enter the no. of gold wins by second country : ";
        cin>>goldWinBySecondCountry;
        cout<<"Enter the no. of silver wins by first country : ";
        cin>>silverWinBySecondCountry;
        cout<<"Enter the no. of bronze wins by first country : ";
        cin>>bronzeWinBySecondCountry;
        if((goldWinByFirstCountry + silverWinByFirstCountry + bronzeWinByFirstCountry) > (goldWinBySecondCountry + silverWinBySecondCountry + bronzeWinBySecondCountry)) cout<<"First country is ranked better on the leader board"<<endl;
        else cout<<"Second country is ranked better on the leader board"<<endl;
    }
}