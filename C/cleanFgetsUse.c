#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[20];
    printf("enter a name: ");
    
    if (fgets(buffer, 10, stdin) != NULL) {
        // Remove trailing newline if fgets stored it
        buffer[strcspn(buffer, "\n")] = '\0';
        
        // Always print with a trailing newline for clean terminal output
        printf("%s\n", buffer);
    }
    
    return 0;
}
