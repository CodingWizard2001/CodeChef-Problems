// Nitin and Sobhagya were playing a game with coins. If Sobhagya has more coins then he is winning, otherwise Nitin is winning. Note that this means if both Nitin and Sobhagya have the same number of coins, then Nitin is winning. Initially Nitin has A coins while Sobhagya has B coins. Then Ritik came and gave his C coins to the player who is not winning currently, after which Satyarth came and repeated the same process (gave his D coins to the player who is not winning currently). Find the final winner of the game.



#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int coinNitinHave,coinSobhagyaHave,coinRitikHave,coinSatyarthHave;

        cout<<"Enter the no. of coins Nitin Have : ";
        cin>>coinNitinHave;

        cout<<"Enter the no. of coins Sobhagya Have : ";
        cin>>coinSobhagyaHave;

        cout<<"Enter the no. of coins Ritik Have : ";
        cin>>coinRitikHave;

        cout<<"Enter the no. of coins Satyarth Have : ";
        cin>>coinSatyarthHave;

        if(coinNitinHave >= coinSobhagyaHave){
            coinSobhagyaHave += coinRitikHave;

            if(coinNitinHave >= coinSobhagyaHave){
                coinSobhagyaHave += coinSatyarthHave;

                if(coinNitinHave >= coinSobhagyaHave) cout<<"Nitin is the Winner"<<endl;

                else cout<<"Sobhagya is the Winner"<<endl;
            }
            else{
                coinNitinHave += coinSatyarthHave;

                if(coinNitinHave >= coinSobhagyaHave) cout<<"Nitin is the Winner"<<endl;

                else cout<<"Sobhagya is the Winner"<<endl;
            }
        }
        else{
            coinNitinHave += coinRitikHave;
            
            if(coinNitinHave >= coinSobhagyaHave){
                coinSobhagyaHave += coinSatyarthHave;

                if(coinNitinHave >= coinSobhagyaHave) cout<<"Nitin is the Winner"<<endl;

                else cout<<"Sobhagya is the Winner"<<endl;
            }
            else{
                coinNitinHave += coinSatyarthHave;

                if(coinNitinHave >= coinSobhagyaHave) cout<<"Nitin is the Winner"<<endl;

                else cout<<"Sobhagya is the Winner"<<endl;
            }
        }
    }
}