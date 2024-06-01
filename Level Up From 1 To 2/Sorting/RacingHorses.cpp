// Chef is very fond of horses. He enjoys watching them race. As expected, he has a stable full of horses. He, along with his friends, goes to his stable during the weekends to watch a few of these horses race. Chef wants his friends to enjoy the race and so he wants the race to be close. This can happen only if the horses are comparable on their skill i.e. the difference in their skills is less. There are N horses in the stable. The skill of the horse i is represented by an integer S[i]. The Chef needs to pick 2 horses for the race such that the difference in their skills is minimum. This way, he would be able to host a very interesting race. Your task is to help him do this and report the minimum difference that is possible between 2 horses in the race.


#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfHorses;
        cout<<"Enter the no. of horses : ";
        cin>>noOfHorses;
        int skillOfHorse[noOfHorses];

        for(int i = 0;i < noOfHorses;i++){
            cout<<"Enter the skill of "<<(i + 1)<<"th horse : ";
            cin>>skillOfHorse[i];
        }

        sort(skillOfHorse,skillOfHorse + noOfHorses);
        int minimumDifference = INT_MAX;
        for(int i = 0;i < (noOfHorses - 1);i++){
            if(skillOfHorse[i + 1] - skillOfHorse[i] < minimumDifference) minimumDifference = skillOfHorse[i + 1] - skillOfHorse[i];
        }

        cout<<"The minimum difference that is possible between 2 horses in the race will be : "<<minimumDifference<<endl;
    }
}