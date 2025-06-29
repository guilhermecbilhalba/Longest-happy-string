#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* LongestHappyString( int a, int b, int c ) {
    int totala = 0;
    int totalb = 0;
    int totalc = 0;
    int count = 0;
    int capacity = 1;
    char* s = ( char* )malloc( capacity * sizeof( char ) );
    char maior[3];
    
    if ( s == NULL ) {
        printf( "Erro na alocação de memória!\n" );
        return NULL;
    }
    
    if ( a > b ) {
    if ( a > c ) {
        maior[0] = 'a';
        if ( b > c ) {
            maior[1] = 'b';
            maior[2] = 'c';
        } else {
            maior[1] = 'c';
            maior[2] = 'b';
        }
    }
}

if ( b > a ) {
    if ( b > c ) {
        maior[0] = 'b';
        if ( a > c ) {
            maior[1] = 'a';
            maior[2] = 'c';
        } else {
            maior[1] = 'c';
            maior[2] = 'a';
        }
    }
}

if ( c > a ) {
    if ( c > b ) {
        maior[0] = 'c';
        if ( a > b ) {
            maior[1] = 'a';
            maior[2] = 'b';
        } else {
            maior[1] = 'b';
            maior[2] = 'a';
        }
    }
}
    
    while ( 1 ) {
        int added = 0;
        
        int resta = a - totala;
        int restb = b - totalb;
        int restc = c - totalc;
        
        if ( resta > restb ) {
        if ( resta > restc ) {
            maior[0] = 'a';
        if ( restb > restc ) {
            maior[1] = 'b';
            maior[2] = 'c';
        } else {
            maior[1] = 'c';
            maior[2] = 'b';
        }
    }
}

       if ( restb > resta ) {
       if ( restb > restc ) {
        maior[0] = 'b';
        if ( resta > restc ) {
            maior[1] = 'a';
            maior[2] = 'c';
        } else {
            maior[1] = 'c';
            maior[2] = 'a';
        }
    }
}

       if ( restc > resta ) {
       if ( restc > restb ) {
        maior[0] = 'c';
        if ( resta > restb ) {
            maior[1] = 'a';
            maior[2] = 'b';
        } else {
            maior[1] = 'b';
            maior[2] = 'a';
        }
    }
}
        
        if ( maior[0] == 'a' && totala < a ) {
            if ( count < 2 || !( s[count-1] == 'a' && s[count-2] == 'a' ) ) {
                if ( count >= capacity - 1 ) {
                    capacity *= 2;
                    s = ( char* )realloc( s, capacity * sizeof( char ) );
                    if ( s == NULL ) {
                        printf( "Erro no realloc!\n" );
                        return NULL;
                    }
                }
                s[count] = 'a';
                totala++;
                count++;
                added = 1;
            }
        } else if ( maior[0] == 'b' && totalb < b ) {
            if ( count < 2 || !( s[count-1] == 'b' && s[count-2] == 'b' ) ) {
                if ( count >= capacity - 1 ) {
                    capacity *= 2;
                    s = ( char* )realloc( s, capacity * sizeof( char ) );
                    if ( s == NULL ) {
                        printf( "Erro no realloc!\n" );
                        return NULL;
                    }
                }
                s[count] = 'b';
                totalb++;
                count++;
                added = 1;
            }
        } else if ( maior[0] == 'c' && totalc < c ) {
            if ( count < 2 || !( s[count-1] == 'c' && s[count-2] == 'c' ) ) {
                if ( count >= capacity - 1 ) {
                    capacity *= 2;
                    s = ( char* )realloc( s, capacity * sizeof( char ) );
                    if ( s == NULL ) {
                        printf( "Erro no realloc!\n" );
                        return NULL;
                    }
                }
                s[count] = 'c';
                totalc++;
                count++;
                added = 1;
            }
        }
        
        if ( !added ) {
            if ( maior[1] == 'a' && totala < a ) {
                if ( count < 2 || !( s[count-1] == 'a' && s[count-2] == 'a' ) ) {
                    if ( count >= capacity - 1 ) {
                        capacity *= 2;
                        s = ( char* )realloc( s, capacity * sizeof( char ) );
                        if ( s == NULL ) {
                            printf( "Erro no realloc!\n" );
                            return NULL;
                        }
                    }
                    s[count] = 'a';
                    totala++;
                    count++;
                    added = 1;
                }
            } else if ( maior[1] == 'b' && totalb < b ) {
                if ( count < 2 || !( s[count-1] == 'b' && s[count-2] == 'b' ) ) {
                    if ( count >= capacity - 1 ) {
                        capacity *= 2;
                        s = ( char* )realloc( s, capacity * sizeof( char ) );
                        if ( s == NULL ) {
                            printf( "Erro no realloc!\n" );
                            return NULL;
                        }
                    }
                    s[count] = 'b';
                    totalb++;
                    count++;
                    added = 1;
                }
            } else if ( maior[1] == 'c' && totalc < c ) {
                if ( count < 2 || !( s[count-1] == 'c' && s[count-2] == 'c' ) ) {
                    if ( count >= capacity - 1 ) {
                        capacity *= 2;
                        s = ( char* )realloc( s, capacity * sizeof( char ) );
                        if ( s == NULL ) {
                            printf( "Erro no realloc!\n" );
                            return NULL;
                        }
                    }
                    s[count] = 'c';
                    totalc++;
                    count++;
                    added = 1;
                }
            }
        }
        
        if ( !added ) {
            if ( maior[2] == 'a' && totala < a ) {
                if ( count < 2 || !( s[count-1] == 'a' && s[count-2] == 'a' ) ) {
                    if ( count >= capacity - 1 ) {
                        capacity *= 2;
                        s = ( char* )realloc( s, capacity * sizeof( char ) );
                        if ( s == NULL ) {
                            printf( "Erro no realloc!\n" );
                            return NULL;
                        }
                    }
                    s[count] = 'a';
                    totala++;
                    count++;
                    added = 1;
                }
            } else if ( maior[2] == 'b' && totalb < b ) {
                if ( count < 2 || !( s[count-1] == 'b' && s[count-2] == 'b' ) ) {
                    if ( count >= capacity - 1 ) {
                        capacity *= 2;
                        s = ( char* )realloc( s, capacity * sizeof( char ) );
                        if ( s == NULL ) {
                            printf( "Erro no realloc!\n" );
                            return NULL;
                        }
                    }
                    s[count] = 'b';
                    totalb++;
                    count++;
                    added = 1;
                }
            } else if ( maior[2] == 'c' && totalc < c ) {
                if ( count < 2 || !( s[count-1] == 'c' && s[count-2] == 'c' ) ) {
                    if ( count >= capacity - 1 ) {
                        capacity *= 2;
                        s = ( char* )realloc( s, capacity * sizeof( char ) );
                        if ( s == NULL ) {
                            printf( "Erro no realloc!\n" );
                            return NULL;
                        }
                    }
                    s[count] = 'c';
                    totalc++;
                    count++;
                    added = 1;
                }
            }
        }
        
        if ( !added ) {
            break;
        }
    }
    
    if ( count >= capacity ) {
        s = ( char* )realloc( s, ( count + 1 ) * sizeof( char ) );
        if ( s == NULL ) {
            printf( "Erro no realloc!\n" );
            return NULL;
        }
    }
    s[count] = '\0';
    
    return s;
}

int main( void ) {
    int a;
    int b;
    int c;
    
    printf( "a = " );
    scanf( "%d", &a );
    printf( "b = " );
    scanf( "%d", &b );
    printf( "c = " );
    scanf( "%d", &c );
    
    char* result = LongestHappyString( a, b, c );
    
    if ( result != NULL ) {
        printf( "Resultado: %s\n", result );
    } else { 
        printf( "String vazia\n" );
    }
    free( result );
    return 0;
}