class Solution {
public:
 
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int M =image.size();
        int N=image[0].size();
          for (int i = 0; i <M; ++i) {
       
        reverse(image[i].begin(),image[i].end());
    }
    
    for(int i =0;i<M;i++){
        for(int j=0;j <N ;j++){
            if(image[i][j]==1){
                image[i][j]=0;
            }
            else{
               image[i][j]=1; 
            }
        }
    }
    return image;
    }
};
