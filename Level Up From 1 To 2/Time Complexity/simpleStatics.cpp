// Sergey has made N measurements. Now, he wants to know the average value of the measurements made. In order to make the average value a better representative of the measurements, before calculating the average, he wants first to remove the highest K and the lowest K measurements. After that, he will calculate the average value among the remaining N - 2K measurements. Could you help Sergey to find the average value he will get after these manipulations?


#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfMeasurements,haveToRemove;
        cout<<"Enter the total no. of measurements : ";
        cin>>noOfMeasurements;

        cout<<"Enter the total no. of measurements have to remove : ";
        cin>>haveToRemove;

        int arr[noOfMeasurements];
        for(int i = 0;i < noOfMeasurements;i++){
            cout<<"Enter the value of "<<(i + 1)<<"th measurement : ";
            cin>>arr[i];
        }

        sort(arr,arr + noOfMeasurements);
        int sum = 0;
        for(int i = haveToRemove;i < (noOfMeasurements - haveToRemove);i++) sum += arr[i];

        double average = (double) sum / (noOfMeasurements - (2 * haveToRemove));
        cout<<fixed<<setprecision(6)<<average<<endl;
    }
}