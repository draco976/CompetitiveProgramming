struct CentroidTree {
    vector<bool> vis;
    vector<int> pt;
    vector<int> sz;
    vector<vector<int>> adj ;
    
    CentroidTree(vector<vector<int>> &adj) {
        int n = adj.size() ;
        this->adj = adj ;
        vis.resize(n,0) ;
        pt.resize(n,-1) ;
        sz.resize(n,0) ;
        init_centroid() ;
    }

    int find_centroid(int v, int p, int n) {
        for (int x: adj[v]) {
            if (x != p) {
                if (!vis[x] && sz[x] > n / 2) {
                    return find_centroid(x, v, n);
                }
            }
        }
        return v;
    }

    int find_size(int v, int p = -1) {
        if (vis[v]) return 0;
        sz[v] = 1;
        for (int x: adj[v]) {
            if (x != p) {
                sz[v] += find_size(x, v);
            }
        }
        return sz[v];
    }

    void init_centroid(int v = 0, int p = -1) {
        find_size(v);

        int c = find_centroid(v, -1, sz[v]);
        vis[c] = true;
        pt[c] = p;

        for (int x: adj[c]) {
            if (!vis[x]) {
                init_centroid(x, c);
            }
        }
    }
    
};
