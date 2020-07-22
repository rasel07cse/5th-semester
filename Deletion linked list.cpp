#include <stdio.h>

struct node {
        struct node *next;
        int val;
        };

#if WANT_CLONE
#include <stdlib.h>
struct node *clone(struct node *p)
{
struct node *q;
if (!p) return NULL;
q = malloc (sizeof *q);
*q = *p;
return q;
}

#define CLONE(x) clone(x)
#else
#define CLONE(x) (x)
#endif

struct node *merge(struct node *l1, struct node *l2)
{
struct node dummy = {NULL,0}, *here;

for(here = &dummy; l1 || l2; here = here->next) {
        if (!l2 || l1 && l1->val <= l2->val) {
                here->next= CLONE(l1); l1 = l1->next;
                }
        else    if(!l1 || l2) {
                here->next= CLONE(l2); l2 = l2->next;
                }

        }

return dummy.next;
}

        /* Some test data */
struct node evens[] = {
{evens+1, 0}, {evens+2, 2}, {evens+3, 4}, {evens+4, 6}, {NULL, 8}, };

struct node odds[] = {
{odds+1, 1}, {odds+2, 3}, {odds+3, 5}, {odds+4, 7}, {odds+5, 9}, {NULL, 11}, };

void print(struct node *p)
{
for( ; p; p = p->next) {
        printf(" %d", p->val);
        }
printf("\n");
}

int main(void)
{
struct node *both;

printf("odds:"); print(odds);
printf("evens:"); print(evens);
both = merge(odds, evens);
printf("both:"); print(both);

printf("odds:"); print(odds);
printf("evens:"); print(evens);

return 0;
}
