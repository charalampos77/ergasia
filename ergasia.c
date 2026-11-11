#include <stdio.h> 

int main () {
	int x;
	int score;
	dias:
		score=0;
		printf ("posa paidia eixe o dias;\n");
		printf ("1)10\n2)30\n3)50\n4)100\n");
		scanf ("%d",&x);
		if  (x==4) {
		printf("correct\n");
		score++;
	    }
		else {
			printf ("wrong\n");
		}
	    
	    printf ("posa aderfia eixe o dias;\n");
		printf ("1)3\n2)5\n3)7\n4)10\n");
		scanf ("%d",&x);
		if  (x==2) {
		printf("correct\n");
		score++;
	    }
		else {
			printf ("wrong\n");
		}
		
		printf ("poia einai h mana tou dia;\n");
		printf ("1)rhea\n2)hra\n3)afroditi\n4)eleni\n");
		scanf ("%d",&x);
		if  (x==1) {
		printf("correct\n");
		score++;
	    }
		else {
			printf ("wrong\n");
	    }
		
	    printf ("pou menei o dia;\n");
		printf ("1)crhth\n2)parnitha\n3)olympo\n4)likabito\n");
		scanf ("%d",&x);
		if  (x==3) {
		printf("correct\n");
		score++;
	    }
		else {
			printf ("wrong\n");
	    }	
		
		 printf ("poio einai to oplo tou;\n");
		printf ("1)h triena\n2)o keraunos\n3)to spathi\n4)h aspida\n");
		scanf ("%d",&x);
		if  (x==2) {
		printf("correct\n");
		score++;
	    }
		else {
			printf ("wrong\n");
	    }
		
		
		
		if (score==5) {
			printf ("proxoras parakato\n");
		}
		else {
			printf ("try again\n");
			goto dias;
		}
		
		
		
		
		
		
		hra:
		score=0;
		printf ("poio zwo einai to sumvolo ths hras;\n");
		printf ("1)to pagwni\n2)to liontari\n3)to delphini\n4)h papia\n");
		scanf ("%d",&x);
		if  (x==1) {
		printf("correct\n");
		score++;
	    }
		else {
			printf ("wrong\n");
		}
	    
	    printf ("poios einai o suzugos ths hras;\n");
		printf ("1)o dias\n2)o poseidwnas\n3)o arhs\n4)o hraklhs\n");
		scanf ("%d",&x);
		if  (x==1) {
		printf("correct\n");
		score++;
	    }
		else {
			printf ("wrong\n");
		}
		
		printf ("ti esteile h hra sthn kounia tou hraklh;\n");
		printf ("1)dwra\n2)araxnes\n3)fidia\n4)poulia\n");
		scanf ("%d",&x);
		if  (x==3) {
		printf("correct\n");
		score++;
	    }
		else {
			printf ("wrong\n");
	    }
		
	    printf ("posa paidia eixe h hra me ton dia;\n");
		printf ("1)5\n2)3\n3)2\n4)kanena\n");
		scanf ("%d",&x);
		if  (x==2) {
		printf("correct\n");
		score++;
	    }
		else {
			printf ("wrong\n");
	    }	
		
		 printf ("ti xarakthrismo xrhsimopoiei o omhros gia thn hra;\n");
		printf ("1)h xrusoxera hra\n2)sebasmia hra\n3)kokkinoxera hra\n4)h asproxera hra\n");
		scanf ("%d",&x);
		if  (x==4) {
		printf("correct\n");
		score++;
	    }
		else {
			printf ("wrong\n");
	    }
		
		
		
		if (score==5) {
			printf ("proxoras parakato\n");
		}
		else {
			printf ("try again\n");
			goto hra;
		}
		
    return 0; 
}

 
