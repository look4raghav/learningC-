// find max number


unordered_map<int,int> mp;
        for(int i=0;i<N.length();i++){
            mp[N[i]-'0']++;
        }
        string ans;
        for(int i=9;i>=0;i--){
            for(int j=0;j<mp[i];j++){
                ans+='0'+i;
            }
        }
        return ans;
