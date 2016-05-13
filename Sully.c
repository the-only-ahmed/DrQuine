#include <stdio.h>
#include <string.h>

main() {
int i=5;
while(i>=0){
char file_name[80]="Sully_";
char n=48+i;
strncat(file_name, &n, 1);
strcat(file_name, ".c");
FILE *fp=fopen(file_name, "w+");
char *a = "#include <stdio.h>%c#include <string.h>%c%cmain() {%cint i=%d;%cwhile(i>=0){%cchar file_name[80]=%cSully_%c;%cchar n=48+i;%c";
char *b = "strncat(file_name, &n, 1);%cstrcat(file_name, %c.c%c);%cFILE *fp=fopen(file_name, %cw+%c);%cchar *a = %c%s%c;%cchar *b = %c%s%c;%c";
char *c = "char *c = %c%s%c;%cfprintf(fp, a, 10, 10, 10, 10, i, 10, 10, 34, 34, 10, 10);%cfprintf(fp, b, 10, 34, 34, 10, 34, 34, 10, 34, a, 34, 10, 34, b, 34, 10);%cfprintf(fp, c, 34, c, 34, 10, 10, 10, 10, 10, 10, 10);%ci--;%c}%c}%c";
fprintf(fp, a, 10, 10, 10, 10, i, 10, 10, 34, 34, 10, 10);
fprintf(fp, b, 10, 34, 34, 10, 34, 34, 10, 34, a, 34, 10, 34, b, 34, 10);
fprintf(fp, c, 34, c, 34, 10, 10, 10, 10, 10, 10, 10);
i--;
}
}
