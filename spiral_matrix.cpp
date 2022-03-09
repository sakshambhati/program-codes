class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();  //no. of rows aa chuki h
        int col = matrix[0].size();
        
        vector <int> ans;
        
        int count = 0;
        int total = row * col;
        
        //index
        int startingRow = 0;
        int startingCol = 0;
        int endingCol = col - 1;
        int endingRow = row - 1;
        
        while(count < total)
        {
            //phli row
            for(int i = startingCol; i<=endingCol && count<total; i++)
            {
                ans.push_back(matrix[startingRow][i]); 
                count++;
            }           
            startingRow++; //bracket ke ander dalenge toh matrix ko aage kr dega
            
            
            //last col
            for(int i = startingRow; i <= endingRow && count<total; i++)
            {
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;
            
            //ending row
            for(int i = endingCol; i >= startingCol && count<total; i--)
            {
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;
            
            //starting col
            for(int i = endingRow; i >= startingRow && count<total; i--)
            {
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        
       return ans;
    }
};