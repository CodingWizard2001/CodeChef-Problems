// The Chef has reached the finals of the Annual Inter-school Declamation contest. For the finals, students were asked to prepare 10 topics. However, Chef was only able to prepare three topics, numbered A, B and C — he is totally blank about the other topics. This means Chef can only win the contest if he gets the topics A, B or C to speak about. On the contest day, Chef gets topic X. Determine whether Chef has any chances of winning the competition. Print "Yes" if it is possible for Chef to win the contest, else print "No".

#include<iostream>
using namespace std;
int main(){
    int readTopic1,readTopic2,readTopic3,givenTopic;
    cout<<"Enter the read topic's value : ";
    cin>>readTopic1;
    cout<<"Enter the read topic's value : ";
    cin>>readTopic2;
    cout<<"Enter the read topic's value : ";
    cin>>readTopic3;
    cout<<"Enter the given topic's value : ";
    cin>>givenTopic;
    if(readTopic1 == givenTopic || readTopic2 == givenTopic || readTopic3 == givenTopic) cout<<"Yes it's possible to win contest for chef"<<endl;
    else cout<<"No it's not possible to win contest for chef"<<endl;
}