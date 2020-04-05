#include <stdio.h>
#include <stdlib.h>
#define size 10
int q[size];
int rear=-1,front=-1;
typedef struct node
{
    int vertex;
    struct node *next;
}node;
node *head[size]={NULL};
int nov;
int isEmpty()
{
    if(rear==front)
        return 1;
    return 0;
}
int isFull()
{
    if(rear==size-1)
        return 1;
    return 0;
}

void insertQueue(int data)
{
    q[++rear]=data;
    return;
}
int deQueue()
{
    front++;
    return (q[front]);
}
void insert(int i,int j)
{
    node *curr=(node*)malloc(sizeof(node));
    curr->next=NULL;
    curr->vertex=j;
    if(head[i]==NULL)
        head[i]=curr;
    else
    {
        node *temp=head[i];
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=curr;

    }
}
void displayList()
{
    int i;
    for(i=0;i<nov;i++)
    {
        node *temp=head[i];
        printf("ADJ (%c)=>",i+'A');
        while(temp->next!=NULL)
        {
            printf("%3c",temp->vertex+'A');
            temp=temp->next;
        }
        printf("%3c",temp->vertex+'A');
        printf("\n");
    }
}

void readGraph()
{
    FILE *fp=fopen("graph.txt","r");
    if(fp==NULL)
    {
        printf("File not found");
        exit(1);
    }
    fscanf(fp,"%d",&nov);
    int i,j;
    for(i=0;i<nov;i++)
    {
        for(j=0;j<nov;j++)
        {
            int data;
            fscanf(fp,"%d",&data);
            if(data==1)
                insert(i,j);
        }
    }
    fclose(fp);
}
int visited[100]={0};
void bfs(int src)
{
    insertQueue(src);
    visited[src]=1;
    while(!isEmpty())
    {
        int u=deQueue();
        printf("%3c",u+'A');
        node *temp=head[u];
        while(temp!=NULL)
        {
            int v=temp->vertex;
            if(visited[v]==0)
            {
                insertQueue(v);
                visited[v]=1;
            }
            temp=temp->next;
        }
    }
}

int main()
{
    readGraph();
    displayList();
    bfs(0);
    return 0;
}
