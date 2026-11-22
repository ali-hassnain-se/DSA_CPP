class Solution {
public:
    bool isPalindrome(int x) {
// Best Approach, TC=O(log x) x is extracting, SC=O(log x)

        if(x<0)
        return false;

        if(x==0)
        return true;

        vector<int> v;

        while(x>0) {
            int digit=x%10;
            v.push_back(digit);
            x/=10;
        }

        int st=0, end=v.size()-1;
        while(st<end) {
            if(v[st]!=v[end])
            return false;

            st++;
            end--;
        }
        
        return true;

/*
First Method, using converting the integer to a string

        string s=to_string(x);

        int st=0, end=s.size()-1;
        while(st<end) {
            if(s[st]!=s[end])
            return false;

            st++;
            end--;
        }

        return true;
*/
    }
};