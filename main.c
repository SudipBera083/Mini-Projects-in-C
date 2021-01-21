
#include<stdio.h>

int nob=0,nor=0,noc=0,count=0,amount=0;

int menue();

int details();

void deletes();

void rikshaw();

void bus();

void cycle();

int main()

{

 while(1)
 
 

{
	
	switch(menue())
	
	{
		case 1:
		
			bus();
			
			break;
			
		case 2:
		
			rikshaw();
			
			break;
			
		case 3:
		
			cycle();
			
			break;
			
		case 4:
		
			details();
			
			break;
			
		case 5:
		
			deletes();
			
			break;
			
		case 6:
		
			return 0;
			
		default:
		
			printf("Invalid input\n");
			
	}
	
}

	
}

int details()

{
	printf("Number of Bus: %d\n",nob);
	
        printf("Number of Rikshaw: %d\n",nor);
		
	printf("Number of Cycle: %d\n",noc);
			
	printf("Total amount: %d\n",amount);
				
	printf("Total number of Vehicales: %d\n",count);
					
					
	
}


int menue()

{


	int ch;
	
	printf("1.Entry the bus\n2.Entry the Rikshaw\n3.Entry the Cycle\n4.See your status\n5.Delete the whole data\n6.Exit");
	
	printf("\nEnter your choice:\n");
	
	scanf("%d",&ch);
	
	return ch;
	
}

void deletes()

{
	nob=0;
	
	nor=0;
	
	noc=0;
	
	count=0;
	
	amount=0;
	
	
	
}

void rikshaw()

{
	nor++;
	
	count++;
	
	amount=amount+50;
	
printf("Data entered successfully\n");	

}


void bus()

{

	nob++;
	
	count++;
	
	amount=amount+100;
	
printf("Data entered successfully\n");

	
	
}


void cycle()

{

	noc++;
	
	count++;
	
	amount=amount+20;
	
printf("Data entered successfully\n");

	
}
