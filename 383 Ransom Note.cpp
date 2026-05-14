class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
         unordered_map<char, int> mpp;
int n =magazine.size();
    
    for (int i = 0; i < n; i++) {
        mpp[magazine[i]]++;
    }
    for(int i =0;i<ransomNote.size();i++){
        if(mpp.contains(ransomNote[i]) && mpp[ransomNote[i]]>0){
           mpp[ransomNote[i]]--;
        }else{
            return false;
        }
    }
    return true;
    }
};
