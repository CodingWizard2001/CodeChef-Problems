// Chef is a software developer, so he has to switch between different languages sometimes. Each programming language has some features, which are represented by integers here. Currently, Chef has to use a language with two given features A and B. He has two options --- switching to a language with two features A1 and B1, or to a language with two features A2 and B2. All four features of these two languages are pairwise distinct.Tell Chef whether he can use the first language, the second language or neither of these languages (if no single language has all the required features).


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int featureRequiredA,featureRequiredB,featureHaveA1,featureHaveB1,featureHaveA2,featureHaveB2;

        cout<<"Enter the required feature of A : ";
        cin>>featureRequiredA;

        cout<<"Enter the required feature of B : ";
        cin>>featureRequiredB;

        cout<<"Enter the feature have in A1 : ";
        cin>>featureHaveA1;

        cout<<"Enter the feature have in B1 : ";
        cin>>featureHaveB1;

        cout<<"Enter the feature have in A2 : ";
        cin>>featureHaveA2;

        cout<<"Enter the feature have in B2 : ";
        cin>>featureHaveB2;

        if(featureRequiredA == featureHaveA1 || featureRequiredA == featureHaveB1){
            if(featureRequiredB == featureHaveA1 || featureRequiredB == featureHaveB1) cout<<"1st language have the features"<<endl;

            else cout<<"No language have the features"<<endl;
        }
        else if(featureRequiredA == featureHaveA2 || featureRequiredA == featureHaveB2){
            if(featureRequiredB == featureHaveA2 || featureRequiredB == featureHaveB2) cout<<"2nd language have the features"<<endl;

            else cout<<"No language have the features"<<endl;
        }
        else cout<<"No language have the features"<<endl;
    }
}