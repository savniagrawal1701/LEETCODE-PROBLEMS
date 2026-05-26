class Solution { 
public: 
    int numberOfSpecialChars(string word) { 
        unordered_set<char> st; 
        char ch = ' '; 

        for(int i = 0; i < word.size(); i++){ 
            for(int j = 0; j < word.size(); j++){ 
                if(word[i] == tolower(word[i])) {
                    ch = word[i];
                }
                if(word[j] == toupper(ch)){ 
                    st.insert(ch); 
                } 
            } 
        } 
        return st.size(); 
    } 
};
