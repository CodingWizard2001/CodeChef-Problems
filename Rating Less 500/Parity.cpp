// Ashu and Arvind participated in a coding contest, as a result of which they received N chocolates. Now they want to divide the chocolates between them equally. Can you help them by deciding if it is possible for them to divide all the N chocolates in such a way that they each get an equal number of chocolates? You cannot break a chocolate in two or more pieces.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int totalChocolate;
        cout<<"Enter the chocolate they have : ";
        cin>>totalChocolate;
        if(totalChocolate % 2 == 0) cout<<"They get an equal number of chocolates"<<endl;
        else cout<<"They can't get an equal number of chocolates"<<endl;
    }
}