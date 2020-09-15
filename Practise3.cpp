#include<iostream>
using namespace std;
template<class T>
class Stack
{
    public:
    T stk[100];
    T ans[100];
    int i,j=0;
    string s;
    int size1;
    char s1[100];
    int top = -1;
    Stack()
    {
        cout<<"Enter infix";
        cin>>s;
        size1 = s.size();
        for(i=0;s[i]!='\0';i++)
        {
            s1[i] = s[i];
        }
    }
    void push(T ele)
    {
        stk[++top] = ele;
    }
    T pop()
    {
        if(top==-1)
        {
            cout<<"Stack empty";

        }
        else
        {
            return stk[top--];
        }
    }
    int priority(T ele)
    {
        if(ele == '+' || ele == '-')
            return 1;
        if(ele == '*' || ele == '/')
            return 2;
        if(ele == '^')
            return 3;
        if(ele == '(')
            return 4;
    }
    void infix_to_postfix()
    {
        for(i = 0; i<size1 ;i++)
        {

            if(s1[i]>='0'&&s1[i]<='9')
            {
                ans[j++] = s1[i];
            }
            else if(s1[i]=='(')
            {
                push(s1[i]);
            }
            else if(s1[i]==')')
            {
                char c = pop();
                while(c!='(')
                {
                    ans[j++] = c;
                    c = pop();
                }
            }
            else
            {
                if(priority(s1[i])<= priority(stk[top]))
                {
                    ans[j++] = pop();
                    push(s1[i]);
                }
                else
                {
                    push(s1[i]);
                }
            }
        }
        while(top!=(-1))
        {
            ans[j++] = pop();
        }

    }
    void output()
    {
        for(i=0;i<=j;i++)
        {
            cout<<ans[i];
        }
    }
};
int main()
{
    Stack <char>st;
    st.infix_to_postfix();
    cout<<"\n";
st.output();

}
