class Solution {
public:
    
    void dfs(int i,int j,vector<vector<int>>& image ,int initialcolor,int newcolor){
        
        int n=image.size();
        int m=image[0].size();
        
        if(i<0 || j<0)return;
        if(i>=n || j>=m)return;
        if(image[i][j]!=initialcolor)return;
        
        image[i][j]=newcolor;
        
        dfs(i-1,j,image,initialcolor,newcolor);
        dfs(i+1,j,image,initialcolor,newcolor);
        dfs(i,j-1,image,initialcolor,newcolor);
        dfs(i,j+1,image,initialcolor,newcolor);
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int initialcolor=image[sr][sc];
        if(image[sr][sc]!=color){
            dfs(sr,sc,image,initialcolor,color);
        }
        
        return image;
    }
};