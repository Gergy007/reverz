#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* reverse(const char* text);

int main()
{
    char* reversed = reverse("Hello world!");
    printf("%s\n",reversed);
    return 0;
}

char* reverse(const char* text)
{
    if(text == NULL)
    {
        return NULL;
    }
    char *reverz;
    size_t dlzkaTextu = strlen(text);
    reverz = (char *) malloc(sizeof(char)* dlzkaTextu);
    for(size_t i=0;i<dlzkaTextu;++i)
    {
        *(reverz+i) = toupper(text[dlzkaTextu-1-i]);
    }
    return reverz;
}
