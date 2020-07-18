  #include <stdio.h>
  #include <stdlib.h>

  struct node {
        int data;
        struct node *prev, *next;
  };

  struct node *head = NULL, *tail = NULL;

  struct node * createNode(int data) {
        struct node *newnode = (struct node *)malloc(sizeof (struct node));
        newnode->data = data;
        newnode->next = newnode->prev = NULL;
        return (newnode);
  }
  void createDeque();
  void enqueueAtFront(int data);
  void enqueueAtRear(int data);
  void dequeueAtFront();
  void dequeueAtRear() ;
  void Size_of_Deque();
  void isEmpty();
  void display() ;
 int main() {
        int data, ch;
        createDeque();
        while (1) {

                printf("1. Puse at front\n2. Puse at rear\n");
                printf("3. Pop at front\n4. Pop at rear\n");
                printf("5. Size of Deque\n6. isEmpty of Not \n");
                printf("7. Display\n8. Exit\n");
                printf("Enter your choice:");
                scanf("%d", &ch);
                if(ch<=0||ch>8)
                {
                    printf("Invalid Input . Insert between 1 to 8 \n");
                }
                switch (ch) {
                        case 1:
                                printf("Enter the data to insert:");
                                scanf("%d", &data);
                                enqueueAtFront(data);
                                break;

                        case 2:
                                printf("Enter ur data to insert:");
                                scanf("%d", &data);
                                enqueueAtRear(data);
                                break;

                        case 3:
                                dequeueAtFront();
                                break;

                        case 4:
                                dequeueAtRear();
                                break;

                        case 5:
                                Size_of_Deque();
                                break;

                         case 6:
                                isEmpty();
                                break;

                        case 7:
                                display();
                                break;


                        case 8:
                                exit(0);

                        default:
                                printf("Pls. enter correct option\n");
                                break;
                }

        }system("cls");

        return 0;
  }

  void createDeque() {
        head = createNode(0);
        tail = createNode(0);
        head->next = tail;
        tail->prev = head;
  }

  /* insertion at the front of the queue */
  void enqueueAtFront(int data) {
        struct node *newnode, *temp;
        newnode = createNode(data);
        temp = head->next;
        head->next = newnode;
        newnode->prev = head;
        newnode->next = temp;
        temp->prev = newnode;
  }

  /*insertion at the rear of the queue */
  void enqueueAtRear(int data) {
        struct node *newnode, *temp;
        newnode = createNode(data);
        temp = tail->prev;
        tail->prev = newnode;
        newnode->next = tail;
        newnode->prev = temp;
        temp->next = newnode;
  }

  /* deletion at the front of the queue */
  void dequeueAtFront() {
        struct node *temp;
        if (head->next == tail) {
                printf("Queue is empty\n");
        } else {
                temp = head->next;
                head->next = temp->next;
                temp->next->prev = head;
                free(temp);
        }
        return;
  }


  /* deletion at the rear of the queue */

  void dequeueAtRear()  {
        struct node *temp;
        if (tail->prev == head) {
                printf("Queue is empty\n");
        } else {
                temp = tail->prev;
                tail->prev = temp->prev;
                temp->prev->next = tail;
                free(temp);
        }
        return;
  }
    /* This deque isEmpty or Not*/
   void isEmpty() {
        struct node *temp;

        if (head->next == tail) {
                printf("Queue is empty\n");
                return;
        }else{
          printf("Queue is Not empty\n");
        }
   }
    /* Fine the Size of this deque */
   void  Size_of_Deque() {
        struct node *temp;
        int Count=0;
        if (head->next == tail) {
                printf("Queue is empty\n");
                return;
        }

        temp = head->next;
        while (temp != tail) {
                Count++;
                temp = temp->next;
        }
        printf("Size of this Queue : %d\n",Count);

  }

  /* display elements present in the queue */
  void display() {
        struct node *temp;

        if (head->next == tail) {
                printf("Queue is empty\n");
                return;
        }

        temp = head->next;
        while (temp != tail) {
                printf("%-3d", temp->data);
                temp = temp->next;
        }
        printf("\n");
  }





