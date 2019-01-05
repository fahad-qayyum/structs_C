#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct studentRecord {

	char name[100];
	int mid;
	int exam;
	struct studentRecord *ptr;

} record;

int hash(int hash, char name[61])
{
	int sum = 0;
	int i = 0;
	for(i = 0; i < (*name != '\n'); name++)
	{
		sum = sum + (int)name[i];
	}
	return (sum % hash);

}




int main() {

char s[4];
int k;
int i;
char name[100];
char midterms[10];
char exams[10];
int midterm;
int exam;
int hashCode;

record *prev, *curr, *list;

FILE *file = fopen("records.txt", "r");
fgets(s, sizeof(s), stdin);
sscanf(s, "%d", &k);

if (k >= 1) {



while(1) {
	fgets(name, sizeof(name), file);
	if (feof(file))
	{break;}
	hashCode = hash(k, name);
	fgets (midterms, sizeof(midterms), file);
	sscanf(midterms, "%d", &midterm);
	fgets (exams, sizeof(exams), file);
	sscanf(exams, "%d", &exam);
	printf("%s %d", name, hashCode);
	printf("%d %d\n", midterm, exam);

	list = (record * ) malloc(k*sizeof(record));



	curr->mid = midterm;
	//SEGMENTATION FAULT HERE
	curr->exam = exam;

	strcpy(curr->name, name);

	curr->ptr = NULL;

	for (curr = list[hashCode].ptr; curr != NULL; curr = curr->ptr){

				prev = curr;
			}
	if (list[hashCode].ptr == NULL){
		list[hashCode].ptr = curr;
	} else {
		prev->ptr = curr;
		}



}

}



return 0;
}
