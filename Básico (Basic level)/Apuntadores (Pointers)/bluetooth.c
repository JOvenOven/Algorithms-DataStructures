#include <stdlib.h>
#include <string.h>

#define MAC_LENGTH 6

struct bluetooth_info 
{
    char *name;
    unsigned int strength;
    char mac[MAC_LENGTH];
};

struct bluetooth_info info, *new_info;

struct bluetooth_info *duplicate(struct bluetooth_info *);

int main(int argc, char **argv) 
{
    struct bluetooth_info *info_ptr;
    int i;

    info_ptr = &info;
    info_ptr->name = "My phone";
    info_ptr->strength = 100;
    for (i = 0; i < MAC_LENGTH; i++) 
    {
      info_ptr->mac[i] = 10;
    }
    new_info = duplicate(info_ptr);
    free(new_info);

    return 0;
}

struct bluetooth_info *duplicate(struct bluetooth_info *src_ptr)
{
    struct bluetooth_info *result;
    int i;

    result = (struct bluetooth_info *)malloc(sizeof(struct bluetooth_info));
    result->name = (char *)malloc(strlen(src_ptr->name) + 1);
    strcpy(result->name, src_ptr->name);
    result->strength = src_ptr->strength;
    for (i = 0; i < MAC_LENGTH; i++)
    {
      result->mac[i] = src_ptr->mac[i];
    }
    return result;
}