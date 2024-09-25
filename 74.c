
#include <stdio.h>
#include <ctype.h>

int main( void ) {
    FILE *p;
    
    p = fopen( "74.txt", "r" );
    
    if ( p == NULL ) {
        printf( "Error opening file.\n" );
        return 1;
    }
    
    char ch;
    int characters = 0, words = 0, sentences = 0, vowels = 0, punctuation = 0, consonants = 0;
    int inWord = 0;
    
    while ( ( ch = getc( p ) ) != EOF ) {
        characters++;
        
        if ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ) {
            vowels++;
        }
        else if ( isalpha( ch ) ) {
            consonants++;
        }
        
        if ( ch == ' ' ) {
            if ( inWord ) {
                words++;
                inWord = 0;
            }
        }
        else if ( ch == '.' || ch == '!' || ch == '?' ) {
            sentences++;
            if ( inWord ) {
                words++;
                inWord = 0;
            }
        }
        else if ( ch == ',' || ch == ';' || ch == ':' ) {
            punctuation++;
        }
        else {
            inWord = 1;
        }
    }
    
    if ( inWord ) {
        words++;
    }
    
    printf( "Characters: %d\nWords: %d\nSentences: %d\nVowels: %d\nPunctuation marks: %d\nConsonants: %d\n",
           characters, words, sentences, vowels, punctuation, consonants );
    
    fclose( p );
    return 0;
}

