#include <iostream>
#include <stdexcept>
#include "PhoneticFinder.hpp"

using namespace std;

bool phonetic::simalar(char x,char y) {
    if (x==y){
        return true;
    }
    if ((((x == 'v' || x=='V')) && (y == 'w'|| y=='W')) || (((x == 'w' || x=='W')) && (y == 'v'|| y=='V'))) {
        return true;
    }
    if ((((x == 'b'||x=='B')) && (y == 'p' || y=='P'))|| ((x == 'p' || x=='P') && (y =='b'|| y=='B'))) {
        return true;
    }
     if((((x == 'b'|| x=='B')) && (y == 'f'|| y=='F')) || (((x == 'f'||x=='F')) && (y == 'b'|| y=='B'))){
        return true;
    }
    if ((((x == 'f'||x=='F')) && (y == 'p' || y=='P'))|| (((x == 'p'||x=='P')) && (y =='f'|| y=='F'))) {
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
    if(word=="" || word==" "){
        throw out_of_range("this word not in text");
    }
    if(is_Same_Word(text,word).size()>=1){
        string ans_same=is_Same_Word(text,word);
      if(ans_same==word){
          return ans_same;
      }

    }
    while (i<text.size() )
    {
        if (simalar(text[i],word[j]) && text[i]!=' '){
            ans+=text[i];
            i++;
            j++;
            x=i;
        } else{
            if (j>=word.size()) {
                    return ans;
                }
            j=0;
            ans="";
            while (text[i]!=' '){
                i++;
                if (i>text.size()){
                    throw out_of_range("this word not in text");
                }
            }
            i++;
        }
    }
if(x>=text.size()){
    for (int k = 0; k <ans.size()-1 ; ++k) {
        ans[k]=ans[k];
    }
    bool flag= false;
    if (wordWithSpace(word)){
        for (int f = 0; f <word.size()-1 ; ++f) {
            ans[f]=ans[f];
        }

    }
}
        return ans;
}
bool phonetic::wordWithSpace(string word){
    bool flag= false;
    for (int i = 0; i <word.size() ; ++i) {
        if (word[i]==' '){
            cout<<i;
            return true;
        }
    }
    return false;

}
//int main() {
//    string text1 = " AAA  CCC YOU aRe Bfp iy Ediut bed boy";
//  /*  cout<<phonetic::find(text1,"PPB")<<endl; //== string("BfP"));
//    cout<<phonetic::find(text1,"PPb") <<endl;//== string("BfP"));*/
//    cout<<phonetic::find(text1, "yy")<<endl;// == string("iy") )
//    //////////////////////////////////////////////////////////////////////
//    string text = "Dond worry be BfP haffy dont smile bff";
//    cout << phonetic::find(text, "PPP") << endl;   // should print "Dond"
//    cout << phonetic::find(text, "worry") << endl;   // should print "vorri"
//    cout << phonetic::find(text, "Be") << endl;   // should print "be"
//    cout << phonetic::find(text, "happy")<< endl;   // should print "haffy"
//    cout<<phonetic::find(text, "PPB")<<endl;// == string("BfP") )
//    try {
//        cout << phonetic::find(text, "happ") << endl;   // should throw an exception - "happ" is not a full word in the sentence
//    } catch (exception ex) {
//        cout << "Did not find the word in the text " << ex.what() << endl;  // should print "Did not find the word 'happ' in the text"
//    }
//    string antword= "eima i love you";
//    cout<< phonetic::find(antword,"")<<endl;
//
//
//    return 0;
//}

