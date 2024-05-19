// Trick or treat, bags of sweets, ghosts are walking down the street. It's Halloween and Suri Bhai is out to get his treats. There are two sectors in his neighborhood, "Bones" and "Blood". They have N and M people, respectively. Each person in "Bones" will hand out X treats, and each person in "Blood" will hand out Y treats. How many treats does Suri Bhai get from visiting everyone in his neighborhood in total?

#include <iostream>
using namespace std;
int main(){
    int bonesSector,bloodSector;
    cout<<"Enter the people lived in bone sectors : ";
    cin>>bonesSector;
    cout<<"Enter the people lived in blood sectors : ";
    cin>>bloodSector;
    int bonesSectorTreat,bloodSectorTreat;
    cout<<"Enter the treat given by each people in bone sector : ";
    cin>>bonesSectorTreat;
    cout<<"Enter the treat given by each people in blood sector : ";
    cin>>bloodSectorTreat;
    cout<<"Total treats does Suri Bhai get from visiting everyone in his neighborhood are : "<<(bonesSector * bonesSectorTreat) + (bloodSector * bloodSectorTreat)<<endl;
}