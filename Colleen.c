#include <stdio.h>

/*
	ahmed
*/

void vide() {
/*
	fonction vide
*/
}

int main() {
char n = 10;
char *a = "#include <stdio.h>%c%c/*%c%cahmed%c*/%c%cvoid vide() {%c/*%c%cfonction vide%c*/%c}%c%cint main() {%cchar n = 10;%cchar *a = %c%s%c;%c";
char *b = "char *b = %c%s%c;%cprintf(a, n, n, 10, 9, 10, n, n, n, 10, 9, 10, n, n, n, n, n, 34, a, 34, n);%cprintf(b, 34, b, 34, n, n, n, n, n);%creturn 0;%c}%c";
printf(a, n, n, 10, 9, 10, n, n, n, 10, 9, 10, n, n, n, n, n, 34, a, 34, n);
printf(b, 34, b, 34, n, n, n, n, n);
return 0;
}
