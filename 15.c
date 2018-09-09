#include<stdio.h>
#include<curses.h>
#include<stdlib.h>

struct node
             {
                   int info;
                   struct node *next;
                   struct node *prev;
             };
 int c = 0,count;
 struct node *listinsend(struct node *,int );
 void listsearch(struct node *,int );
 struct node *listdel(struct node *,int );
 void listcnt(struct node *);
 void listdisp(struct node *);
 struct node *start = NULL;

 void main()
   {
        int x,ch,pos;
          do
              {
                  clrscr();
                  printf("Link List.\n");
                  printf("===================\n");
                  printf("1.Insertion at the End.\n");
                  printf("2.Deletion.\n");
                  printf("3.Searching node.\n");
                  printf("4.Counting node.\n");
                  printf("5.Display.\n");
                  printf("6.Exit.\n");
                  printf("===================\n");
                  printf("Enter your choice:\n");
                  scanf("%d",&ch);
                  switch(ch)
                       {
                           case 1:
                                          printf("\nInserting_____X value?\n");
                                          scanf("%d",&x);
                                          start = listinsend(start,x);
                                          listdisp(start);
                                          getch();
                                          break;

                           case 2:
                                          printf("\nDeletion_____\n");
                                          listdisp(start);
                                          printf("\nEnter X value :");
                                          scanf("%d",&x);
                                          start = listdel(start,x);
                                          printf("\nAfter Deleting\n");
                                          listdisp(start);
                                          getch();
                                          break;
                           case 3:
                                          printf("\nSearching_____\n");
                                          listdisp(start);
                                          printf("\nEnter X value :");
                                          scanf("%d",&x);
                                          listsearch(start,x);
                                          getch();
                                          break;
                           case 4:
                                          printf("\nNumber of Nodes in List : ");
                                          listcnt(start);
                                          getch();
                                          break;
                           case 5:
                                          printf("\nList of element :\n");
                                          listdisp(start);
                                          getch();
                                          break;
                           case 6:
                                          exit(0);
                                          break;
                           default:
                                          printf("\nChoice between 1-6");
                                          getch();
                       }
              }while(ch <= 6);
 }

struct node *listinsend(struct node *first,int x)
   {
         struct node *n1,*temp;
         n1 = (struct node *)malloc (sizeof(struct node));
         n1->info = x;
         n1->next = NULL;
         n1->prev = NULL;
         if(first == NULL)
           {
                first = n1;
                return first;
           }
         else
           {
                temp = first;
                while(temp->next != NULL)
                    {
                       temp = temp->next;
                    }
                temp->next = n1;
                n1->prev = temp;
                return first;
           }
   }

 struct node * listdel(struct node *first,int x)
   {
        struct node *temp,*pred;
        if(first == NULL)
          {
                printf("\nUnderflow");
                getch();
                return first;
          }
        temp = first;
        while( (temp->info != x) && (temp->next != NULL) )
          {
                pred = temp;
                temp = temp->next;
          }
        if(temp->info != x)
          {
                printf("\nNode not found");
                getch();
                return first;
          }
        pred->next = temp->next;
        temp->next->prev = pred;
        return first;
   }

 void listsearch(struct node *first,int x)
   {
        struct node *temp;
        if(first == NULL)
          {
                printf("\nList is empty");
                getch();
          }
        if(first->info == x)
          {
                printf("\nNode Found at 1 Position");
                getch();
          }
        temp = first;
        while( (temp->info != x) && (temp->next != NULL) )
          {
                c++;
                temp = temp->next;
          }
        if( (temp->info != x) && (temp->next == NULL))
          {
                printf("\nNode Not Found");
          }
        else
          {
                if(temp->info == x)
                  {
                        printf("\nNode Found at %d Position",c+1);
                        getch();
                  }
          }
   }

void listcnt(struct node *first)
   {
        count = 0;
        while(first != NULL)
          {
                count++;
                first = first->next;
          }
        printf("\n%d\n\n",count);
        return;
   }

void listdisp(struct node *first)
   {
        while(first != NULL)
          {
                printf("%d",first->info);
                printf("<->");
                first = first->next;
          }
        printf("NULL");
   }

