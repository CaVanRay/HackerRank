//*************************************************************************

/*
Title: Grading Students
Author: Cavan Ray Theiss

Description: given an integer array of student grades we go through
and update them according to 2 rules
    1. anything less than 38 is left unchanged
    2. anything over 38 and is less than 3 away from the next
        multiple of 5, is rounded up to that multiple
        
Input: an integer array of student grades
Output: an updated integer array with new grades
*/

vector<int> gradingStudents(vector<int> grades) {
    vector<int> updatedGrades;
    for(int individualGrade : grades){
        if(individualGrade >= 38 && individualGrade % 5 != 0){
            bool rounded = false;
            for(int i = 1; i < 3; i++){
                if((individualGrade + i) % 5 == 0){
                    updatedGrades.push_back(individualGrade + i);
                    rounded = true;
                    break;
                }
            }
            if(!rounded){
                updatedGrades.push_back(individualGrade);
            }
        }else{
            updatedGrades.push_back(individualGrade);
        }
    }
    return updatedGrades;
}


//*************************************************************************
