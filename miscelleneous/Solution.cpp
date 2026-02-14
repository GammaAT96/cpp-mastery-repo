#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> coprimeAncestor;
    vector<vector<int>> adj;
    vector<vector<int>> coprime;
    vector<int> ans;

    void precomputeCoprime() {
        coprime.assign(51, {});
        for (int i = 1; i <= 50; i++) {
            for (int j = 1; j <= 50; j++) {
                if (__gcd(i, j) == 1) {
                    coprime[i].push_back(j);
                }
            }
        }
    }

    void dfs(int node, int parent, vector<pair<int,int>>& lastSeen, vector<int>& nums, int depth) {
        int num = nums[node];
        int closest = -1, maxDepth = -1;
        for (int val : coprime[num]) {
            if (lastSeen[val].first != -1 && lastSeen[val].second > maxDepth) {
                maxDepth = lastSeen[val].second;
                closest = lastSeen[val].first;
            }
        }
        ans[node] = closest;
        auto prev = lastSeen[num];
        lastSeen[num] = {node, depth};
        for (int nei : adj[node]) {
            if (nei != parent) {
                dfs(nei, node, lastSeen, nums, depth + 1);
            }
        }
        lastSeen[num] = prev;
    }

    vector<int> getCoprimes(vector<int>& nums, vector<vector<int>>& edges) {
        int n = nums.size();
        ans.assign(n, -1);
        adj.assign(n, {});
        precomputeCoprime();
        for (auto& e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        vector<pair<int,int>> lastSeen(51, {-1, -1});
        dfs(0, -1, lastSeen, nums, 0);
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {2,3,3,2};
    vector<vector<int>> edges1 = {{0,1},{1,2},{1,3}};
    auto res1 = sol.getCoprimes(nums1, edges1);
    for (int x : res1) cout << x << " ";
    cout << "\n";

    vector<int> nums2 = {5,6,10,2,3,6,15};
    vector<vector<int>> edges2 = {{0,1},{0,2},{1,3},{1,4},{2,5},{2,6}};
    auto res2 = sol.getCoprimes(nums2, edges2);
    for (int x : res2) cout << x << " ";
    cout << "\n";

    return 0;
}
