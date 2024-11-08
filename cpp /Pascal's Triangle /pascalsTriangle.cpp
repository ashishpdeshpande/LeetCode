class Solution {
private:
    vector<int> result(int n) {
        long long res = 1;
        vector<int> ans;
        ans.push_back(1);

        for(int i = 1; i < n; i++) {
            res = res * (n - i);
            res = res / i;
            ans.push_back(res);
        }

        return ans;
    }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1; i <= numRows; i++) {
            ans.push_back(result(i));
        }
        return ans;
    }
};
