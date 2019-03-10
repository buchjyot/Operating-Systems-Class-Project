/* This function reads input String in to the buffer */
#include <stdio.h>

void displayPrompt(void);
char ignoreInitialWhiteSpaceIfAny(char);

int readInputString(char *as)
{
    const int max_length = 256;
    int i, length = 0, count = 0,spaceAtEndflag;
    char c;
    c = fgetc(stdin);
    c = ignoreInitialWhiteSpaceIfAny(c);
    
    for(i=0;(c != '\n') && (length != max_length);i++)
    {
        as[i] = c;
        spaceAtEndflag = 0;
        length = length + 1;
        c = fgetc(stdin);
        
        /* Check if the next char is a (space || group of spaces || tab || group of tabs), then keep reading char until you encounter the actual char. */
        if(c == ' ' || c == '\t')
        {
            while(c == ' ' || c == '\t')
                c = fgetc(stdin);
            i = i+ 1;
            as[i] = ' ';
            spaceAtEndflag = 1;
            count = count + 1;
        }
    }
    
    if(length == max_length)
        fprintf(stderr,"WARNING: The input you entered is more than 256 characters, only first 256 characters will be considered as input.\n");
    
    as[i] = '\0';
    if(spaceAtEndflag==0)
        return(count+1);
    else
        return(count);
}


char ignoreInitialWhiteSpaceIfAny(char c)
{
    while(c == ' ' || c == '\t' || c == '\n')
    {
        /* If we encounter the new line character then jump to a new line
         * and displayPrompt */
        if(c == '\n')
            displayPrompt();
        
        /* Skip if the character is tab, whitespace or newline character */
        c = fgetc(stdin);
    }
    return(c);
}

