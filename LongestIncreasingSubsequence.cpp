int LIS(vector<int> &a) {
    vector<int> lis ;
    int n = a.size() ;
            
    for(int i=0;i<n;i++) {
        int idx = lower_bound(lis.begin(), lis.end(), a[i]) - lis.begin();
        if(idx >= lis.size()) lis.push_back(a[i]);
        else lis[idx] = a[i];
    }

    return lis.size() ;
}


