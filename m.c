#include "bigmathlib.h"

void AskInputI(char *prompt, int *in);
void AskInputS(char *prompt, char *in);

//	CONSTRUCT/DESTRUCTOR
void construct (void) __attribute__((constructor));
void destruct (void) __attribute__((destructor));

int main(){
	int from, to;
	char scomp[EXPRLENGTH];
	char wtd[50];
	AskInputS("What?\t", &wtd);
	
	if(strcasecmp(wtd, "poisson")){
		AskInputI("\ni = ", &i);
		AskInputI("\na = ", &a);
		printf("%d", Poisson(i, a));
	}
	else if(strcasecmp(wtd, "calc")){
		AskInputS("Enter equation: ", scomp);
		//comp dcomp = strtocomp(scomp);
		AskInputI("From: ", &from);
		AskInputI("To: ", &to);
		
		//comp outcomp = integrate(from, to, dcomp);
		//printSumaExpr(from, to, dcomp, outcomp);
	}
	
}

void AskInputI(char *prompt, int *in)
{
	fprintf(stdout, "%s", prompt); fflush( stdout );
	scanf("%d", in);
}
void AskInputS(char *prompt, char *in)
{
	fprintf(stdout, "%s", prompt); fflush( stdout );
	scanf("%s", in);
}

void construct(void)
{
	printf("\n\nBooting Up!\n\n");
}
void destruct(void)
{
	printf("\n\nBye Bye!\n\n");
}