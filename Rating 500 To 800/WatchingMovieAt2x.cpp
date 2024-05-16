// Chef started watching a movie that runs for a total of X minutes. Chef has decided to watch the first Y minutes of the movie at twice the usual speed as he was warned by his friends that the movie gets interesting only after the first Y minutes. How long will Chef spend watching the movie in total?

#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter movie watched in 2x speed : ";
    cin>>x;
    cout<<"Enter interesting time duration : ";
    cin>>y;
    cout<<"Chef spend watching the movie in total : "<<((x - y) + (y / 2))<<endl;
}