void f(int ind, vector<vector<int>>& roads, vector<vector<int>>& adj, vector<bool> &vis) {
    vis[ind] = true;
    
    for(auto neighbor : adj[ind]) {
        if(!vis[neighbor]) {
            f(neighbor, roads, adj, vis);
        }
    }
}

int findNumOfProvinces(vector<vector<int>>& roads, int n) {
    // Write your code here.
    vector<vector<int>> adj(n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(roads[i][j] == 1 && i != j) {
                adj[i].push_back(j);
            }
        }
    }

    vector<bool> vis(n, false);
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(!vis[i]) {
            f(i, roads, adj, vis);
            cnt++;
        }
    }
    return cnt;
}