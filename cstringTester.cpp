#include "cstring.h"
namespace sdds{
     
   int strLen(const char* s){
      int len = 0;  
      while(s[len] != '\0'){ // Check for termination character of string
          len ++;
      }
      return len;
   }
       // Copies the srouce character string into the destination
   void strCpy(char* des, const char* src){
     int i = 0;
     while(src[i] != '\0'){
       des[i] = src[i];
       i++;
     }
     des[i] = '\0';
   }
      // Copies the source character string into the destination upto "len"
      // characters. The destination will be null terminated only if the number
      // of the characters copied is less than "len"
   void strnCpy(char* des, const char* src, int len){
     int i = 0;
     while(i<len && src[i] != '\0'){
       des[i] = src[i];
       i++;
     }
     if(i!= len){
       des[i] = '\0';
     }
   }
     // Compares two C-strings 
     // returns 0 i thare the same
     // return > 0 if s1 > s2
     // return < 0 if s1 < s2
   int strCmp(const char* s1, const char* s2){
     int i=0;
     while(s1[i]!= '\0' && s2[i] != '\0'){
       if(s1[i] > s2[i]){
         return 1;
       }
       if(s1[i] < s2[i]){
         return -1;
       }
       i++;
     }
     if(s1[i] == '\0' && s2[i] == '\0'){
       return 0;
     }
     if(s2[i] != '\0'){
       return -1;
     }
     return 1;
   }
     // returns 0 i thare the same
     // return > 0 if s1 > s2
     // return < 0 if s1 < s2
   int strnCmp(const char* s1, const char* s2, int len){
     int i=0;
     while(i < len && s1[i] != '\0' && s2[i] != '\0'){
       if(s1[i] > s2[i]){
         return 1;
       }
       if(s1[i] < s2[i]){
         return -1;
       }
       i++;
     }
     if(i == len){
       return 0;
     }
      if(s2[i] != '\0'){
       return -1;
     }
     return 1;
   }
     // returns the address of first occurance of "str2" in "str1"
     // returns nullptr if no match is found
   const char* strStr(const char* str1, const char* str2){
    int size1 = strLen(str1), size2 = strLen(str2); // To store the size of the string
    int ind1 = 0, ind2 = 0; // To maintain the index for traversal
    int equalFlag;
    
    while(ind1 < size1-size2+1){ 
        ind2 = 0;
        equalFlag = 1; // Flag to store if we found an occurance or not
        while(ind2 < size2){ // Iterate over the str2 to match it
            if(str1[ind1 + ind2] != str2[ind2]){ // If we find mismatch 
                equalFlag = 0; // Change the flag
                break; // break
            }
            ind2++;
        }
        if(equalFlag == 1){ // If flag is unchanged
            return str1 + ind1; // Return the position
        }
        ind1++;
    }
    return nullptr;
   }
     // Concantinates "src" C-string to the end of "des"
   void strCat(char* des, const char* src){
      int desSize = strLen(des); // Find the size of des
      int i = 0;
      while(src[i] != '\0'){
          des[desSize+i] = src[i]; // Copy the characters of src after the size of des
          i++;
      }
      des[desSize + i] = '\0';  // Terminate with termination character of string
      return;
   }
    }
