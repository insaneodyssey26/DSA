// easy approch
class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char t) {
        for (char letter : l) {
            if (letter > t) {
                return letter;
            }
        }
        return l[0];
    }
};

// Binary Search approch
class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char t) {
        int s = 0, e = l.size() - 1, mid;
        while(s < e){
            mid = s + (e - s) / 2;
            if(l[mid] <= t){
                s = mid + 1;
            }
            else{
                e = mid;
            }
        }
        return (l[s]>t)?l[s]:l[0];
    }
};