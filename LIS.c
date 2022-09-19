int n;
int Sequence[32];
int L[32];
void takeInput() {
 scanf("%d", &n);
 printf("\n");
 printf("The sequence number is= %d",n);

 for( int i = 0; i < n; i++ )
 scanf("%d", &Sequence[i]);

}
int LIS() {
 int i, j;

 for( i = 0; i < n; i++ )
 L[i] = 1;

 for( i = 0; i < n; i++ ) {

 for( j = i + 1; j < n; j++ ) {

 if( Sequence[j] > Sequence[i] ) {



 if( L[j] < L[i] + 1 )
 L[j] = L[i] + 1;
 }
 }
 }

 int maxLength = 0;
 for( i = 0; i < n; i++ ) {
 if( maxLength < L[i] )
 maxLength = L[i];
 }

 return maxLength;
}
int main() {
 takeInput();
 int result = LIS();
  printf("\n\n");
 printf("The LIS length is= %d\n", result);


 return 0;
}
