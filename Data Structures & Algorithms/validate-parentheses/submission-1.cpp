class Solution {
public:
    bool isValid(string s) {
        stack<char>ans;

        for(char ch : s){
            if(ch == '(' || ch =='[' || ch =='{'){
             ans.push(ch);
             }else{
                if(ans.empty()){
                    return false;
                }else{
                char top = ans.top();
                ans.pop();
                if (ch == ')' && top != '(') return false;
                if (ch == ']' && top != '[') return false;
                if (ch == '}' && top != '{') return false;
        
                }
             }
        }
              return ans.empty();
            
    }
   
};
