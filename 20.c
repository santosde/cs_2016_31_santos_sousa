+#include "stdio.h"
+#include "conio.h"
+#include "string.h"
+
+char *Encrypt(char msg[256], int n);
+char *Decrypt(char msg[256], int n);
+void stop(void);
+
+void main() {
+  char msg[256];
+  int n;
+  while (1) {
+    clrscr();
+    printf("Enter a text, (FIM) to finish:\n");
+   fflush(stdin); 
+    gets(msg);
+    if (strcmp(msg, "FIM") == 0)
+       break;
+    printf("Enter the order of the digit:\n");
+    scanf("%d", &n);
+
+    char *Encrypted = encrypted(msg, n);
+    printf("\nEncrypted Message = %s", Coded);
+
+    char *Normal = decrypt(coded, n);
+    printf("\nEncrypted Message = %s", normal);
+    stop();
+  }
+}
+char * encrypt(char msg[256], int n) {
+ for (int i=0; i<strlen(msg); i++)
+    msg[i] = msg[i] + n;
+
+  return(msg);
+}
+
+char *decrypt(char msg[256], int n) {
+  for (int i=0; i<strlen(msg); i++)
+    msg[i] = msg[i] - n;
+
+  return(msg);
+  }
+
+void stop(void) {
+  gotoxy(01, 24);
+  printf("Press [something] to continue.");
+  getch();
+}
