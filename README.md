# POC_Chap5_4
Write a set of functions that implement an array of bits. The functions should have
the following prototypes:
void set_bit( char bit_array[],unsigned bit_number );
void clear_bit( char bit_array[],unsigned bit_number );
void assign_bit( char bit_array[],unsigned bit_number, int value );
int test_bit( char bit_array[], unsigned bit_numlber );
The first argument in each of these functions is a character array in which the bits
are actually stored. The second argument identifies the bit to be accessed; it is up
to the caller to ensure that this value is not too large for the array being used.
The first function sets the specified bit to one, and the second clears it. The third
function sets the bit to zero if the value is zero, otherwise it sets the bit to one. The
last function returns true if the specified bit is nonzero, else false.
