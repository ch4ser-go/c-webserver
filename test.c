#include <stdio.h> 

#include <string.h> 

  

int main() 

{ 

    unsigned char str[50] = "GeeksForGeeks is for programming geeks."; 

    printf("\nBefore memset(): %s\n", str); 

    // Fill 8 characters starting from str[13] with '.' 

    memset(str, '\0', sizeof(str)); 

    printf("After memset():  %s", str); 

    return 0; 

} 
