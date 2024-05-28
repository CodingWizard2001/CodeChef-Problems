// There are N cars (numbered 1 through N) on a circular track with length N. For each i (2 ≤ i ≤N), the i-th of them is at a distance i - 1 clockwise from car 1, i.e. car 1 needs to travel a distance i - 1 clockwise to reach car i. Also, for each valid i, the i-th car has fi litres of gasoline in it initially. You are driving car 1 in the clockwise direction. To move one unit of distance in this direction, you need to spend 1 litre of gasoline. When you pass another car (even if you'd run out of gasoline exactly at that point), you steal all its gasoline. Once you do not have any gasoline left, you stop. What is the total clockwise distance traveled by your car?


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int lengthOfCircularTrack;
        cout<<"Enter the length of circular track : ";
        cin>>lengthOfCircularTrack;

        int arr[lengthOfCircularTrack];
        for(int i = 0;i < lengthOfCircularTrack;i++){
            cout<<"Enter the "<<(i + 1)<<"th car gasoline : ";
            cin>>arr[i];
        }

        int gasolineLeft = 0,distanceCovered = 0;
        for(int i = 0;i < lengthOfCircularTrack;i++){
            gasolineLeft += arr[i];
            if(gasolineLeft == 0) break;
            distanceCovered++;
            gasolineLeft--;
        }

        if(gasolineLeft != 0) distanceCovered += gasolineLeft;

        cout<<"The total clockwise distance traveled by your car will be : "<<distanceCovered<<endl;
    }
}