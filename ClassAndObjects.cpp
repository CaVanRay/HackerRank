#include <iostream>
using namespace std;

class Student{
    
    int scores[5];
    
    public:
    
    void input(){
        for(int i = 0; i < 5; i++){
            cin >> scores[i];
        }
    };
    
   int calculateTotalScore(){
        int sum = 0;
        for(int j = 0; j < 5; j++){
            sum = sum + scores[j];
        }
        return sum;
    };
};

int main() {
    
    int NumOfStuds, firstScore, BettaThanU = 0;
    cin >> NumOfStuds;
    Student Stud[NumOfStuds];
    for(int k = 0; k < NumOfStuds; k++){
        int Score = 0;
        Stud[k].input();
        Score = Stud[k].calculateTotalScore();
        if(k == 0){
            firstScore = Score;
        }else if(Score > firstScore){
            BettaThanU++;
            }   
    }
    cout << BettaThanU;
    return 0;
}
