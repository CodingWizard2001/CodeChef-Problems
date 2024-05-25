// Chef and his competitor Kefa own two restaurants located at a straight road. The position of Chef's restaurant is X1, the position of Kefa's restaurant is X2. Chef and Kefa found out at the same time that a bottle with a secret recipe is located on the road between their restaurants. The position of the bottle is X3. The cooks immediately started to run to the bottle. Chef runs with speed V1, Kefa with speed V2.Your task is to figure out who reaches the bottle first and gets the secret recipe (of course, it is possible that both cooks reach the bottle at the same time).


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int positionOfChefDistance,positionOfKefaDistance,actualLocationOfSpecialRecipe,speedOfChef,speedOfKefa;
        cout<<"Enter the position of Chef distance from special recipe : ";
        cin>>positionOfChefDistance;
        cout<<"Enter the position of Kefa distance from special recipe : ";
        cin>>positionOfKefaDistance;
        cout<<"Enter the actual position of special recipe : ";
        cin>>actualLocationOfSpecialRecipe;
        cout<<"Enter the speed of Chef : ";
        cin>>speedOfChef;
        cout<<"Enter the speed of Kefa : ";
        cin>>speedOfKefa;
        float timeTakenByChef = (abs(actualLocationOfSpecialRecipe - positionOfChefDistance) / float(speedOfChef));
        float timeTakenByKefa = (abs(actualLocationOfSpecialRecipe - positionOfKefaDistance) / float(speedOfKefa));
        if(timeTakenByChef == timeTakenByKefa) cout<<"Both reach at the same time"<<endl;
        else if(timeTakenByChef < timeTakenByKefa) cout<<"Chef reach first"<<endl;
        else cout<<"Kefa reach first"<<endl;
    }
}