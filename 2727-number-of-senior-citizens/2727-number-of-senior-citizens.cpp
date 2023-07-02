class Solution {
public:
    int countSeniors(vector<string>& details) {
        vector<int> ages;
        int ans = 0;
        for(auto it:details){
            string s = it.substr(11,2);
            cout<<s<<" ";
            int temp = stoi(s);
            ages.push_back(temp);
        }
        for(auto it:ages){
            if(it > 60)
                ans++;
        }
        return ans;
    }
};