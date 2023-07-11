// // class Solution {
// // public:
// //     int longestAlternatingSubarray(vector<int>& nums, int th) {
// //         int n = nums.size();
// //         int mx = 0;
    
// //         for (int i = 0; i < n; i++) {
// //             if (nums[i] % 2 != 0 || nums[i] > th) {
// //             continue;
// //         }
        
// //         int r = i;
// //         while (r < n && nums[r] <= th && (r == i || nums[r] % 2 != nums[r - 1] % 2)) {
// //             r++;
// //         }
        
// //         mx = max(mx, r - i);
// //     }
    
// //     return mx;
// //     }
// // };


// class Solution {
// public:
//     vector<vector<int>> findans(int n) {
//         vector<bool> idx(n + 1, true);
//         vector<vector<int>> ans;
        
//         for (int i = 2; i <= sqrt(n); i++) {
//             if (idx[i]) {
//                 for (int j = i * i; j <= n; j += i) {
//                     idx[j] = false;
//                 }
//             }
//         }


//         for (int i = 2; i <= n / 2; i++) {
//             int y = n - i;
            
//             if (idx[i] && idx[y]) {
//                 ans.push_back({i, y});
//             }
//         }

//         return ans;
//     }
// };


// class Solution {
// public:
//     vector<vector<int>> findPrimePairs(int n) {
//         vector<bool> idx(n + 1, true);
//         vector<vector<int>> ans;
//         for (int i = 2; i <= sqrt(n); i++) {
//             if (idx[i]) {
//                 for (int j = i * i; j <= n; j += i) 
//                     idx[j] = false;
//             }
//         }
//         for (int i = 2; i <= n / 2; i++) {
//             int k = n - i;
//             if (idx[i] && idx[k])
//                 ans.push_back({i, k});
//         }
//         return ans;
//     }
// };




//     int n = nums.size();
//         long long ct = 0;
//         int low = 0;

//         for (int high = 0; high < n; high++) {
//             for (int i = low; i < high; i++) {
//                 if (abs(nums[high] - nums[i]) > 2)
//                     low = i + 1;
//             }
//             ct += high - low + 1;
//         }

// return ct;




class Solution {
public:
    vector<long long> countBlackBlocks(int m, int n, vector<vector<int>>& coordinates) {
        vector<vector<bool>> idx(m, vector<bool>(n, false));
        
        for (const auto& arr : coordinates) {
            int x = arr[0];
            int y = arr[1];
            idx[x][y] = true;
        }
        vector<long long> ans(5, 0);
        for (int i = 0; i < m - 1; i++) {
            for (int j = 0; j < n - 1; j++) {
                int blackCells = idx[i][j] + idx[i+1][j] + idx[i][j+1] + idx[i+1][j+1];
                ans[blackCells]++;
            }
        }
        return ans;
    }
};



 int mx = 1;
        int curr = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                curr++;
            } else {
                mx = std::max(mx, curr);
                curr = 1;
            }
        }

        mx = std::max(mx, currLength);

        return (mx > 1) ? mx : -1;




        class Solution {
public:
    int minimumBeautifulSubstrings(string s) {
        int ct = 0;
        int mx = -1;
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1') {
                mx = max(mx, 0);
            } else if (s[i] == '0' && mx >= 0) {
                mx++;
            }
            
            ct += (s[i] == '1' && mx > 0);
        }
        
        return (mx == -1) ? -1 : ct;
    }
};



int n = nums1.size();
        
        vector<int> ans1(n, 1); 
        vector<int> ans2(n, 1); 
        
        int mx = 1; 
        
        for (int i = 1; i < n; i++) {
            if (nums1[i] >= nums1[i-1])
                ans1[i] = ans1[i-1] + 1;
            
            if (nums2[i] >= nums2[i-1])
                ans2[i] = ans2[i-1] + 1;
            
            if (nums1[i] >= nums2[i-1])
                ans1[i] = max(ans1[i], ans2[i-1] + 1);
            
            if (nums2[i] >= nums1[i-1])
                ans2[i] = max(ans2[i], ans1[i-1] + 1);
            
            
            mx = max(mx, max(ans1[i], ans2[i]));
        }
        
        return mx;