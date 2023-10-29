#include "stdio.h"
#include "string.h"

int main(void)
{
    char answer; 
    printf("Are you worried about something? (Y \ N)\n"); 
    scanf("%c", &answer); 
    printf("%c", answer); 
}