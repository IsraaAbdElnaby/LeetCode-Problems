class Solution {
public:
    string defangIPaddr(string address) {
       string replacingPeriod = "[.]";
       for(int i=0; i<address.length(); i++) {
           if(address[i] == '.') {
               address.erase(i,1); //remove the '.' character
               address.insert(i, replacingPeriod); //insert the other period instead of the                                                       prev. one
               i += 2; //go two steps to skip the remaining characters of the new string
           }
       }
       return address;
    }
};