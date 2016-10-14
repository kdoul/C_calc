#include <stdio.h>       
#include <math.h>                    
/* Edoles pros ton proepeksergasti na fortwsei ta adoistixa header arxeia */

char input ;     /* dilwsi tis input prin apo tin main kai enarksi aftis */

int main()
{
    printf ( "Welcome to Kostantinos` Douloudis calculator.\n" );
    prompt (); 
    
    while ( ( input = getchar() ) != 'e' ) {               /* Xrhsi tou while gia tin dimiourgia vronxoou */
    switch ( input ){                                     /* Xrhsi tis switch adi pollaplwn if gia tin  */
    	case '+' :                                       /* dimiourgia twn diaforwn epilogwn */
    		addition ();
    	break ;
    	case '-':
    		subtraction ();
    	break ;
    	case '/' :
    		division ();
    	break ;
    	case '*' :
    		multiplication ();
    	break ;
    	case '^' :
    		power ();
    	break ;
    	case '<' :
    		min ();
    	break ;
    	case '>' :
    		max ();
    	break ;
    	case '?' :
    		help ();
    	break ;
		case ' ' : case '\t' :		
    	break ;
		case '\n':
    		prompt ();
    	break ;	
    	default :
    		printf ("\n\aInvalid input.Please try again. \a " );     /* Se periptwsi pou o xristis dn eisagei kapoia apodekti */
    	break ;                                                      /* enallaktikh tote to programma ton proeidopoiei */
}
    
}
    printf ( " \nSee ya!\n" );
    printf ( "Press any key to continue...");
	getchar ();
	getchar ();
	return 0;
}   

int a, b, counter = 0 ;                                /* Orismos twn metavlitwn gia tis parakatw sinartiseis */

addition () {                                                            /* Prosthesi */
	printf ( "\nGive me 2 integers and I will add them:\n\a" );
	scanf ( "%d", &a );
	scanf ( "%d", &b );
	printf ( "\nThe sum is: %d\n", a + b);
	printf ( "Press any key to continue...");
	getchar ();
}	        
 
subtraction () {                                                         /* Afairesh */
	printf ( "\nGive me 2 integers and I will subtract the first from the second:\n\a" );
	scanf ( "%d", &a );
	scanf ( "%d", &b );
	printf ( "\nThe difference is: %d\n", a - b);
    printf ( "Press any key to continue...");
	getchar ();
}   

multiplication () {                                                     /* Pollaplasiasmos */
	printf ( "\nGive me 2 integers and I will multiply them:\n\a" );
	scanf ( "%d", &a );
	scanf ( "%d", &b );
	printf ( "\nThe product is: %d\n", a * b);
    printf ( "Press any key to continue...");
	getchar ();
}

division () {                                                          /* Diairesi */
    printf ( "\nGive me 2 integers and I will divide them(first the divident and then the divisor):\n\a" );
	scanf ( "%d", &a );
	scanf ( "%d", &b );
	while ( ( b == 0 ) && ( counter < 5 ) )  {
		printf ( "\nYou cannot divide by zero, please try again.\a\n" );             /* Proeidopoihsi gia diairesi me to miden */
		system ( "pause" );
		printf ( "\nGive me 2 integers and I will divide them(first the divident and then the divisor):\n\a" );
		scanf ( "%d", &a );
		scanf ( "%d", &b ); 
		counter ++ ;
		}
	if ( b == 0 ) {
		printf ( "\nYou cannot divide by zero.\n" );  
		printf ( "\aTried over 5 times. Division calculator will now exit.\n\a") ;  /* Gia apofigi atermonou vronxou */
		printf ( "Press any key to continue...");
		getchar ();                                                                                /* se 5 lathos eisagwges h diairesi termatizetai*/
	}
	else{	
	printf ( "\nThe quotient is: %d\n", a / b);
	printf ( "The remainder is: %d\n" , a % b);
	printf ( "Press any key to continue...");
	getchar ();
	}
}

max () {                                                 /* Megisto */
	printf ( "\nGive me 2 integers and I will tell you which is larger \n\a");
	scanf ( "%d", &a );
	scanf ( "%d", &b );
	if ( a > b )
		printf ( "The larger number is: %d\n", a );
	else 
		printf ( "The larger number is: %d\n", b );
    printf ( "Press any key to continue...");
	getchar ();	
}

min () {                                                  /* Elaxisto */
	printf ( "\nGive me 2 integers and I will tell you which is smaller \n\a");
	scanf ( "%d", &a );
	scanf ( "%d", &b );
	if ( a < b )
		printf ( "The smaller number is: %d\n", a );
	else 
		printf ( "The smaller number is: %d\n", b );
    printf ( "Press any key to continue...");
	getchar ();	
}

power () {                                                                       /*Dinami*/
	double x, y;
	printf ( "\n Give me 2 integers and I will tell you the result of the operation : a^b (a first then b)\n\a"  );
	scanf ( "%lf", &x );
	scanf ( "%lf", &y );
	while ( ( x == 0 ) && (y < 0) && ( counter < 5)) {
		printf ( "\aYou cannot divide by zero (0^-x = 1/0^x). Please try again. \n\a" ) ;            /* Se periptwsi eisagwgis dinamis tou tipou 0 ^-x to programma */
		printf ( "\n Give me 2 integers and I will the result of the operation : a^b (a first then b)\n"  );  /* eidopoiei ton xristi gia tin apofigi */
		scanf ( "%lf", &x );                                                                             /* lanthasmenou apotelesmatos */
		scanf ( "%lf", &y );
		counter ++ ;		
    }
    if ( ( x == 0 ) && (y < 0) ) {
    	printf ( "\aYou cannot divide by zero (0^-x = 1/0^x) \n\a" ) ;  
		printf ( "Tried over 5 times. Power calculator will now exit.\n" );             /* Gia tin apofigi atermonou vronxou */
		printf ( "Press any key to continue...");
		getchar ();   	
    }
	else{
	printf ( "The result is %.0lf\n",  pow( x, y) );
    printf ( "Press any key to continue...");
	getchar ();	
    }
}

prompt () {                                                                        /* To keimeno pou parousiazei tis epiloges */
	printf ( "\nInsert:\n +, for addition \n -, for subtraction \n *, ");          /* brisketai se ksexwristi sinartisi */
    printf ( "for multiplication \n /, for division \n ^, to calculate power \n >, ");   
    printf ( "to display the max of the numbers given \n <, to display the min of the numbers given \n ?, for more info ");
    printf ( "\n or e to exit this program. \n");
}

help () {                                                                         /*Perissoteres plirofories gia to programma */
	printf ( "\n This is a simple calculator which\n prompts the user to select an operation.\n" );
	printf ( " After that the program asks the user to enter\n 2 integers " );
	printf ( "to perform the selected operation.\n" );
	printf ( " Special note: Division and power calculators\n have a built-in counter to avoid infinite loops\n (because of false input).\n" ) ;
    printf ( " After 5 false tries the calculators will automatically\n shut down and the program will return to the main menu.\n");
    printf ( "Press any key to continue...");
	getchar ();
}
