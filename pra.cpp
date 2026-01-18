class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
      vector<string> morse = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
     set<string> uniqueMorses; //stores only unique
        for(int i = 0; i < words.size(); i++){
            string s;
            for(int j = 0; j < words[i].size(); j++){
                s+=morse[(int)(words[i][j]-'a')]; //letter number 
            }
            uniqueMorses.insert(s);
        }
        return uniqueMorses.size();
    }
};