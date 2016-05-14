#include <stdio.h>
/*
	ahmed
*/
#define anfang(fp) char *a="#include <stdio.h>%c/*%c%cahmed%c*/%c#define anfang(fp) char *a=%c%s%c;fprintf(fp, a, 10, 10, 9, 10, 10, 34, a, 34);";fprintf(fp, a, 10, 10, 9, 10, 10, 34, a, 34);
#define mittle(fp) char *b="%c#define mittle(fp) char *b=%c%s%c;fprintf(fp, b, 10, 34, b, 34, 10);%c#define ahmed() int main() {";fprintf(fp, b, 10, 34, b, 34, 10);
#define ahmed() int main() {FILE *fp=fopen("Grace_kid.c","w+");anfang(fp);mittle(fp);char *c="FILE *fp=fopen(%cGrace_kid.c%c,%cw+%c);anfang(fp);mittle(fp);char *c=%c%s%c;fprintf(fp, c, 34, 34, 34, 34, 34, c, 34, 10, 10);fclose(fp);return 0;}%cahmed()%c";fprintf(fp, c, 34, 34, 34, 34, 34, c, 34, 10, 10);fclose(fp);return 0;}
ahmed()
