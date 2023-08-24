class Solution {
public:
int say(std::string str, int i , char c)
{
    int x = 0;
    while (str[i + x] == c)
        x++;
    return (x);
}


std::string countAndSay(int n)
{
    int i;
    int num;
    std::string str;
    std::string tmp = "1";

    while (n > 0)
    {
        str = tmp;
        tmp = "";
        i= 0;
        while (str[i])
        {
            num = say(str, i, str[i]);
            tmp += num + 48;
            tmp += str[i];
            i+=num;
        }
        n--;
    }
    return (str);
}
};