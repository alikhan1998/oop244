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

const char* strStr(const char* str1, const char* str2){
int size1 = strLen(str1), size2 = strLen(str2);

int ind1 = 0, ind2 = 0;

int equalFlag;

while(ind1 < size1-size2+1){
        ind2 = 0;
        equalFlag = 1;

while(ind2 < size2){
if(str1[ind1 + ind2] != str2[ind2]){

equalFlag = 0;
break;
}
            ind2++;
        }

if(equalFlag == 1){
return str1 + ind1;
}
        ind1++;
    }
    return nullptr;
   }

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
                                                                                                                    
