#include <cs50.h>
#include <stdio.h>
#include<string.h>

int main(int argc, string argv [])
    
{   

//prompt the user for plain text
   
    string str = get_string("plain text: ");

        //count the characters, string length
    for(int i = 0; i < strlen(str); i++)

        //add +1 to the recognized character in the alphabet. / 
    { 
        int x = str[i] + 1; 
        // if the character is letter Z change it to letter "a"
        if(str[i] == 122 )
        {
            printf("a");
        }
             //cyptic output 
                 
        printf("%c", x);
    
        
    }
    printf("\n");
}
