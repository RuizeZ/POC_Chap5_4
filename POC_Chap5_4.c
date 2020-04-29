/*
RuizeZ
4/28/2020
Write a set of functions that implement an array of bits.ȱȱThe functions should have
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
*/
#include <stdio.h>
#include <string.h>
void set_bit( char bit_array[], unsigned bit_number );
void clear_bit( char bit_array[], unsigned bit_number );
void assign_bit( char bit_array[], unsigned bit_number, int value );
int test_bit( char bit_array[], unsigned bit_number );
int main(void){
    char bit_array[100];
    unsigned bit_number;
    int value;
    int answer;
    printf("Inter the bits: ");
    fgets(bit_array,100,stdin);
    do{
        printf("Which bit do you want to access: ");
        scanf("%d",&bit_number);
        if(bit_number>strlen(bit_array)){
            printf("Invilid position\n");
        }
        else
        {
            set_bit(bit_array, bit_number);
            printf("After set the bits are %s",bit_array);
            clear_bit(bit_array, bit_number);
            printf("After clear the bits are %s",bit_array);
            break;
        }
    }while (1);

    do{
        printf("Which bit do you want to access: ");
        scanf("%d",&bit_number);
        if(bit_number>strlen(bit_array)){
            printf("Invilid position\n");
        }
        else
        {
            printf("what value do you want: ");
            scanf("%d",&value);
            assign_bit(bit_array, bit_number, value);
            printf("After assign the bits are %s",bit_array);
            break;
        }
    }while (1);

    do{
        printf("Which bit do you want to test: ");
        scanf("%d",&bit_number);
        if(bit_number>strlen(bit_array)){
            printf("Invilid position\n");
        }
        else
        {
            answer = test_bit(bit_array, bit_number);
            if(answer == 0){
                printf("False\n");
            }
            else
            {
                printf("True\n");
            }
            
            break;
        }
    }while (1);
    

}
void set_bit( char bit_array[], unsigned bit_number ){
    bit_array[bit_number] = '1';
}
void clear_bit( char bit_array[], unsigned bit_number ){
    bit_array[bit_number] = '0';
}
void assign_bit( char bit_array[], unsigned bit_number, int value ){
    bit_array[bit_number] = value == 0 ? '0': '1';
}
int test_bit( char bit_array[], unsigned bit_number){
    int answer;
    if (bit_array[bit_number] - '0'){
        return 1;
    }
    else
    {
        return 0;
    }
}