problem link : https://leetcode.com/problems/roman-to-integer/description/?envType=study-plan-v2&envId=top-interview-150
class Solution {
public:
    int romanToInt(string s) {
        int i,integer=0;
     for(i=0; i<s.size(); i++)
    {
        if(s[i]=='M')
        {
            integer=integer+1000;
        }
        if(s[i]=='D')
        {
            integer=integer+500;
        }
        if(s[i]=='C')
        {
            if(s[i+1]=='D')
            {
                integer=integer+400;
                i++;
            }
            else if(s[i+1]=='M')
            {
                integer=integer+900;
                i++;
            }
            else
            {
                integer=integer+100;
            }
        }
        if(s[i]=='L')
        {
            integer=integer+50;
        }
        if(s[i]=='X')
        {
            if(s[i+1]=='C')
            {
                integer=integer+90;
                i++;
            }
            else if(s[i+1]=='L')
            {
                integer=integer+40;
                i++;
            }
            else
            {
                integer=integer+10;
            }
        }
        if(s[i]=='V')
        {
            integer=integer+5;
        }
        if(s[i]=='I')
        {
            if(s[i+1]=='X')
            {
                integer=integer+9;
                i++;
            }
            else  if(s[i+1]=='V')
            {
                integer=integer+4;
                i++;
            }
            else
            {
                integer=integer+1;
            }
        }
    }
    return integer;   
    }
};
