#include <stdio.h> 
void writeContentToFile(const char *path) { 
FILE *fp = fopen(path, "w"); 
if (fp == NULL) { 
printf("Error: Cannot create the file.\n"); 
return; 
} 
char buffer[1000]; 
printf("Enter text to write into the file:\n"); 
fgets(buffer, sizeof(buffer), stdin); 
fputs(buffer, fp); 
fclose(fp); 
printf("Data written successfully.\n"); 
} 
void appendContentToFile(const char *path) { 
FILE *fp = fopen(path, "a"); 
if (fp == NULL) { 
printf("Error: Cannot open file for appending.\n"); 
return; 
} 
char buffer[1000]; 
printf("Enter text to append:\n"); 
fgets(buffer, sizeof(buffer), stdin); 
fputs(buffer, fp); 
fclose(fp); 
printf("Data appended to file successfully.\n"); 
} 
void readFileContent(const char *path) { 
FILE *fp = fopen(path, "r"); 
if (fp == NULL) { 
printf("Error: File does not exist or cannot be opened.\n"); 
return; 
} 
printf("\n--- File Contents ---\n"); 
char ch; 
while ((ch = fgetc(fp)) != EOF) { 
putchar(ch); 
} 
fclose(fp); 
} 
int main() { 
char filename[100]; 
int choice; 
printf("Please enter the file name you want to work with: "); 
scanf("%s", filename); 
getchar(); 
while (1) { 
printf("\nMenu:\n"); 
printf("[1] Write to file\n[2] Append to file\n[3] Read from file\n[4] Exit\nSelect an option: "); 
if (scanf("%d", &choice) != 1) { 
printf("Invalid input. Exiting.\n"); 
break; 
} 
getchar(); 
switch (choice) { 
case 1: 
writeContentToFile(filename); 
break; 
case 2: 
appendContentToFile(filename); 
break; 
case 3: 
readFileContent(filename); 
break; 
case 4: 
printf("Exiting the application.\n"); 
return 0; 
default: 
printf("Invalid selection. Try again.\n"); 
} 
} 
return 0; 
} 
