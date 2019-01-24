class Solution {
public:
    bool isValid(string s) {
        
        stack<char> mystack;
        for(int i =0; i < s.length(); ++i)
        {
            if(mystack.empty())
            {
                mystack.push(s[i]);
                continue;
            }
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                cout<<"pushed in : " << s[i];
                mystack.push(s[i]);
            }
            else if(s[i] == ')' || s[i] == '}' || s[i] == ']')
            {
                if((mystack.top() == '(' && s[i] == ')' )|| 
                   (mystack.top() == '[' && s[i] == ']') || 
                  (mystack.top() == '{' && s[i] == '}'))
                {
                    cout<<"poped up :" << s[i];
                    mystack.pop();
                }
                else
                {
                    mystack.push(s[i]);
                }
            }
        }
        
        if(mystack.empty())
        {
            return true;
        }
        else
        {
            cout<<mystack.top();
            return false;
        }
        
    }
};
