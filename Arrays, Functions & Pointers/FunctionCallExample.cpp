  # include <stdio.h> 
int  i = 0 ; 
void val( ) ; 
int main( ) 
{ 
printf ( "main's i = %d\n", i ) ; 
i++ ; 
val( ) ; 
printf ( "main's i = %d\n", i ) ; 
val( ) ; 
return 0 ; 
} 
void val( ) 
{ 
i = 100 ; 
printf ( "val's i = %d\n", i ) ; 
i++ ; 
} 
