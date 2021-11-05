#include "create_agent.h"
#include <stdlib.h>

t_agent *mx_create_agent(char *name, int power, int strength) {
    if (name == NULL) return NULL;
    
    t_agent *r = malloc(sizeof(t_agent));
    r->name = mx_strdup(name);
    r->power = power;
    r->strength = strength;

    return r;
}

// int main() {
    
//     t_agent *agent1 = mx_create_agent("ffdf", 99, 99);
//     printf("%s, %i, %i ", agent1->name, agent1->power, agent1->strength);
//     return 0;
// }
