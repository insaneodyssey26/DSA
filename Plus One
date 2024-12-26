class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
        int n =v.size()-1;
        for(int i = n; i>=0; i--){
            if(v[i]==9){
                v[i]=0;
            }
            else{
                v[i]++;
                return v;
            }
        }
        v.insert(v.begin(),1);
        return v;
    }
};
