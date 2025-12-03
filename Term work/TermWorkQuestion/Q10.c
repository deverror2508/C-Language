#include <stdio.h>
#include <conio.h>
struct node
{
    int data;
    struct node *add;
};
struct node *start = NULL, *new1, *temp, *new1, *prev, *next, *ar[500];
void main()
{
    int choice;
    //    clrscr();
    do
    {
        printf("\n-------------------Linked list menu-------------");
        printf("\n1. Create");
        printf("\n2. Display");
        printf("\n3. Insert_first");
        printf("\n4. Insert_last");
        printf("\n5. Insert_middle");
        printf("\n6. Delete_first");
        printf("\n7. Delete_last");
        printf("\n8. Delete_middle");
        printf("\n9. Search");
        printf("\n10. count");
        printf("\n11. Sort");
        printf("\n12. Reverse");
        printf("\n12. Delete_exit");
        printf("\n-------------------------------------------------");
        printf("\nEnter your choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insertfirst();
            break;
        case 4:
            insertlast();
            break;
        case 5:
            insertmiddle();
            break;
        case 6:
            deletefirst();
            break;
        case 7:
            deletelast();
            break;
        case 8:
            deletemiddle();
            break;
        case 9:
            search();
            break;
        case 10:
            count();
            break;
        case 11:
            sort();
            break;
        case 12:
            reverse();
            break;
        default:
            printf("\nInvalid choice : ");
        }
    } while (choice != 13);
}
create()
{
    int n;
    char ch;
    printf("\nEnter first element : ");
    scanf("%d", &n);
    start = (struct node *)(malloc(sizeof(struct node)));
    start->data = n;
    start->add = NULL;
    temp = start;
    printf("\nDo you want to continue: ");
    ch = getche();
    while (ch == 'y' || ch == 'Y')
    {
        printf("\nEnter next element : ");
        scanf("%d", &n);
        new1 = (struct node *)(malloc(sizeof(struct node)));
        new1->data = n;
        new1->add = NULL;
        temp->add = new1;
        temp = temp->add;
        printf("\nDo you want to continue : ");
        ch = getche();
    }
}
display()
{
    if (start == NULL)
    {
        printf("\nList not found");
    }
    else
    {
        temp = start;
        while (temp != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->add;
        }
    }
}
insertfirst()
{
    int n;
    if (start == NULL)
    {
        printf("\nList not found");
    }
    else
    {
        printf("\nEnter element for insert : ");
        scanf("%d", &n);
        new1 = (struct node *)(malloc(sizeof(struct node)));
        new1->data = n;
        new1->add = NULL;
        new1->add = start;
        start = new1;
    }
}
insertlast()
{
    int n;
    if (start == NULL)
    {
        printf("\nList not found");
    }
    else
    {
        printf("\nEnter element for last : ");
        scanf("%d", &n);
        new1 = (struct node *)(malloc(sizeof(struct node)));
        new1->data = n;
        new1->add = NULL;
        temp = start;
        while (temp->add != NULL)
        {
            temp = temp->add;
        }
        temp->add = new1;
    }
}
insertmiddle()
{
    int n, pos, i = 1;
    if (start == NULL)
        printf("\nList not found");
    else
    {
        printf("\nEnter element for insert : ");
        scanf("%d", &n);
        new1 = (struct node *)(malloc(sizeof(struct node)));
        new1->data = n;
        new1->add = NULL;
        printf("\nEnter position of middle ");
        scanf("%d", &pos);
        next = start;
        while (i < pos)
        {
            prev = next;
            next = next->add;
            i++;
        }
        prev->add = new1;
        new1->add = next;
    }
}
deletefirst()
{
    if (start == NULL)
    {
        printf("\nList not found");
    }
    else
    {
        temp = start;
        start = start->add;
        printf("\n Deleted element is %d", temp->data);
        free(temp);
    }
}
deletelast()
{
    if (start == NULL)
    {
        printf("\nList not found");
    }
    else
    {
        temp = start;
        while (temp->add != NULL)
        {
            prev = temp;
            temp = temp->add;
        }
        prev->add = NULL;
        printf("\nDeleted last element %d", temp->data);
        free(temp);
    }
}
deletemiddle()
{
    int pos, i = 1;
    if (start == NULL)
    {
        printf("\nList not found");
    }
    else
    {
        printf("\nEnter the position : ");
        scanf("%d", &pos);
        temp = start;
        while (i < pos)
        {
            prev = temp;
            temp = temp->add;
            i++;
        }
        next = temp->add;
        prev->add = next;
        printf("\nDeleted middle element %d", temp->data);
        free(temp);
    }
}
search()
{
    int s, f = 0;
    if (start == NULL)
    {
        printf("\nList not found");
    }
    else
    {
        printf("\nEnter an element for search : ");
        scanf("%d", &s);
        temp = start;
        while (temp != NULL)
        {
            if (s == temp->data)
            {
                f = 1;
                break;
            }
            temp = temp->add;
        }
        if (f == 1)
        {
            printf("\nSearching success");
        }
        else
        {
            printf("\nSearching not success");
        }
    }
}
count()
{
    int c = 0;
    if (start == NULL)
    {
        printf("\nList not found");
    }
    else
    {
        temp = start;
        while (temp != NULL)
        {
            c++;
            temp = temp->add;
        }
        printf("\n Total node is %d", c);
    }
}
sort()
{
    int temp1;
    if (start == NULL)
    {
        printf("\nList not found");
    }
    else
    {
        prev = start;
        while (prev != NULL)
        {
            next = prev->add;
            while (next != NULL)
            {
                if (next->data < prev->data)
                {
                    temp1 = prev->data;
                    prev->data = next->data;
                    next->data = temp1;
                }
                next = next->add;
            }
            prev = prev->add;
        }
    }
}
reverse()
{
    int i;
    if (start == NULL)
    {
        printf("\nList not found");
    }
    else
    {
        i = 0;
        next = start;
        while (next != NULL)
        {
            ar[i] = next;
            next = next->add;
            i++;
        }
        i--;
        while (i >= 0)
        {
            printf("%5d", ar[i]->data);
            i--;
        }
    }
    return 0;
}