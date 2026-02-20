//************************************************************************************

/*
 Title: Number Line Jumps
 Author: Cavan Ray Theiss
 
 Description: two kangaroos start at different positions and jump different distances
 we need to calculate whether or not they will ever land on the same spot at the same
 time and return a string that says "YES" or "NO"
 
 Input: 4 individual integers
 Output: we return a string answer that says yes or no
*/

string kangaroo(int x1, int v1, int x2, int v2) {
int leadingKangaroo, leadSpeed, laggingKangaroo, lagSpeed;

if(((x1 < x2)&&(v1 > v2))||((x1 > x2)&&(v1 < v2))){
    x1 < x2 ?
    (leadingKangaroo = x2, leadSpeed = v2, laggingKangaroo = x1, lagSpeed = v1): 
    (leadingKangaroo = x1, leadSpeed = v1, laggingKangaroo = x2, lagSpeed = v2);
}else if (x1 == x2){
    return "YES";
}else{
    return "NO";
}

/*
while(leadingKangaroo > laggingKangaroo){
    leadingKangaroo += leadSpeed;
    laggingKangaroo += lagSpeed;
    if(leadingKangaroo == laggingKangaroo)
    return "YES";   
}
*/

if((leadingKangaroo - laggingKangaroo) % (lagSpeed - leadSpeed) == 0 && (leadingKangaroo - laggingKangaroo)/(lagSpeed - leadSpeed) >= 0){
    return "YES";
}

return "NO";
}

//************************************************************************************
