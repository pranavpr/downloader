#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	long long i =0;
    char *buffer = 0;
    long long length;
    FILE *f;
    f = fopen("data.html", "r");
    if (f)
    {
        fseek (f, 0, SEEK_END);
        length = ftell (f);
        fseek (f, 0, SEEK_SET);
        buffer = malloc (length);
        if (buffer)
        {
            fread (buffer, 1, length, f);
        }
        fclose (f);
    }

    if (buffer)
    {
        while(buffer[i] != '\0')
        {
        	printf("%c",buffer[i] );
        	i++;
        }
    }
    printf("%d\n", i);
}