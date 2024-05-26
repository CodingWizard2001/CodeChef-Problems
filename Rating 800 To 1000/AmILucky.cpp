// A school has organized a field trip for a class of N students, of which X students are boys, and the remaining students are girls. Everyone is excited to go trekking, and must form groups of size exactly K to do so. However, boys will only form groups among themselves, and girls will only form groups among themselves. Both boys and girls will form as many groups as possible. The remaining students can either dance around a bonfire, or just read books. Dancing around the bonfire requires a pair of one girl and one boy, while reading is done alone. Reading is much more boring than dancing, so students will try to avoid it. What's the minimum number of students who will be engaged in reading?


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfBoyAndGirl,noOfBoys,sizeOfTheGroup;

        cout<<"Enter the no. of boy & girl present in the trip : ";
        cin>>noOfBoyAndGirl;

        cout<<"Enter the no. of boy present in the trip : ";
        cin>>noOfBoys;

        cout<<"Enter the size of the group : ";
        cin>>sizeOfTheGroup;

        int remainingBoys = (noOfBoys % sizeOfTheGroup);
        int remainingGirls = ((noOfBoyAndGirl - noOfBoys) % sizeOfTheGroup);

        cout<<"The minimum number of students who will be engaged in reading will be : "<<abs(remainingBoys - remainingGirls)<<endl;
    }
}