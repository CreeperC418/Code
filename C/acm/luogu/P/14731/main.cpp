#include <iostream>
#include <string>

int main(){
    std::string s;
    int node = -1;
    long long cnt = 0;
    std::cin >> s;
    for (size_t i = 0;i < s.size(); i++)
    {     
        if (s[i] == '(')
        {
            node++;
            if (s[i + 1] == ')')
            {
                cnt += node;
            }
        }
        else
        {
            node--;
        }       
    }
    std::cout << cnt << std::endl;
    //(((()(()))()))
    return 0;
}