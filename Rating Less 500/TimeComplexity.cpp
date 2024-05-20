// A sorting algorithm A is said to have more time complexity than a sorting algorithm B if it uses more number of comparisons for sorting the same array than algorithm B. Given that algorithm A uses X comparisons to sort an array and algorithm B uses Y comparisons to sort the same array, find whether algorithm A has more time complexity.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int comparisonOfAlgorithmA,comparisonOfAlgorithmB;
        cout<<"Enter the comparison of A algorithm : ";
        cin>>comparisonOfAlgorithmA;
        cout<<"Enter the comparison of B algorithm : ";
        cin>>comparisonOfAlgorithmB;
        if(comparisonOfAlgorithmA > comparisonOfAlgorithmB) cout<<"Algorithm A has more time complexity"<<endl;
        else cout<<"Algorithm B has more time complexity"<<endl;
    }
}