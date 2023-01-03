#include <iostream>

using namespace std;

//the function:

//random key generator, how to use: string1 = rkg(random number generated from 0000-9999)
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

//the one that translate each alphabet
string encrypt(string fcode)
{
//starting unit
if (fcode != "a")
{
if (fcode != "b")
{
if (fcode != "c")
{
if (fcode != "d")
{
if (fcode != "e")
{
if (fcode != "f")
{
if (fcode != "g")
{
if (fcode != "h")
{
if (fcode != "i")
{
if (fcode != "j")
{
if (fcode != "k")
{
if (fcode != "l")
{
if (fcode != "m")
{
if (fcode != "n")
{
if (fcode != "o")
{
if (fcode != "p")
{
if (fcode != "q")
{
if (fcode != "r")
{
if (fcode != "s")
{
if (fcode != "t")
{
if (fcode != "u")
{
if (fcode != "v")
{
if (fcode != "w")
{
if (fcode != "x")
{
if (fcode != "y")
{
if (fcode != "z")
{
//beacon for adding more-------------------------------------------------------------------------------------------
if (fcode != "A")
{
if (fcode != "B")
{
if (fcode != "C")
{
if (fcode != "D")
{
if (fcode != "E")
{
if (fcode != "F")
{
if (fcode != "G")
{
if (fcode != "H")
{
if (fcode != "I")
{
if (fcode != "J")
{
if (fcode != "K")
{
if (fcode != "L")
{
if (fcode != "M")
{
if (fcode != "N")
{
if (fcode != "O")
{
if (fcode != "P")
{
if (fcode != "Q")
{
if (fcode != "R")
{
if (fcode != "S")
{
if (fcode != "T")
{
if (fcode != "U")
{
if (fcode != "V")
{
if (fcode != "W")
{
if (fcode != "X")
{
if (fcode != "Y")
{
if (fcode != "Z")
{
//toward up is basic uppercase letter++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
if (fcode != "!")
{
if (fcode != "@")
{
if (fcode != "#")
{
if (fcode != "$")
{
if (fcode != "%")
{
if (fcode != "^")
{
if (fcode != "&")
{
if (fcode != "*")
{
if (fcode != "(")
{
if (fcode != ")")
{
if (fcode != "-")
{
if (fcode != "_")
{
if (fcode != "=")
{
if (fcode != "+")
{
if (fcode != "`")
{
if (fcode != "~")
{
if (fcode != "[")
{
if (fcode != "{")
{
if (fcode != "]")
{
if (fcode != "}")
{
if (fcode != "|")
{
if (fcode != ";")
{
if (fcode != ":")
{
if (fcode != "'")
{
if (fcode != ",")
{
if (fcode != "<")
{
if (fcode != ".")
{
if (fcode != ">")
{
if (fcode != "/")
{
if (fcode != "?")
{
if (fcode != "1")
{
if (fcode != "2")
{
if (fcode != "3")
{
if (fcode != "4")
{
if (fcode != "5")
{
if (fcode != "6")
{
if (fcode != "7")
{
if (fcode != "8")
{
if (fcode != "9")
{
if (fcode == "0")
{

    return rkg(1001);

//barrier between if and else ===============================================================================================

}
else return rkg(1000);
}
else return rkg(1002);
}
else return rkg(1003);
}
else return rkg(1004);
}
else return rkg(1005);
}
else return rkg(1006);
}
else return rkg(1007);
}
else return rkg(1008);
}
else return rkg(1009);
}
else return rkg(1010);
}
else return rkg(1011);
}
else return rkg(1012);
}
else return rkg(1013);
}
else return rkg(1014);
}
else return rkg(1015);
}
else return rkg(1016);
}
else return rkg(1017);
}
else return rkg(1018);
}
else return rkg(1019);
}
else return rkg(1020);
}
else return rkg(1021);
}
else return rkg(1022);
}
else return rkg(1023);
}
else return rkg(1024);
}
else return rkg(1025);
}
else return rkg(1026);
}
else return rkg(1027);
}
else return rkg(1028);
}
else return rkg(1029);
}
else return rkg(1030);
}
else return rkg(1031);
}
else return rkg(1032);
}
else return rkg(1033);
}
else return rkg(1034);
}
else return rkg(1035);
}
else return rkg(1036);
}
else return rkg(1037);
}
else return rkg(1038);
}
else return rkg(1039);
}
else return rkg(1040);
}
else return rkg(1041);
}
else return rkg(1042);
}
else return rkg(1043);
}
else return rkg(1044);
}
else return rkg(1045);
}
else return rkg(1046);
}
else return rkg(1047);
}
else return rkg(1048);
}
else return rkg(1049);
}
else return rkg(1050);
}
else return rkg(1051);
}
else return rkg(1052);
}
else return rkg(1053);
}
else return rkg(1054);
}
else return rkg(1055);
}
else return rkg(1056);
}
else return rkg(1057);
}
else return rkg(1058);
}
else return rkg(1059);
}
else return rkg(1060);
}
else return rkg(1061);
}
else return rkg(1062);
}
else return rkg(1063);
}
else return rkg(1064);
}
else return rkg(1065);
}
else return rkg(1066);
}
else return rkg(1067);
}
else return rkg(1068);
}
else return rkg(1069);
}
else return rkg(1070);
}
else return rkg(1071);
}
else return rkg(1072);
}
else return rkg(1073);
}
else return rkg(1074);
}
else return rkg(1075);
}
else return rkg(1076);
}
else return rkg(1077);
}
else return rkg(1078);
}
else return rkg(1079);
}
else return rkg(1080);
}
else return rkg(1081);
}
else return rkg(1082);
}
else return rkg(1083);
}
else return rkg(1084);
}
else return rkg(1085);
}
else return rkg(1086);
}
else return rkg(1087);
}
else return rkg(1088);
}
else return rkg(1089);
}
else return rkg(1090);
}
else return rkg(1091);
}
else return rkg(1092);
//end unit
}




//the one that translate the whole thing
string para_encrypt(string bcode)
{
    int a = bcode.length();
    int i = 0;
    string trueresult = "";
    if (a <= 240)
    {
    while (i < a)
    {
        string bkeycode = bcode.substr(i, 1);
        string result = encrypt(bkeycode);
        trueresult = trueresult + result;
        i++;
    }
    }
    else
    {
        cout << "input max limit is 240" << endl;
    }
    return trueresult;
}


//the main body for use
int main()
{
    cout << "enter the paragraph" << endl << endl;
    string input;
    getline(cin, input);
    string enter = input;
    string trueresult;
    trueresult = para_encrypt(enter);
    cout << trueresult << endl << endl;
    string quit;
    cout << "please enter quit to confirm exit" << endl << endl;
    cin >> quit;
    string quitting = quit;
    cout << "quitting..." << endl;
    if (quitting == "quit") {
        exit;
    }
}
