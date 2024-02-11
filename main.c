#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include  <argp.h>


parse_opt (int key, char *arg,
struct argp_state *state)
{
switch (key)
{
case "class" ||'c': printf ("network class\n"); break;
//case  'm' || "mac": printf ("maccccccccc\n"); break;
}
return 0;
}
int main (int argc, char **argv) {
    const char *argp_program_version =
  "mac_changer 1.0";
    const char *argp_program_bug_address =
  "<oti>";
  static char doc[] =  "A C program to change the MAC address of a specified network interface.";
  

   /* The options we understand. */
static struct argp_option options[] = {
  {"class",  'c', 0,       0, "THE class to change its MAC address" },
  {"mac",    'm', 0,       0, "New MAC address" },

  { 0 }
};

struct argp argp = { options, parse_opt };
return argp_parse (&argp, argc, argv, 0, 0, 0);
}