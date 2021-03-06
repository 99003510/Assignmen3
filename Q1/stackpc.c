#include<pthread.h>
#include<semaphore.h>
#include<stdio.h>

int max_stack = 8;       
int stack_operation[8];     
int top = -1;  

int peek() {
    return stack_operation[top];
    }

int ifemptyStack() {

   if(top == -1)
      return 1;
   else
      return 0;
}
   
int iffullStack() {

   if(top == max_stack)
      return 1;
   else
      return 0;
}




int pop() {
   int data;
	
   if(!ifemptyStack()) {
      data = stack_operation[top];
      top = top - 1;   
      return data;
   } else {
      printf("Abheee!!! Stack is empty.\n");
   }
}

int push(int data) {

   if(!iffullStack()) {
      top = top + 1;   
      stack_operation[top] = data;
   } else {
      printf("Arrreee yaaaar, Stack is full.\n");
   }
}

pthread_mutex_t m1=PTHREAD_MUTEX_INITIALIZER;
sem_t s1;

void* PushFunc(void* pv)		//PRODICER SIDE PUSH OPERATION
{
	int i;
	
	printf(" Push operation of 1,3,6\n");
	pthread_mutex_lock(&m1);
	
	push(1);
	push(3);
	push(6);
	
	
	
	pthread_mutex_unlock(&m1);
	sem_post(&s1);
	pthread_exit(NULL);
}
void* PopFunc(void* pv)		//CONSUMER SIDE POP OPERATON
{
	int i;
	printf(" Pop Operation of only 3,6 and 1 is remaining\n");
	sem_wait(&s1);			
	pthread_mutex_lock(&m1);
	
	pop();
	pop();
    pop();
	
	
	
	pthread_mutex_unlock(&m1);
	pthread_exit(NULL);
}
int main()
{
    printf("starts\n");
	pthread_t pt1,pt2;	
	sem_init(&s1,0,0);
	pthread_create(&pt1,NULL,PushFunc,NULL);
	pthread_create(&pt2,NULL,PopFunc,NULL);
	pthread_join(pt1,NULL);
	pthread_join(pt2,NULL);
	printf("Top of the Stack is %d\n" ,peek());
	printf("Is it Full stack: %s\n" , iffullStack()?"Yes":"No");
   	printf("Is it    Empty stack: %s\n" , ifemptyStack()?"Yes":"No");
	sem_destroy(&s1);
	pthread_mutex_destroy(&m1);
	printf("CODE DONE WELL!!\n");
	return 0;
}
