// There is a grid of size 10 ^ 5 X 10 ^ 5 , covered completely in railway tracks. Tom is riding in a train, currently in cell (a , b), and Jerry is tied up in a different cell (c , d), unable to move. The train has no breaks. It shall move exactly K steps, and then its fuel will run out and it shall stop. In one step, the train must move to one of its neighboring cells, sharing a side. Tom can’t move without the train, as the grid is covered in tracks. Can Tom reach Jerry’s cell after exactly K steps?


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int tomPositionInRow,tomPositionInColumn,jerryPositionInRow,jerryPositionInColumn,noOfSteps;

        cout<<"Enter the Tom's position as row-wise : ";
        cin>>tomPositionInRow;

        cout<<"Enter the Tom's position as column-wise : ";
        cin>>tomPositionInColumn;

        cout<<"Enter the Jerry's position as row-wise : ";
        cin>>jerryPositionInRow;

        cout<<"Enter the Jerry's position as column-wise : ";
        cin>>jerryPositionInColumn;

        cout<<"Enter the exactly no. of move step : ";
        cin>>noOfSteps;

        int chance = abs(jerryPositionInRow - tomPositionInRow) + abs(jerryPositionInColumn - tomPositionInColumn);

        if(chance == noOfSteps) cout<<"Tom can reach Jerry's cell"<<endl;
        
        else if(noOfSteps < chance) cout<<"Tom can't reach Jerry's cell"<<endl;

        else if(noOfSteps > chance && (noOfSteps - chance) % 2 == 0) cout<<"Tom can reach Jerry's cell"<<endl;

        else cout<<"Tom can't reach Jerry's cell"<<endl;
    }
}