#include <iostream>
#include <stdexcept>
#include "PhoneticFinder.hpp"

using namespace std;

bool phonetic::simalar(char x,char y) {
    if (x==y){
        return true;
    }
    if ((((x == 'v' || x=='V')) && (y == 'w')) || (((x == 'w' || x=='W')) && (y == 'v'))) {
        return true;
    }
    if ((((x == 'b'||x=='B')) && (y == 'p'))|| ((x == 'p' || x=='P') && (y =='b'))) {
        return true;
    }
     if((((x == 'b'|| x=='B')) && (y == 'f')) || (((x == 'f'||x=='F')) && (y == 'b'))){
        return true;
    }
    if ((((x == 'f'||x=='F')) && (y == 'p'))|| (((x == 'p'||x=='P')) && (y =='f'))) {
        return true;
    }
    if (((((x == 'g'||x=='G')) && (y == 'j'|| y=='J'))|| ((x == 'j'|| x=='J') && (y =='g'||y=='G')))) {
        return true;
    }
    if ((((x == 'c'|| x=='C') && (y == 'k' || y=='K'))|| ((x == 'k'|| x=='K') && (y =='c'|| y=='C')))) {
        return true;
    }
    if (((x == 'c' || x=='C') && (y == 'q'|| y=='Q'))|| ((x == 'q'|| x=='Q') && (y =='c'|| y=='C'))) {
        return true;
    }
    if ((((x == 'q' || x=='Q') && (y == 'k'|| y=='K'))|| ((x == 'k' || x=='K') && (y =='q'|| y=='Q')))) {
        return true;
    }
    if ((((x == 's'|| x=='S') && (y == 'z'|| y=='Z'))|| ((x == 'z'|| x=='Z') && (y =='s'|| y=='S')))) {
        return true;
    }
    if ((((x == 'd' || x=='D') && (y == 't' || y=='T'))|| ((x == 't' || x=='T') && (y =='d' || y=='D')))) {
        return true;
    }
    if ((((x == 'o' || x=='O') && (y == 'u'|| y=='U'))|| ((x == 'u'|| x=='U') && (y =='o'|| y=='O')))) {
        return true;
    }
    if ((((x == 'i' || x=='I') && (y == 'y' || y=='Y'))|| ((x == 'y'|| x=='Y') && (y =='i'|| y=='I')))) {
        return true;
    }
    if ((char (x-32)==y) ||(char(x+32)==y)){
        return true;
    }
    return false;

}
    string phonetic::is_Same_Word(string text , string word){
    int j=0;
    string ans="";
        for (int i = 0; i <text.size() ; ++i) {
            if (text[i]!=word[j]){
                j=0;
                ans="";

            } else{
            j++;
                ans+=text[i];
        }
        }
        return ans;

}
    string phonetic::find(string text , string word){
    int x=0;
    int i=0,j=0;
    string ans="";
    if(is_Same_Word(text,word).size()>=1){
      //  cout<<is_Same_Word(text,word).size()<<endl;
        return is_Same_Word(text,word);
    }
    while (i<text.size() )
    {
        if (simalar(text[i],word[j])){
            ans+=text[i];
            i++;
            j++;
            x=i;
        } else{
            if (j>word.size()){
                return ans;
            }
            j=0;
            ans="";
            while (text[i]!=' '){
                i++;
                if (i>text.size()){
                    throw exception();
                }
            }
            i++;
        }
    }
if(x>=text.size()){
    for (int k = 0; k <ans.size()-1 ; ++k) {
        ans[k]=ans[k];
    }
}

    return ans;
}
/*
int main() {
    string text = "Dond vorri be haffy dont smile";
    cout << phonetic::find(text, "zmile") << endl;   // should print "Dond"
    cout << phonetic::find(text, "worry") << endl;   // should print "vorri"
    cout << phonetic::find(text, "Be") << endl;   // should print "be"
    cout << phonetic::find(text, "happy") << endl;   // should print "haffy"
    try {
        cout << phonetic::find(text, "happ") << endl;   // should throw an exception - "happ" is not a full word in the sentence
    } catch (exception ex) {
        cout << "Did not find the word in the text " << ex.what() << endl;  // should print "Did not find the word 'happ' in the text"
    }
    return 0;
}
*/
