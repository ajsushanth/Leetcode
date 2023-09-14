class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> order;
        int t=0, r=matrix[0].size()-1;
        int l=0, b=matrix.size()-1;
        int count = matrix.size()*matrix[0].size();
        while(t <= b && l <= r && count){
            for(int i=l; i<=r; i++){
                // cout << t << " " << i << endl;
                order.push_back(matrix[t][i]);
                count--;
            }
            t++;
            if(count == 0) break;
            for(int i=t; i<=b; i++){
                // cout << i << " " << r << endl;
                order.push_back(matrix[i][r]);
                count--;
            }
            r--;
            if(count == 0) break;
            for(int i=r; i>=l; i--){
                // cout << b << " " << i << endl;
                order.push_back(matrix[b][i]);
                count--;
            }
            b--;
            if(count == 0) break;
            for(int i=b; i>=t; i--){
                // cout << i << " " << l << endl;
                order.push_back(matrix[i][l]);
                count--;
            }
            l++;
            if(count == 0) break;
        }
        return order;
    }
};