class Solution{
    private:
    
    bool isSafe(int x, int y, vector<vector<int>> &m, int n, 
    vector<vector <int>> visiting)
    {
        //condn
        if((x >=0 && x<n) && (y >=0 && y<n) && visiting[x][y] == 0
                && m[x][y] == 1)
            return true;
        else
            return false;
    }
    
    void solve(vector<vector<int>> &m, int n, vector<string>& ans, int x, 
        int y, vector<vector<int>> visiting, string path)
    {
        //base case
        if(x == n-1 && y == n-1)
        {
            ans.push_back(path);
            return;
        }
        
        //marking chalu kro
        visiting[x][y] = 1;
        
        //4 choices
        
        //down
        int newx = x+1;
        int newy = y;
        
        //jana safe h ki nhi - condn check
        if(isSafe(newx, newy, m, n, visiting))
        {
            path.push_back('D');
            //baki recursion
            solve(m, n, ans, newx, newy, visiting, path);
            path.pop_back();
        }
        
        //Up
        newx = x-1;
        newy = y;
        if(isSafe(newx, newy, m, n, visiting))
        {
            path.push_back('U');
            //baki recursion
            solve(m, n, ans, newx, newy, visiting, path);
            path.pop_back();
        }
        
        //Left
        newx = x;
        newy = y-1;
        if(isSafe(newx, newy, m, n, visiting))
        {
            path.push_back('L');
            //baki recursion
            solve(m, n, ans, newx, newy, visiting, path);
            path.pop_back();
        }
        
        //Right
        newx = x;
        newy = y+1;
        if(isSafe(newx, newy, m, n, visiting))
        {
            path.push_back('R');
            //baki recursion
            solve(m, n, ans, newx, newy, visiting, path);
            path.pop_back();
        }
        
        visiting[x][y] = 0;
    }
    
    
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        
        vector<string> ans;
        if(m[0][0] == 0)  //for passing all test cases
            return ans;
        
        int srcx = 0;
        int srcy = 0;
        vector < vector <int> > visiting = m;  // m size ka
        
        //initialize with zero
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<n; j++)
            {
                visiting[i][j] = 0;
            }
        }
        
        string path = "";
        solve(m, n, ans, srcx, srcy, visiting, path);
        sort(ans.begin(), ans.end());
        return ans;
    }
};