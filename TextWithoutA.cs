//Joel Martinez
/*
 * Create a program called TextWithoutA that asks the user to enter a 
 * text iteratively until he/she types a text with no 'a' or 'A' symbols in it. 
 * For instance, if the user types "programming", or "Author" 
 * then the program must keep on asking him/her to type another text. 
 * If he/she types "believe", then the program must finish.
 */
using System;

class TextWithoutA
{
    static void Main()
    {
       string word;
       bool boolean = false;
       
       do 
       {
           boolean = false;
           Console.Write("Introduce your word: ");
           word = Console.ReadLine();
           
           foreach (char character in word)
           {
              if (character == 'a' || character == 'A') 
                boolean = true;
           }
       } while (boolean == true);
    }
 }
