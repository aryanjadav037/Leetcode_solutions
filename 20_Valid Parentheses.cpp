class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        unordered_map<char, char> matching = {{')', '('}, {'}', '{'}, {']', '['}};

        for (char &ch : s)
        {
            // If the character is a closing bracket
            if (matching.find(ch) != matching.end())
            {
                // Check if the stack is not empty and the top of the stack matches the corresponding opening bracket
                if (!st.empty() && st.top() == matching[ch])
                {
                    st.pop(); // Pop the matching opening bracket from the stack
                }
                else
                {
                    return false; // No matching opening bracket or stack is empty
                }
            }
            else
            {
                // It's an opening bracket, push it onto the stack
                st.push(ch);
            }
        }
        // If the stack is empty, all brackets were matched properly
        return st.empty();
    }
};