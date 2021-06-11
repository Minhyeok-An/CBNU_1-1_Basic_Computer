#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXCHARS 30
#define DEBUG 0

/* here is the declaration of a queue structure */
struct NameRec
{
   char name[MAXCHARS];
   struct NameRec *nextAddr;
};

/* here is the definition of the top and bottom queue pointers */
struct NameRec *queueIn, *queueOut;

int main()
{
   void readEnque();
   void serveShow();

   queueIn = NULL;
   queueOut = NULL;
   readEnque();
   serveShow();

   return 0;
}

/* get a name and enque it onto the queue */
void readEnque()
{
   char name[MAXCHARS];
   void enque(char *);

   printf("Enter as many names as you wish, one per line");
   printf("\nTo stop entering names, enter a single x\n");

   while (1)
   {
      printf("Enter a name: ");
      gets(name);
      if (strcmp(name, "x") == 0)
         break;
      enque(name);
   }
}

/* serve and display names from the queue */
void serveShow()
{
   char name[MAXCHARS];
   void serve(char *);

   printf("\nThe names served from the queue are:\n");
   while (queueOut != NULL)
   {
      serve(name);
      printf("%s\n", name);
   }
}

void enque(char *name)
{
   struct NameRec *newaddr;

   if (DEBUG)
   {
      printf("Before the enque the address in queueIn is %p", queueIn);
      printf("\nand the address in queueOut is %p", queueOut);
   }

   newaddr = (struct NameRec *)malloc(sizeof(struct NameRec));
   if (newaddr == (struct NameRec *)NULL)
   {
      printf("\nFailed to allocate memory for this structure\n");
      exit(1);
   }
   if (queueOut == NULL)
      queueOut = newaddr;
   if (queueIn != NULL)
      queueIn->nextAddr = newaddr;

   strcpy(newaddr->name, name);
   newaddr->nextAddr = NULL;
   queueIn = newaddr;

   if (DEBUG)
   {
      printf("\n After the enque the address in queueIn is %p\n", queueIn);
      printf("  and the address in queueOut is %p\n", queueOut);
   }
}

void serve(char *name)
{
   struct NameRec *nextAddr;

   if (DEBUG)
      printf("Before the serve the address in queueOut is %p\n", queueOut);

   strcpy(name, queueOut->name);
   nextAddr = queueOut->nextAddr;
   free(queueOut);
   queueOut = nextAddr;

   if (DEBUG)
      printf(" After the serve the address in queueOut is %p\n", queueOut);
}