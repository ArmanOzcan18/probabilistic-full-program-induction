extern void __VERIFIER_error() __attribute__ ((__noreturn__));
extern void __VERIFIER_assume(int);
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }
extern int __VERIFIER_nondet_int(void);
int N;
int main ( )
{
N = __VERIFIER_nondet_int();
int i;
int a_0 [N];
int b_0 [N];
for ( i = 0 ; i < N ; i++ )
{
a_0[i] = 42;
}
for ( i = 0 ; i < N ; i++ )
{
b_0[i] = a_0[i];
}
int a_1 [N];
int b_1 [N];
for ( i = 0 ; i < N ; i++ )
{
a_1[i] = 42;
}
for ( i = 0 ; i < N ; i++ )
{
b_1[i] = a_1[i];
}
for( i = 0 ; i < N ; i++ )
{
b_1[i] = b_1[i] + i;
}
for ( i = 0 ; i < N ; i++ )
{
__VERIFIER_assert(b_0[i] == 126+2*i - 2 * b_1[i]);
}
return 0;
}
