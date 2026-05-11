/***********************************************************************************************
Title: Magic Spells
Author: Cavan Ray Theiss

Description:

everytime a spell is cast, if it is known, the appropriate counterspell name and its
associated power need to be output, but if it is not a known spell then the 
longest common subsequence of letters between the spell name and what is in the spell 
journal must be counted and output 
        
***********************************************************************************************/

void counterspell(Spell *spell) { //************************************************
        
        if(Fireball *fb = dynamic_cast<Fireball*>(spell)){
                fb->revealFirepower();
        }else if(Frostbite *fb = dynamic_cast<Frostbite*>(spell){
                fb->revealFrostpower();
        }else if(Thunderstorm *ts = dynamic_cast<Thunderstorm*>(spell){
                ts->revealThunderpower();
        }else if(Waterbolt *wb = dynamic_cast<Waterbold*>(spell){
                wb->revealWaterpower();
        }else{
                string strA = spell->revealScrollName();
                string strB = spellJournal::read();

                int m = strA.length();
                int n = strB.length();

                vector<vector<int>> vLCSMatrix(m + 1, vector<int>(n + 1));

                for(int i = 1; i <= m; i++){
                        for(int j = 1; j <= n; j++){
                                if(strA[i - 1] == strB[j - 1]){
                                        vLCSMatrix[i][j] = 1 + vLCSMatrix[i -1][j - 1];     
                                }else{
                                        vLCSMatrix[i][j] = max(vLCSMatrix[i -1][j], vLCSMatrix[i][j - 1]);
                                }
                        }
                }
                
        }
        
} //********************************************************************************

