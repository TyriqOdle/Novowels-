#include <stdio.h>

int main(){

    char word[45];

   printf("Enter the Word\n");
   scanf("%s",word);

    for (int i = 0; word[i] != '\0'; i++){
        switch (word[i])
        {
        case 'a':
            word[i] = '6';
            break;
        case 'e':
            word[i] = '3';
            break;
        case 'i':
            word[i] = '1';
            break;
        case 'o':
            word[i] = '0';
            break;
        
        default:
            break;
        }
    }

    printf("%s",word);
}
