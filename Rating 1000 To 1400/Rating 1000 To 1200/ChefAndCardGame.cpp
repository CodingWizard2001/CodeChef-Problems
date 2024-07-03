// Chef is playing a card game with his friend Morty Smith. The rules of the game are as follows:

// 1.  There are two piles of cards, pile A and pile 
// B, each with N cards in it. Pile A belongs to Chef and pile B belongs to Morty.

// 2.  Each card has one positive integer on it

// 3.  The 'power' of a card is defined as the sum of digits of the integer on that card

// 4.  The game consists of N rounds

// 5.  In each round, both players simultaneously draw one card each from the top of their piles and the player who draws the card with higher power wins this round and gets a point. If the powers of both players' cards are equal then they get 1 point each.

// 6.  The winner of the game is the player who has more points at the end of N rounds. If both players have equal number of points then the game ends in a draw.

// The game is now over and Chef has told Morty to find the winner. Unfortunately, this task is too complex for him. Help Morty find the winner.

// 0 if Chef wins, 1 if Morty wins, 2 if it is a draw,

#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len;
        // cout<<"Enter the no. of rounds : ";
        cin>>len;
        int countOfChef = 0,countOfMorty = 0;
        while(len--){
            long long pointOfChef,pointOfMorty;

            // cout<<"Enter the point get by Chef : ";
            cin>>pointOfChef;

            // cout<<"Enter the point get by Morty : ";
            cin>>pointOfMorty;

            long sum1 = 0,sum2 = 0;
            while(pointOfChef != 0){
                int digit = (pointOfChef % 10);
                sum1 += digit;
                pointOfChef /= 10;
            }
            while(pointOfMorty != 0){
                int digit = (pointOfMorty % 10);
                sum2 += digit;
                pointOfMorty /= 10;
            }
            
            if(sum1 > sum2) countOfChef++;
            else if(sum2 > sum1) countOfMorty++;
            else{
                countOfChef++;
                countOfMorty++;
            }
        }

        if(countOfChef > countOfMorty) cout<<0<<" "<<countOfChef<<endl;
        else if(countOfChef < countOfMorty) cout<<1<<" "<<countOfMorty<<endl;
        else cout<<2<<" "<<countOfChef<<endl;
    }
}