/*Ricardo L. Vilches Sabalier
 backwards Sentence
*/

#include <iostream>
#include <cstring>
using namespace std;
string swapTheWord(string word);

int main()
{
    system("clear");
    string delimiter = " ";
    string word = "";
    cout<<"insert the complete sentence please : ";
    getline(cin,word);
    word = swapTheWord(word);
    while (word.length()>0)
    {
    string token = word.substr(0, word.find(delimiter));
    cout<<swapTheWord(token)<<" ";
    word.erase(0,token.length()+ delimiter.length());
    }   
	return 0;

}
string swapTheWord(string word)
{
    char tempLetter;
    for(int i = 0 ; i<(word.length()/2);i++)
    {
        if(i==0)
        {
            
            tempLetter = word[i];
            word[i]= word[word.length()-1];
            word[word.length()-1]=tempLetter;
        }
        else
        {
           tempLetter = word[i];
           word[i]= word[(word.length()-1)-i];
           word[(word.length()-1)-i]=tempLetter;
        }
    }
    
    return word;
}