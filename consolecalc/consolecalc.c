/* A Stupidly Simple Calculator I Did Because I Was Bored. */
/* I Hope You Enjoy This, Or Not. I Don't Know. */

#include <windows.h>
#include <stdio.h>

#pragma warning( disable : 4996 )

INT
wmain(
    _In_ INT   argc,
    _In_ CHAR* argv[ ]
)
{
    DOUBLE a;
    DOUBLE b;
    DOUBLE Result;
    CHAR   op;

    wprintf( L"Console Calculator By Sapphire.\n" );
    wprintf( L"A Stupid Thing I Did Because I Was Bored.\n" );
    wprintf( L"Enter First Number: " );

    if ( wscanf( L"%lf", &a ) != 1 )
    {
        wprintf( L"Invalid Input.\n" );
        return 1;
    }
    wprintf( L"Enter Operator (+ - * /): " );
    if ( wscanf( L" %c", &op ) != 1 )
    {
        wprintf( L"Invalid Operator Input.\n" );
        return 1;
    }
    wprintf( L"Enter Second Number: " );
    if ( wscanf( L"%lf", &b ) != 1 )
    {
        wprintf( L"Invalid Input.\n" );
        return 1;
    }
    switch ( op )
    {
        case '+':
            Result = a + b;
            break;
        case '-':
            Result = a - b;
            break;
        case '*':
            Result = a * b;
            break;
        case '/':
            if ( b == 0 )
            {
                wprintf( L"Error: Division By Zero.\n" );
                return 1;
            }
            Result = a / b;
            break;
        default:
            wprintf( L"Unknown Operator.\n" );
            return 1;
    }
    wprintf( L"Result: %.10g\n", Result );
    return 0;
}