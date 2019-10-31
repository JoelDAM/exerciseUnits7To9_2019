//Joel Martinez
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
