// class Solution {
// public:
//     int longestAlternatingSubarray(vector<int>& nums, int th) {
//         int n = nums.size();
//         int mx = 0;
    
//         for (int i = 0; i < n; i++) {
//             if (nums[i] % 2 != 0 || nums[i] > th) {
//             continue;
//         }
        
//         int r = i;
//         while (r < n && nums[r] <= th && (r == i || nums[r] % 2 != nums[r - 1] % 2)) {
//             r++;
//         }
        
//         mx = max(mx, r - i);
//     }
    
//     return mx;
//     }
// };


class Solution {
public:
    vector<vector<int>> findans(int n) {
        vector<bool> idx(n + 1, true);
        vector<vector<int>> ans;
        
        for (int i = 2; i <= sqrt(n); i++) {
            if (idx[i]) {
                for (int j = i * i; j <= n; j += i) {
                    idx[j] = false;
                }
            }
        }


        for (int i = 2; i <= n / 2; i++) {
            int y = n - i;
            
            if (idx[i] && idx[y]) {
                ans.push_back({i, y});
            }
        }

        return ans;
    }
};


class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<bool> idx(n + 1, true);
        vector<vector<int>> ans;
        for (int i = 2; i <= sqrt(n); i++) {
            if (idx[i]) {
                for (int j = i * i; j <= n; j += i) 
                    idx[j] = false;
            }
        }
        for (int i = 2; i <= n / 2; i++) {
            int k = n - i;
            if (idx[i] && idx[k])
                ans.push_back({i, k});
        }
        return ans;
    }
};




    int n = nums.size();
        long long ct = 0;
        int low = 0;

        for (int high = 0; high < n; high++) {
            for (int i = low; i < high; i++) {
                if (abs(nums[high] - nums[i]) > 2)
                    low = i + 1;
            }
            ct += high - low + 1;
        }

return ct;