#include <stdio.h> 

int main () {
	int x;
	int score;
	
	
	dias:
		score=0;
		printf ("Ποιο είναι το κύριο όπλο του Δία;\n");
		printf ("1) Η τρίαινα\n2) Ο κεραυνός\n3) Το τόξο\n4) Το δόρυ\n");  // (Σωστή απάντηση: Ο κεραυνός)
		scanf ("%d",&x);
		if  (x==2) {
		printf("Σωστή απάντηση\n");
		score++;
	    }
		else {
			printf ("Λάθος απάντηση\n");
		}
	    
	    printf ("Ποιο είναι το ιερό πουλί του Δία;\n");
		printf ("1) Η κουκουβάγια\n2) Το παγώνι\n3) Ο αετός\n4) Το περιστέρι\n");  // (Σωστή απάντηση: Ο αετός) 
		scanf ("%d",&x);
		if  (x==3) {
		printf("Σωστή απάντηση\n");
		score++;
	    }
		else {
			printf ("Λάθος απάντηση\n");
		}
		
		printf ("Ποιος ήταν ο πατέρας του Δία;\n");
		printf ("1) Ο Ουρανός\n2) Ο Κρόνος\n3) Ο Άτλαντας\n4) Ο Προμηθέας\n");  // (Σωστή απάντηση: Ο Κρόνος)
		scanf ("%d",&x);
		if  (x==2) {
		printf("Σωστή απάντηση\n");
		score++;
	    }
		else {
			printf ("Λάθος απάντηση\n");
	    }
		
	    printf ("Ποια ήταν η νόμιμη σύζυγος του Δία;\n");
		printf ("1) Η Δήμητρα\n2) Η Αθηνά\n3) Η Ήρα\n4) Η Αφροδήτη\n");  // (Σωστή απάντηση: Η Ήρα)
		scanf ("%d",&x);
		if  (x==3) {
		printf("Σωστή απάντηση\n");
		score++;
	    }
		else {
			printf ("Λάθος απάντηση\n");
	    }	
		
		printf ("Ποιο δέντρο ήταν αφιερωμένο στον Δία;\n");
		printf ("1) Η ελιά\n2) Η δάφνη\n3) Η βελανιδιά\n4) Το κυπαρίσσι\n");  // (Σωστή απάντηση: Η βελανιδιά)
		scanf ("%d",&x);
		if  (x==3) {
		printf("Σωστή απάντηση\n");
		score++;
	    }
		else {
			printf ("Λάθος απάντηση\n");
	    }
		
		
		
		if (score==5) {
			printf ("Επόμενος θεός\n");
		}
		else {
			printf ("Ξανά προσπάθησε\n");
			goto dias;
		}
		
		
		
		
		
	hra:
		score=0;
		printf ("poio zwo einai to sumvolo ths hras;\n");
		printf ("1) to pagwni\n2) to liontari\n3) to delphini\n4) h papia\n");
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

 
