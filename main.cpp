#include <iostream>
#include <stack>
using namespace std;
    
    
bool checkParans(const string& s) 
{
    stack<char> stack; // creating stack
    
    for (char ch : s)
    { 
        if (ch == '(' ) 
        {
            stack.push(ch); // pushing onto stack 
        }
    else if (ch == ')') 
    {
       if (stack.empty())
       {
        return false;
       }
        stack.pop(); // pop matching parans
    }
    } 
    return stack.empty();
}


int main() 
{
    
}
