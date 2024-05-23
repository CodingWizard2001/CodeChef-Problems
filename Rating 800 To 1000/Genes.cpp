// People in Chefland have three different eye colors, namely brown, blue, and green. green is the rarest of the eye colors whereas brown is most common. The eye color of the child of two people is most likely to be the most common eye color between them. You are given two characters denoting the eye colors of two people in Chefland. The character R denotes bRown color, B denotes Blue color, and G denotes Green color. Determine the most likely eye color of their child. (Print R, B or G denoting bRown, Blue or Green respectively).


#include <iostream>
using namespace std;
int main(){
    cout<<"Enter R -> For Brown colour,B -> For Blue colour,G -> For Green Colour"<<endl;
    char eyeColourOf1stPeople,eyeColourOf2ndPeople;
    cout<<"Enter the eye color of first person : ";
    cin>>eyeColourOf1stPeople;
    cout<<"Enter the eye color of second person : ";
    cin>>eyeColourOf2ndPeople;
    if(eyeColourOf1stPeople == 'R' || eyeColourOf2ndPeople == 'R') cout<<"The most likely eye color will be : Brown colour"<<endl;
    else if(eyeColourOf1stPeople == 'B' || eyeColourOf2ndPeople == 'B') cout<<"The most likely eye color will be : Blue colour"<<endl;
    else cout<<"The most likely eye color will be : Green colour"<<endl;
}