#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "Hyderabadi Biryani";
    string b = "Hyderabadi Haleem";
    string c = "Chicken 65";
    string d = "Pathar Ka Gosht";
    string e = "Qabooli Biryani";
    string f = "Keama samosa";
    string g = "Hyderabadi Dum ka Murgh";
    string h = "Mutton Dalcha";
    string i = "Mirchi ka Salan";
    string j = "Double ka Meetha";
    string k = "Nazaqati Boti Kebab";
    string l = "Sofiana Biryani";

    cout << endl;
    cout << endl;
    cout << "                                                                       || WELCOME TO ZKON RESTOBAR ||";
    cout << endl;
    cout << endl;
    cout << "                     <-----------------------------------------------------------MENU------------------------------------------------------------->  ";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "                                1. Hyderabadi Biryani (499/-).                            7. Hyderabadi Dum ka Murgh (699/-).";
    cout << endl;
    cout << endl;
    cout << "                                2. Hyderabadi Haleem (299/-).                             8. Mutton Dalcha (499/-).";
    cout << endl;
    cout << endl;
    cout << "                                3. Chicken 65 (599/-).                                    9. Mirchi ka Salan (299/-).";
    cout << endl;
    cout << endl;
    cout << "                                4. Pathar Ka Gosht (399/-).                               10. Double ka Meetha (199/-).";
    cout << endl;
    cout << endl;
    cout << "                                5. Qabooli Biryani (799/-).                               11. Nazaqati Boti Kebab (499/-).";
    cout << endl;
    cout << endl;
    cout << "                                6. Keama samosa (199/-).                                  12. Sofiana Biryani (499/-).";
    cout << endl;
    cout << endl;
    cout << "                                                    <--Pick Any Dish You Want-->" << endl;
    cout << endl;
    cout << endl;
    int order, plates;
    cout << "                                                        Dish Number  = ";
    cin >> order;
    cout << endl;
    cout << "                                                        no.of plates = ";
    cin >> plates;
    cout << endl;
    switch (order)
    {
    case 1:
        cout << "                                                " << a << " "
             << " --> price  = 499/-";
        cout << endl;
        cout << endl;
        cout << "                                                " << plates << " Plates Of " << a << " = " << plates * 499 << "/-";
        cout << endl;
        cout << endl;
        cout << "                                                  "
             << "     YOUR TOTAL  =  " << plates * 499 << "/-";
        break;
    case 2:
        cout << "                                                 " << b << " "
             << " --> price  = 299/-";
        cout << endl;
        cout << endl;
        cout << "                                                " << plates << " Plates Of " << b << " = " << plates * 299 << "/-";
        cout << endl;
        cout << endl;
        cout << "                                                  "
             << "     YOUR TOTAL  =  " << plates * 299 << "/-";
        break;
    case 3:
        cout << "                                                 " << c << " "
             << " --> price  = 599/-";
        cout << endl;
        cout << endl;
        cout << "                                                " << plates << " Plates Of " << c << " = " << plates * 599 << "/-";
        cout << endl;
        cout << endl;
        cout << "                                                  "
             << "     YOUR TOTAL  =  " << plates * 599 << "/-";
        break;
    case 4:
        cout << "                                                 " << d << " "
             << " --> price  = 399/-";
        cout << endl;
        cout << endl;
        cout << "                                                " << plates << " Plates Of " << d << " = " << plates * 399 << "/-";
        cout << endl;
        cout << endl;
        cout << "                                                  "
             << "     YOUR TOTAL  =  " << plates * 399 << "/-";
        break;
    case 5:
        cout << "                                                 " << e << " "
             << " --> price  = 799/-";
        cout << endl;
        cout << endl;
        cout << "                                                " << plates << " Plates Of " << e << " = " << plates * 799 << "/-";
        cout << endl;
        cout << endl;
        cout << "                                                  "
             << "     YOUR TOTAL  =  " << plates * 799 << "/-";
        break;
    case 6:
        cout << "                                                 " << f << " "
             << " --> price  = 199/-";
        cout << endl;
        cout << endl;
        cout << "                                                " << plates << " Plates Of " << f << " = " << plates * 199 << "/-";
        cout << endl;
        cout << endl;
        cout << "                                                  "
             << "     YOUR TOTAL  =  " << plates * 199 << "/-";
        break;
    case 7:
        cout << "                                                 " << g << " "
             << " --> price  = 699/-";
        cout << endl;
        cout << endl;
        cout << "                                                " << plates << " Plates Of " << g << " = " << plates * 699 << "/-";
        cout << endl;
        cout << endl;
        cout << "                                                  "
             << "     YOUR TOTAL  =  " << plates * 699 << "/-";
        break;
    case 8:
        cout << "                                                 " << h << " "
             << " --> price  = 499/-";
        cout << endl;
        cout << endl;
        cout << "                                                " << plates << " Plates Of " << h << " = " << plates * 499 << "/-";
        cout << endl;
        cout << endl;
        cout << "                                                  "
             << "     YOUR TOTAL  =  " << plates * 499 << "/-";
        break;
    case 9:
        cout << "                                                 " << i << " "
             << " --> price  = 299/-";
        cout << endl;
        cout << endl;
        cout << "                                                " << plates << " Plates Of " << i << " = " << plates * 299 << "/-";
        cout << endl;
        cout << endl;
        cout << "                                                  "
             << "     YOUR TOTAL  =  " << plates * 299 << "/-";
        break;
    case 10:
        cout << "                                                 " << j << " "
             << " --> price  = 199/-";
        cout << endl;
        cout << endl;
        cout << "                                                " << plates << " Plates Of " << j << " = " << plates * 199 << "/-";
        cout << endl;
        cout << endl;
        cout << "                                                  "
             << "     YOUR TOTAL  =  " << plates * 199 << "/-";
        break;
    case 11:
        cout << "                                                 " << k << " "
             << " --> price  = 499/-";
        cout << endl;
        cout << endl;
        cout << "                                                " << plates << " Plates Of " << k << " = " << plates * 499 << "/-";
        cout << endl;
        cout << endl;
        cout << "                                                  "
             << "     YOUR TOTAL  =  " << plates * 499 << "/-";
        break;
    case 12:
        cout << "                                                 " << l << " "
             << " --> price  = 499/-";
        cout << endl;
        cout << endl;
        cout << "                                                " << plates << " Plates Of " << l << " = " << plates * 499 << "/-";
        cout << endl;
        cout << endl;
        cout << "                                                  "
             << "     YOUR TOTAL  =  " << plates * 499 << "/-";
        break;
    default:
        cout << "                                       ****SORRY WE DON'T HAVE YOUR REQUESTED ORDER**** ";
    }
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "                                ----------------**** THANK YOU PLEASE VISIT AGAIN ****---------------- ";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}