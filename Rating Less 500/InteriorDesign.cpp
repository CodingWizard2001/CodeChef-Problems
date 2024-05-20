// Chef decided to redecorate his house, and now needs to decide between two different styles of interior design. For the first style, tiling the floor will cost X1 rupees and painting the walls will cost Y1 rupees.For the second style, tiling the floor will cost X2 rupees and painting the walls will cost Y2 rupees. Chef will choose whichever style has the lower total cost. How much will Chef pay for his interior design?

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int floorCostIn1stDay,paintCostIn1stDay,floorCostIn2ndDay,paintCostIn2ndDay;
        cout<<"Enter the floor cost in first day : ";
        cin>>floorCostIn1stDay;
        cout<<"Enter the paint cost in first day : ";
        cin>>paintCostIn1stDay;
        cout<<"Enter the floor cost in second day : ";
        cin>>floorCostIn2ndDay;
        cout<<"Enter the paint cost in second day : ";
        cin>>paintCostIn2ndDay;
        cout<<"Chef will pay for his interior design : "<<min((floorCostIn1stDay + paintCostIn1stDay),(floorCostIn2ndDay + paintCostIn2ndDay))<<endl;
    }
}