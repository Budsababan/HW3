#include<stdio.h>
int main ()
{
	int select,Number1,Number2,Number3,score,Plus,Number,x;
	
	printf("Please select your case (1 2 3 4 5) :");
	scanf("%d",&select);
	
	switch(select){
		case 1:
			printf("Enter your Number1 :");
			scanf("%d",&Number1);
			printf("Enter your Number2 :");
			scanf("%d",&Number2);
			printf("Enter your Number3 :");
			scanf("%d",&Number3);
			
				if(Number1>Number2 && Number2>Number3){
					printf("Max = %d| Min = %d",Number1,Number3);
        		}
				else if(Number1>Number3 && Number3>Number2){
					printf("Max = %d| Min = %d",Number1,Number2);
				}
				else if(Number2>Number1 && Number1>Number3){
					printf("Max =%d| Min =%d",Number2,Number3);
				}
				else if(Number2>Number3 && Number3>Number1){
					printf("Max =%d| Min =%d",Number2,Number1);
				}
				else if(Number3>Number1 && Number1>Number2){
					printf("Max =%d| Min =%d",Number3,Number2);
				}
				else if(Number3>Number2 && Number2>Number1){
					printf("Max =%d| Min =%d",Number3,Number1);
				}
				else if(Number1==2 && Number2==3){
					printf("Max =%d| Min =%d",Number1,Number3);
				}
				break;
		
		case 2:
		printf("Enter your score :");
		scanf("%d",&score);
			if(score>=80 && score<=100){
				printf("Grade A!!\n");
			}
			else if(score>=75 && score<80){
				printf("Grade B+\n");
			}
			else if(score>=70 && score<75){
				printf("Grade B\n");
			}
			else if(score>=65 && score<70){
				printf("Grade C+\n");
			}
			else if(score>=60 && score<65){
				printf("Grade C\n");
			}
			else if(score>=55 && score<60){
				printf("Grade D+\n");
			}
			else if(score>=50 && score<55){
				printf("Grade D\n");
			}
			else if(score>=0 && score<50){
				printf("Grade F!!\n");
			}	
			else{
				printf("Grade Error");
			}
			break;
			
		case 3:
			printf("Enter your Number1 :");
			scanf("%d",&Number1);
			printf("Enter your Number2 :");
			scanf("%d",&Number2);
			
			printf("Plus = %d",Number1+Number2);
		break;
		case 4:
			printf("Enter your Number :");
			scanf("%d",&Number);
			for(x=1;x<=12;x++)
			{
				printf("\n%d * %d = %d",Number,x,Number*x);
			}
			break;		
	}
	return 0;
}

