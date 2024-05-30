#include<stdio.h>
#include<malloc.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
	struct node *prev;
};


//*************************************************************
struct node *head=NULL;

//*************************************************************a
void ins_cll(int e);
void cldisp();
void del_cll(int e);
void ins_dll(int e);
void dldisp();
void del_dll(int e);
void ins_cdll(int el);
void cdlldisp();
void del_cdll(int el);
void menu_cll();
void menu_dll();
void menu_cdll();
void converttocll();
void converttodll();
void converttocdll();
void converttoll();
//***************************************************
void insert(int el){
	struct node *t;
	if(head==NULL){
		head=(struct node*)malloc(sizeof(struct node));
		head->data=el;
		head->next=NULL;
		head->prev=NULL;
	}else{
		t=head;
		while(t->next!=NULL){
			t=t->next;
		}
		t->next=(struct node*)malloc(sizeof(struct node));
		t->next->data=el;
		t->next->next=NULL;
		t->next->prev=t;
	}
}
void converttoll(){
	struct node *t;
	if(head!=NULL){
		
		t=head;
		while(t->next != NULL && t->next != head){
			t=t->next;
		}
	
		t->next=NULL;
		
	}
	}

void disp(){
	struct node *t;
	t=head;
	while(t!=NULL){
		printf("%d\t",t->data);
		t=t->next;
	}
}
//************************************CLL******************************************************************************
void menu_cll(){
	int ch=1,el;
	while(ch!=4){
		printf("\n************************* CIRCULAR LINKED LIST MAIN MENU ******************************************************** ");
		printf("\n 1-DISPLAYING THE CIRCULAR LINKED LIST ");
		printf("\n 2-INSERTING INTO CIRCULAR LINKED LIST ");
		printf("\n 3-DELETING FROM CIRCULAR LINKED LINKED LIST ");
		printf("\n 4-BACK TO MAIN MENU ");
		printf("\n Enter the options: ");
		scanf("%d",&ch);
	
		converttocll();
		
		switch(ch){
			case 1:
				cldisp();
				break;
			case 2:
				printf("\n enter the element to be inserted : ");
				scanf("%d",&el);
				ins_cll(el);
				break;
			case 3:
				printf("\n enter the element to be deleted : ");
				scanf("%d",&el);
				del_cll(el);
				break;
			case 4:
				ch=4;
				break;
	}
}}
void converttocll(){
	struct node *t;
	if(head!=NULL){
		
		t=head;
		while(t->next != NULL && t->next != head){
			t=t->next;
		}
	
		t->next=head;
		
	}
	}

void ins_cll(int e){
	struct node *t;
	if(head==NULL){
		head=(struct node*)malloc(sizeof(struct node));
		head->data=e;
		head->next=head;	
		head->prev=NULL;
		}else{
			t=head;
			while(t->next!=head){
				t=t->next;
			}
			t->next=(struct node*)malloc(sizeof(struct node));
			t->next->data=e;
			t->next->next=head;
			t->next->prev=NULL;
		}
}
void cldisp(){
	struct node *t;
	if(head==NULL){
		printf("\n circular linked list is empty !!!!!!!!!!!");
		
	}else{
		t=head;
		do{
			printf("%d",t->data);
			printf("\t->\t");
			t=t->next;
		}while(t!= head);
	}
}
void del_cll(int e){
	struct node *t;
	if(head==NULL){//case 1
		printf("\n the Circular linked list is mpty ");
	}else if(head->data==e && head->next==head){//case 2
		head=NULL;
		t=head;
		while(t->next!=head){
			t=t->next;
		}
		t->next=head->next;
		head=head->next;
	}else{
		t=head;
		while(t->next!=head && t->next->data!=e){
			t=t->next;
		}
		if(t->next==head  ){
			printf("\n element not found !!!!!!!!!!!!!!!");
		}else{
			t->next=t->next->next;
		}
	}
}
//*********************************************DLL*******************************************************************
void menu_dll(){
	int ch=1,el;

	while(ch!=4){
		printf("\n************************* DOUBLY LINKED LIST MAIN MENU ******************************************************** ");
		printf("\n 1-DISPLAYING THE DOUBLY LINKED LIST ");
		printf("\n 2-INSERTING INTO DOUBLY LINKED LIST ");
		printf("\n 3-DELETING FROM DOUBLY LINKED LINKED LIST ");
		printf("\n 4-BACK TO MAIN MENU ");
		printf("\n Enter the options: ");
		scanf("%d",&ch);
		//***********************************
		converttodll();
		//************************************
		switch(ch){
			case 1:
				dldisp();
				break;
			case 2:
				printf("\n enter the element to be inserted : ");
				scanf("%d",&el);
				ins_dll(el);
				break;
			case 3:
				printf("\n enter the element to be deleted : ");
				scanf("%d",&el);
				del_dll(el);
				break;
			case 4:
				ch=4;
				break;
	}
}}
void converttodll(){
	if(head!=NULL ){
		head->prev=NULL;
		struct node *t;
		t=head;
		while(t->next->next!=NULL && t->next->next!=head){
			t->next->prev=t;
			t=t->next;
		}
		t->next->prev=t;
		t->next->next=NULL;
		
	}
	}

void ins_dll(int e){
	struct node *t;
	if(head==NULL){
		head=(struct node *)malloc(sizeof(struct node));
		head->data=e;
		head->next=NULL;
		head->prev=NULL;
	}
	else{
		t=head;
		while(t->next!=NULL){
			t=t->next;
		}
		t->next=(struct node *)malloc(sizeof(struct node));
		t->next->data=e;
		t->next->next=NULL;
		t->next->prev=t;
	}
}
void dldisp(){
	struct node *t;
	t=head;
	
		while(t!=NULL){
			printf("%d",t->data);
			printf("\t<->\t");
			t=t->next;
			
		}
	
}

void del_dll(int e){
	struct node *t;
	if(head==NULL){
		printf("\n the doubly linked list is mpty ");
	}else if(head->data==e && head->next==NULL){
		head=NULL;
	}else if(head->data==e){
		
		head=head->next;
		head->prev=NULL;
		
	}else{
		t=head->next;
		while(t!=NULL && t->data!=e){
			t=t->next;
		}
		if(t==NULL){
			printf("\n element not found !!!!!!!!!!!!!!!");
		}else if(t->next==NULL){
			t->prev->next=NULL;
		}else{
			t->prev->next=t->next;
			t->next->prev=t->prev;
			
			
		}
	}
}
//*****************************************CDLL***************************************************************
void menu_cdll(){
	int ch=1,el;

	while(ch!=4){
		printf("\n************************* CIRCULAR DOUBLY LINKED LIST MAIN MENU ******************************************************** ");
		printf("\n 1-DISPLAYING THE  CIRCULAR DOUBLY LINKED LIST ");
		printf("\n 2-INSERTING INTO  CIRCULAR DOUBLY LINKED LIST ");
		printf("\n 3-DELETING FROM CIRCULAR DOUBLY LINKED LINKED LIST ");
		printf("\n 4-BACK TO MAIN MENU ");
		printf("\n Enter the options: ");
		scanf("%d",&ch);
		//***********************************
		 converttocdll();
		//************************************
		switch(ch){
			case 1:
				cdlldisp();
				break;
			case 2:
				printf("\n enter the element to be inserted : ");
				scanf("%d",&el);
				ins_cdll(el);
				break;
			case 3:
				printf("\n enter the element to be deleted : ");
				scanf("%d",&el);
				del_cdll(el);
				break;
			case 4:
				ch=4;
				break;
	}
}}
void converttocdll() {
    struct node *t;
    if (head != NULL) {
        t = head;
        while (t->next != head && t->next != NULL) {
            t->next->prev = t;
            t = t->next;
        }
        head->prev = t;
        t->next = head;
    }
}

void ins_cdll( int el){
	struct node *t;
	if(head==NULL){
		head=(struct node *)malloc(sizeof(struct node));
		head->data=el;
		head->next=head;
		head->prev=head;
	}else{
		t=head;
		while(t->next!=head){
			t=t->next;
		}
		t->next=(struct node *)malloc(sizeof(struct node));
		t->next->data=el;
		t->next->next=head;
		t->next->prev=t;
		head->prev=t->next;
	}
	
}
void cdlldisp(){
	struct node *t;
	t=head;
	if(head==NULL){
		printf("\n EMPTY CIRCULAR DOUBLY LINKED LIST !!!!!!!!!!!!");
	}else{
		do{
			printf("%d\t",t->data);
			printf("<->\t");
			t=t->next;
		}while(t!=head);
	}
}
void del_cdll( int el){
	struct node *t;
	if(head==NULL){
		printf("\n the circular doubly linked list is empty !!!!!!!!!!!!!!!!!!");
	}
	else if(head->data==el && head->next==head){
		head->prev->next=head->next;
		head->next->prev=head->prev;
		head=head->next;
	}else{
		t=head->next;
		while(t!=head && t->data!=el){
			t=t->next;
		}
		if(t==head){
			printf("\n element not found !!!!");
		}else{
			t->prev->next=t->next;
			t->next->prev=t->prev;
		}
	}
}

//************************************************************************************************************************************
void main(){
	int ch=1,el;
	printf("********************************************************************************************");
	do{
		printf("\n\tInsert the  element ");
		scanf("%d",&el);
		insert(el);
	
		printf("\n do you want to continue 1 for yes and 0 for no:");
		scanf("%d",&ch);
	}while(ch==1);
	while(ch!=5){
		printf("\n*************************MAIN MENU ******************************************************** ");
		printf("\n 1-DISPLAYING THE LINKED LIST ");
		printf("\n 2-CIRCULAR LINKED LIST ");
		printf("\n 3-DOUBLY LINKED LIST ");
		printf("\n 4-CIRCULAR DOUBLY LINKED LIST ");
		printf("\n 5-EXIT ");
		printf("\n Enter the options: ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				converttoll();
				disp();
				break;
			case 2:
				menu_cll();
				break;
			case 3:
				menu_dll();
				break;
			case 4:
				menu_cdll();
				break;
			
			case 5:
				ch=5;
				break;
			default:
				printf("\n enter a number between 1 and 6 !!!!!!!!!!!!!!!!!!");
				break;
				
				
		}
	}
}


