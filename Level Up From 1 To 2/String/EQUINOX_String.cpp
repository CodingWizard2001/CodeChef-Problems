// Sarthak and Anuradha are very good friends and are eager to participate in an event called Equinox. It is a game of words. In this game, N strings S1,…,SN are given. For each string Si, if it starts with one of the letters of the word “EQUINOX”, Sarthak gets A points and if not, Anuradha gets B points. The one who has more points at the end of the game wins. If they both the same number of points, the game is a draw. Print the winner of the game, if any, otherwise print “DRAW”.


#include <iostream>
#include <string>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfWords,pointsOfSarthak,pointsOfAnuradha;
        cout<<"Enter the no. of words : ";
        cin>>noOfWords;

        cout<<"Enter the points get by Sarthak : ";
        cin>>pointsOfSarthak;

        cout<<"Enter the points get by Anuradha : ";
        cin>>pointsOfAnuradha;

        long long totalPointsOfSarthak = 0,totalPointsOfAnuradha = 0;

        while(noOfWords--){
            string word;
            cout<<"Enter the word : ";
            cin>>word;

            if(word[0] == 'E' || word[0] == 'Q' || word[0] == 'U' || word[0] == 'I' || word[0] == 'N' || word[0] == 'O' || word[0] == 'X') totalPointsOfSarthak += pointsOfSarthak;

            else totalPointsOfAnuradha += pointsOfAnuradha;
        }
        if(totalPointsOfAnuradha == totalPointsOfSarthak) cout<<"The match ends up by draw"<<endl;

        else if(totalPointsOfAnuradha > totalPointsOfSarthak) cout<<"The winner of the match is : Anuradha"<<endl;

        else cout<<"The winner of the match is : Sarthak"<<endl;
    }
}