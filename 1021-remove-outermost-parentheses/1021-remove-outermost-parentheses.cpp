class Solution {
public:
    string removeOuterParentheses(string s) 
    {
        stack<char> stack;
        string res = "";

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                if (!stack.empty())
                    res += s[i];
                stack.push(s[i]);
            }
            else 
            {
                stack.pop();
                if (!stack.empty()) 
                    res += s[i];
            }
        }
        return res;
    }
};