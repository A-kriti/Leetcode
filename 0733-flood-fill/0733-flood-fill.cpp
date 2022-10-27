class Solution {
public:
    
    void dfs(vector<vector<int>>& image, int i, int j, int color, int initial){
        
        int n=image.size();
        int m=image[0].size();
        
        if(i<0 || j<0)return;
        if(i>=n || j>=m)return;
        if(image[i][j]!=initial)return;
        image[i][j]=color;
        
        dfs(image,i-1,j,color,initial);
        dfs(image,i,j-1,color,initial);
        dfs(image,i+1,j,color,initial);
        dfs(image,i,j+1,color,initial);
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int initial=image[sr][sc];
        if(image[sr][sc]!=color){
            dfs(image,sr,sc,color,initial);
        }
        
        return image;
    }
};