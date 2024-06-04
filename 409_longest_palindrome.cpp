/*
409. Longest Palindrome
Given a string s which consists of lowercase or uppercase letters, return the length of the longest 
palindrome
 that can be built with those letters.

Letters are case sensitive, for example, "Aa" is not considered a palindrome.
*/

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




/*
Alternativa migliore in spazio

class Solution {
public:
    int longestPalindrome(string s) {
        int numero_dispari = 0;
        int letter_count[100] = {};
        int res = 0;
        for (char ch : s) { 
            int index = ((int) ch) - 65;
            res -=   ( letter_count[index] / 2 >= 1? letter_count[index]:0 );
            letter_count[index]++;
            res+=  ( letter_count[index] / 2 >= 1? letter_count[index]:0 ) ;
            if(letter_count[index]%2 == 0){
                if(letter_count[index] >1){
                    numero_dispari-=1;
                }
            }else {
                    numero_dispari+=1;
            }
            }
            
            return res + (numero_dispari>0?1:0);

        }
    
};
*/
