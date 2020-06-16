class Solution {
public:
    bool check4(string IP){
        int num=0,len=0,count=0;
        for(int i=0;i<IP.length();i++){
            if(len>3) return false;
            if(IP[i]=='.'){
                if(num>255 || len==0) return false;
                if(len==2 && num<10) return false;
                if(len==3 && num<100) return false;
               len =0;
                num=0;
                count++;
            }
            else {
                num = num*10+(int)(IP[i]-'0');
                len++;
            }
        }
        if(num>255 || len==0) return false;
        if(len==2 && num<10) return false;
        if(len==3 && num<100) return false;
        if(count!=3) return false;
        return true;
    }
    bool check6(string IP){
        int len=0,count=0;
        for(int i=0;i<IP.length();i++){
            if(len>4) return false;
            if(IP[i]==':'){ 
                if(len>4 || len==0) return false; 
             len=0;
                count++;
            }
            else{
                if((IP[i]>=48 && IP[i]<58)|| (IP[i]>=65 &&  IP[i]<71) || (IP[i]>=97 && IP[i]<103) )
                    len++;
                else
                    return false;
            }
        }
        if(count!=7) return false;
        return ((len<=4)&& (len!=0));
        }
    string validIPAddress(string IP) {
        int len =0;
        for(auto c:IP){
            if(len>4) break;
            if(c=='.'){
                bool flag1 = check4(IP);
                if(flag1) return "IPv4";
                break;
            }
            else if(c==':'){
                bool flag2 = check6(IP);
                if(flag2) return "IPv6";
                break;
            }
            else len++;
        }
        return "Neither";
        
    }
};