#include <iostream>

using namespace std;

//random key generator ++++++++++++++++++++++++++++++++++++++++++++++++
string rkg(int seedid)
{
    string encryptcode = "";
    string keylist = "1!2@3#4$5%6^7&8*9(0)-_=+`~|]}[{';:/?.>,<abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string thearray = keylist;
    string acarray = keylist;
    int n;
    //srand(insert real rng)--------------------------------------------------------------------------------------------------
    srand(seedid);
    //srand(insert real rng)--------------------------------------------------------------------------------------------------
    n = acarray.length();
    int selector = rand()%92;
    int i = 0;
    while (i < 5)
    {
    string resultofrkg = acarray.substr(selector, 1);
    acarray = thearray.replace(selector, 1, "");
    n = acarray.length();
    selector = rand()%n;
    encryptcode = encryptcode + resultofrkg;
    i++;
    }
    return encryptcode;
}
//end of random key generator ++++++++++++++++++++++++++++++++++++++++


//translator =====================================================
string decrypt(string dcode)
{

if (dcode != rkg(1001))
{
if (dcode != rkg(1002))
{
if (dcode != rkg(1003))
{
if (dcode != rkg(1004))
{
if (dcode != rkg(1005))
{
if (dcode != rkg(1006))
{
if (dcode != rkg(1007))
{
if (dcode != rkg(1008))
{
if (dcode != rkg(1009))
{
if (dcode != rkg(1010))
{
if (dcode != rkg(1011))
{
if (dcode != rkg(1012))
{
if (dcode != rkg(1013))
{
if (dcode != rkg(1014))
{
if (dcode != rkg(1015))
{
if (dcode != rkg(1016))
{
if (dcode != rkg(1017))
{
if (dcode != rkg(1018))
{
if (dcode != rkg(1019))
{
if (dcode != rkg(1020))
{
if (dcode != rkg(1021))
{
if (dcode != rkg(1022))
{
if (dcode != rkg(1023))
{
if (dcode != rkg(1024))
{
if (dcode != rkg(1025))
{
if (dcode != rkg(1026))
{
//beacon for adding more-------------------------------------------------------------------------------------------
if (dcode != rkg(1027))
{
if (dcode != rkg(1028))
{
if (dcode != rkg(1029))
{
if (dcode != rkg(1020))
{
if (dcode != rkg(1031))
{
if (dcode != rkg(1032))
{
if (dcode != rkg(1033))
{
if (dcode != rkg(1034))
{
if (dcode != rkg(1035))
{
if (dcode != rkg(1036))
{
if (dcode != rkg(1037))
{
if (dcode != rkg(1038))
{
if (dcode != rkg(1039))
{
if (dcode != rkg(1040))
{
if (dcode != rkg(1041))
{
if (dcode != rkg(1042))
{
if (dcode != rkg(1043))
{
if (dcode != rkg(1044))
{
if (dcode != rkg(1045))
{
if (dcode != rkg(1046))
{
if (dcode != rkg(1047))
{
if (dcode != rkg(1048))
{
if (dcode != rkg(1049))
{
if (dcode != rkg(1050))
{
if (dcode != rkg(1051))
{
if (dcode != rkg(1052))
{
//toward up is basic uppercase letter++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
if (dcode != rkg(1053))
{
if (dcode != rkg(1054))
{
if (dcode != rkg(1055))
{
if (dcode != rkg(1056))
{
if (dcode != rkg(1057))
{
if (dcode != rkg(1058))
{
if (dcode != rkg(1059))
{
if (dcode != rkg(1060))
{
if (dcode != rkg(1061))
{
if (dcode != rkg(1062))
{
if (dcode != rkg(1063))
{
if (dcode != rkg(1064))
{
if (dcode != rkg(1065))
{
if (dcode != rkg(1066))
{
if (dcode != rkg(1067))
{
if (dcode != rkg(1068))
{
if (dcode != rkg(1069))
{
if (dcode != rkg(1070))
{
if (dcode != rkg(1071))
{
if (dcode != rkg(1072))
{
if (dcode != rkg(1073))
{
if (dcode != rkg(1074))
{
if (dcode != rkg(1075))
{
if (dcode != rkg(1076))
{
if (dcode != rkg(1077))
{
if (dcode != rkg(1078))
{
if (dcode != rkg(1079))
{
if (dcode != rkg(1080))
{
if (dcode != rkg(1081))
{
if (dcode != rkg(1082))
{
if (dcode != rkg(1083))
{
if (dcode != rkg(1084))
{
if (dcode != rkg(1085))
{
if (dcode != rkg(1086))
{
if (dcode != rkg(1087))
{
if (dcode != rkg(1088))
{
if (dcode != rkg(1089))
{
if (dcode != rkg(1090))
{
if (dcode != rkg(1091))
{
if (dcode == rkg(1092))
{

    return "a";

//barrier between if and else ===============================================================================================

}
else return " ";
}
else return "b";
}
else return "c";
}
else return "d";
}
else return "e";
}
else return "f";
}
else return "g";
}
else return "h";
}
else return "i";
}
else return "j";
}
else return "k";
}
else return "l";
}
else return "m";
}
else return "n";
}
else return "o";
}
else return "p";
}
else return "q";
}
else return "r";
}
else return "s";
}
else return "t";
}
else return "u";
}
else return "v";
}
else return "w";
}
else return "x";
}
else return "y";
}
else return "z";
}
else return "A";
}
else return "B";
}
else return "C";
}
else return "D";
}
else return "E";
}
else return "F";
}
else return "G";
}
else return "H";
}
else return "I";
}
else return "J";
}
else return "K";
}
else return "L";
}
else return "M";
}
else return "N";
}
else return "O";
}
else return "P";
}
else return "Q";
}
else return "R";
}
else return "S";
}
else return "T";
}
else return "U";
}
else return "V";
}
else return "W";
}
else return "X";
}
else return "Y";
}
else return "Z";
}
else return "!";
}
else return "@";
}
else return "#";
}
else return "$";
}
else return "%";
}
else return "^";
}
else return "&";
}
else return "*";
}
else return "(";
}
else return ")";
}
else return "-";
}
else return "_";
}
else return "=";
}
else return "+";
}
else return "`";
}
else return "~";
}
else return "[";
}
else return "{";
}
else return "]";
}
else return "}";
}
else return "|";
}
else return ";";
}
else return ":";
}
else return "'";
}
else return ",";
}
else return "<";
}
else return ".";
}
else return ">";
}
else return "/";
}
else return "?";
}
else return "1";
}
else return "2";
}
else return "3";
}
else return "4";
}
else return "5";
}
else return "6";
}
else return "7";
}
else return "8";
}
else return "9";
}
else return "0";




}



string paradecode(string paradcode)
{
    string decryptresult;
    string semires = "";
    int i = 0;
    int l = paradcode.length();
    int x = l / 5;
    int p;
    //int p = 0 + 5*i;

    if (l <= 1200)
    {
    while (i < x)
    {
        p = 5 * i;
        string line = paradcode.substr(p, 5);
        string dresult = decrypt(line);
        cout << dresult;
        i++;
    }
    return decryptresult;
    }
    else
    {
        cout << "decrypt limit 1200" << endl;
    }
}


int main()
{
    string placed;
    string input;
    cout << "please insert the encrypted message" << endl << endl;
    cin >> input;
    placed = input;
    cout << paradecode(placed) << endl << endl;
    string quit;
    cout << "please enter quit to confirm exit" <<endl;
    cin >> quit;
    string quitting = quit;
    cout << "quitting..." << endl;
    if (quitting == "quit") {
        exit;
    }
}
