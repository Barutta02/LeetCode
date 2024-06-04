class Solution {
public:
    int longestPalindrome(string s) {
        int found_dispari = 0;
        int letter_count[100] = {};
        int res = 0;
        for (char ch : s) { 
                letter_count[((int) ch) - 65]++;

            }
        for(int i = 0;i<100;i++){
            if(letter_count[i] > 0){
                if ( letter_count[i] % 2 != 0){
                    found_dispari = 1;
                    res+=  letter_count[i] -1 ;
                }else{
                    res+=  letter_count[i]  ;
                }
                }
        }
                    return res + found_dispari;

        }
    
};
