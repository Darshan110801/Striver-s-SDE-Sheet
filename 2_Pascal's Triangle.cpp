#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long int>> ret_vect;
    if(n==0) return ret_vect;
    vector<long long int> cur_vect{1};
    int tb_pushed = 0;
    while(tb_pushed < n)
    {
        ret_vect.push_back(cur_vect);
        tb_pushed++;
        vector<long long int> new_vect(tb_pushed + 1,1);
        int sz = tb_pushed + 1;
        for(int i=1;i<sz-1;i++)
        {
            new_vect[i] = cur_vect[i-1] + cur_vect[i];
        }
        cur_vect.resize(sz);
        for(int i=0;i<sz;i++) cur_vect[i] = new_vect[i];
    }
    return ret_vect;
}
