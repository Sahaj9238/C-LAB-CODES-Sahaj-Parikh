#include <stdio.h>
#include <string.h>
union details
{
    char name[20];
    char home_address[30];
    char hostel_address[30];
    char city[10];
    char state[10];
    int zip;
} a;
void main()
{
    strcpy(a.name, "abc");
    strcpy(a.home_address, "zyz road");
    strcpy(a.hostel_address, "def road");
    strcpy(a.city, "ahmedabad");
   
    strcpy(a.state, "gujarat");
    a.zip = 380058;
    printf("\n %s", a.name);
    printf("\n %s", a.home_address);
    printf("\n %s", a.hostel_address);
    printf("\n %s", a.city);
    printf("\n %s", a.state);
    printf("\n %d", a.zip);
}