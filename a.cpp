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

class Solution
{
public:
    vector<long long> countBlackBlocks(int m, int n, vector<vector<int>> &coordinates)
    {
        vector<vector<bool>> idx(m, vector<bool>(n, false));

        for (const auto &arr : coordinates)
        {
            int x = arr[0];
            int y = arr[1];
            idx[x][y] = true;
        }
        vector<long long> ans(5, 0);
        for (int i = 0; i < m - 1; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                int blackCells = idx[i][j] + idx[i + 1][j] + idx[i][j + 1] + idx[i + 1][j + 1];
                ans[blackCells]++;
            }
        }
        return ans;
    }
};

int mx = 1;
int curr = 1;

for (int i = 1; i < nums.size(); i++)
{
    if (nums[i] != nums[i - 1])
    {
        curr++;
    }
    else
    {
        mx = std::max(mx, curr);
        curr = 1;
    }
}

mx = std::max(mx, currLength);

return (mx > 1) ? mx : -1;

class Solution
{
public:
    int minimumBeautifulSubstrings(string s)
    {
        int ct = 0;
        int mx = -1;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                mx = max(mx, 0);
            }
            else if (s[i] == '0' && mx >= 0)
            {
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

for (int i = 1; i < n; i++)
{
    if (nums1[i] >= nums1[i - 1])
        ans1[i] = ans1[i - 1] + 1;

    if (nums2[i] >= nums2[i - 1])
        ans2[i] = ans2[i - 1] + 1;

    if (nums1[i] >= nums2[i - 1])
        ans1[i] = max(ans1[i], ans2[i - 1] + 1);

    if (nums2[i] >= nums1[i - 1])
        ans2[i] = max(ans2[i], ans1[i - 1] + 1);

    mx = max(mx, max(ans1[i], ans2[i]));
}

return mx;

int minimumIndex(vector<int> &nums)
{
    int n = nums.size();
    unordered_map<int, int> mp;
    int dim = -1, dim_ct = 0;

    for (int num : nums)
    {
        mp[num]++;
        if (mp[num] > dim_ct)
        {
            dim_ct = mp[num];
            dim = num;
        }
    }
    int low = 0, high = dim_ct;
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] == dim)
        {
            low++;
            high--;
        }
        if (low * 2 > i + 1 && high * 2 > n - i - 1)
            return i;
    }

    return -1;
}

// jd
class Solution
{
public:
    int longestValidSubstring(string word, vector<string> &forbidden)
    {
        unordered_set<string> st(forbidden.begin(), forbidden.end());
        int mx = 0;
        int n = word.length();

        for (int i = 0; i < n; i++)
        {
            for (int j = 1; i + j <= n; j++)
            {
                string sub = word.substr(i, j);
                bool flag = true;
                for (const string &ch : forbidden)
                {
                    if (sub.find(ch) != string::npos)
                    {
                        flag = false;
                        break;
                    }
                }
                if (!flag)
                    break;
                mx = max(mx, j);
            }
        }

        return mx;
    }
};

// djkdk

#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution
{
public:
    int maximumBeauty(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        int mx = 0;

        for (int num : nums)
        {
            if (mp[num] == 0)
            {
                mp[num]++;
            }
        }

        for (int it : nums)
        {
            if (mp[it] == 0)
                continue;

            int mnn = max(0, it - k);
            int mxx = min(2 * k, it + k);

            for (int j = mnn; j <= mxx; j++)
            {
                int ct = 0;

                for (int x : nums)
                {
                    if (x >= j - k && x <= j + k)
                        ct++;
                }

                mx = std::max(mx, ct);
            }
        }

        return mx;
    }
};

string ans = "";
int n = s.size();

for (int i = 0; i < n; i++)
{
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
        s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        ans += s[i];
}
int ct = 0;
sort(ans.begin(), ans.end());
for (int i = 0; i < n; i++)
{
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
        s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        s[i] = ans[ct++];
}
return s;

int power(int sum, int expo, int k)
{
    int result = pow(b, expo);

    if (sum == result)
        return 1;
    if (sum < result)
        return 0;
    int a = power(sum - result, expo, b + 1);
    int b = power(sum, expo, b + 1);
    return a + b;
}

vector<string> splitWordsBySeparator(vector<string> &words, char separator)
{

    vector<string> res;
    for (auti string &word : words)
    {
        string ans = "";
        for (char ch : word)
        {
            if (ch != separator)
                ans += ch;
            else
            {
                if (!ans.empty())
                {
                    res.push_back(ans);
                    ans.clear();
                }
            }
        }
        if (!ans.empty())
        {
            res.push_back(ans);
        }
    }
    return res;
}

long long maxArrayValue(vector<int> &nums)
{
    int n = nums.size();
    long long mx = 0;
    long long high = nums[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        long long k = nums[i];
        if (k <= high)
        {
            high = high + k;
            if (high > mx)
                mx = high;
        }
        else
        {
            if (high > mx)
                mx = high;
            high = k;
        }
    }

    return high;
}