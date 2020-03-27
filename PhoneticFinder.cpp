#include <iostream>
#include <stdexcept>
#include "PhoneticFinder.hpp"
#include <stdio.h>
#include <ctype.h>
//
//using namespace std;
//
//
//
//
//#include <iostream>
//#include <stdexcept>
//#include "PhoneticFinder.hpp"
//
//
//string phonetic::find(string text, string word) {
//    string ans="";
//    int i=0,j=0;
//    int counter=0;
//    if (word=="" || word==" "){
//        throw exception();
//    }
//    string texttemp=text;
//    text="";
//    for (int k = 0; k <texttemp.size() ; ++k) {
//            if(texttemp[k]==' '){
//                counter++;
//            }
//            if (texttemp[k]>='A'){
//                break;
//            }
//    }
//    for (int l = counter; l <texttemp.size() ; ++l) {
//        text+=texttemp[l];
//    }
//    string text_source=text;
//    int index=0;
//    string temp=text;
//    text="";
//    for (int i = 0; i <temp.size() ; ++i) {
//        text+=tolower(temp[i]);
//    }
//    temp=word;
//    word="";
//    for (int j = 0; j <temp.size() ; ++j) {
//        word+=tolower(temp[j]);
//    }
//    while (i<text.size()) {
//        if (same_Char(text[i], word[j]) && text[i] != ' ') {
//            ans += text_source[i];
//            j++;
//            i++;
//            index = i;
//            if (j >= word.size()) {
//                if (index >= text.size()) {
//                    return ans;
//                } else if (text[i] == ' ') {
//                    return ans;
//                }
//            }
//
//    } else {
//            ans = "";
//            j = 0;
//            i = next_Word(text, i);
//            if (i == -1 || i >= text.size()) {
//                throw exception();
//            }
//        }
//
//    }
//    return ans;
//}
//string phonetic::chack_Word(string text, string ans,int index) {
//    string answer="";
//    for (int i = index; i <index+ans.size() ; ++i) {
//        if(char(ans[i]+32)==text[i] || char(ans[i]-32)==text[i]|| ans[i]==text[i]){
//            ans+=text[i];
//        } else{
//            return "";
//        }
//    }
//    return ans;
//}
//int phonetic::next_Word(string text, int i){
//    for (int j = i+1; j <text.size() ; j++) {
//        if(text[j]!=' '){
//            return (j);
//        }
//    }
//    return -1;
//
//}
//bool phonetic::same_Char(char x , char y){
//    if (x==y){
//        return true;
//    }
//    if ((((x == 'v') && (y == 'w')) || (((x == 'w' )) && (y == 'v')))) {
//        return true;
//    }
//    if ((((x == 'b')) && (y == 'p' ))|| ((x == 'p' ) && (y =='b'))) {
//        return true;
//    }
//    if((((x == 'b')) && (y == 'f')) || (((x == 'f')) && (y == 'b'))){
//        return true;
//    }
//    if ((((x == 'f')) && (y == 'p' ))|| (((x == 'p')) && (y =='f'))) {
//        return true;
//    }
//    if (((((x == 'g')) && (y == 'j'))|| ((x == 'j') && (y =='g')))) {
//        return true;
//    }
//    if ((((x == 'c') && (y == 'k' ))|| ((x == 'k') && (y =='c')))) {
//        return true;
//    }
//    if (((x == 'c' ) && (y == 'q'))|| ((x == 'q') && (y =='c'))) {
//        return true;
//    }
//    if ((((x == 'q' ) && (y == 'k'))|| ((x == 'k' ) && (y =='q')))) {
//        return true;
//    }
//    if ((((x == 's') && (y == 'z'))|| ((x == 'z') && (y =='s')))) {
//        return true;
//    }
//    if ((((x == 'd' ) && (y == 't' ))|| ((x == 't') && (y =='d' )))) {
//        return true;
//    }
//    if ((((x == 'o' ) && (y == 'u'))|| ((x == 'u') && (y =='o')))) {
//        return true;
//    }
//    if ((((x == 'i' ) && (y == 'y' ))|| ((x == 'y') && (y =='i')))) {
//        return true;
//    }
//    return false;
//
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//















//
//////////////////////////////
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
    if(word.size()> text.size()){
        throw std::exception();
    }
    string ans="";
    if(word=="" || word==" "){
        __throw_out_of_range("");
//        throw std::exception();
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
                if (x >= text.size()) {
                   return ans;
               } else if (text[i] == ' ') {
                    return ans;
                }
                }
            j=0;
            ans="";
            while (text[i]!=' '){
                i++;
                if (i>text.size()){
                    throw std::exception();
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







int main() {


    string text4 = "             yiyihe        yiyiheysayio                 yiyiheysayios                                        ";
    cout<<phonetic::find(text4, "yiyiheysayios")<<endl;


    string text1 = "AAA  CCC YOU aRe Bfp iy Ediut bed boy";

   // phonetic::find(text1,"DDDDD");
  /*  cout<<phonetic::find(text1,"PPB")<<endl; //== string("BfP"));
    cout<<phonetic::find(text1,"PPb") <<endl;//== string("BfP"));*/
    cout<<phonetic::find(text1, "yy")<<endl;// == string("iy") )
    //////////////////////////////////////////////////////////////////////
    string text = "Dond worry be BfP haffy dont smile bff";
    cout << phonetic::find(text, "PPP") << endl;   // should print "Dond"
    cout << phonetic::find(text, "worry") << endl;   // should print "vorri"
    cout << phonetic::find(text, "Be") << endl;   // should print "be"
    cout << phonetic::find(text, "happy")<< endl;   // should print "haffy"
    cout<<phonetic::find(text, "PPB")<<endl;// == string("BfP") )
    try {
        cout << phonetic::find(text, "happ") << endl;   // should throw an exception - "happ" is not a full word in the sentence
    } catch (exception ex) {
        cout << "Did not find the word in the text " << ex.what() << endl;  // should print "Did not find the word 'happ' in the text"
    }
    string antword= "eima i love you";
    cout<< phonetic::find(antword,"")<<endl;


    return 0;
}

