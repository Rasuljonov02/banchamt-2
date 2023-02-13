#include <iostream>
#include <zconf.h>
// slipni kichkinadas yozing





using namespace std;

int main()
{
    system("color F1");
    Start:

    cout<<"\n\n\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________________________ "<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|   KAPITALBANK BANKOMATIGA HUSH KELIBSIZ!   |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|        WELCOME TO KAPITALBANK ATM!         |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|____________________________________________|"<<endl;
    cout<<"\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________________________ "<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|     ILTIMOS PLASTIK KARTANI KIRITING!      |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|         PLEASE INSERT YOUR CARD!           |"<<endl;
    cout<<"\t\t\t\t\t|____________________________________________|"<<endl;
    int next;
    cin>>next;
    if (next) {
        system("cls");
        cout<<"\n\n\n"<<endl;
        cout<<"\t\t\t\t\t | Ma'lumotlar yuklanmoqda... |"<<endl;
        sleep(2000);
        system("cls");}
    // Bismillah. Tilni tanlash
    Language:
    int balans = 1500000,Parol = 7777, Enter_Parol, pinchange_1, pinchange_2, limit = 3, yana_b;
    system("cls");
    cout<<"\t\t\t\t\t ____________________________ "<<endl;
    cout<<"\t\t\t\t\t|                            |"<<endl;
    cout<<"\t\t\t\t\t|       1. O'ZBEKCHA         |"<<endl;
    cout<<"\t\t\t\t\t|____________________________|"<<endl;
    cout<<"\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________ "<<endl;
    cout<<"\t\t\t\t\t|                            |"<<endl;
    cout<<"\t\t\t\t\t|        2. ENGLISH          |"<<endl;
    cout<<"\t\t\t\t\t|____________________________|"<<endl;
    cout<<"\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________ "<<endl;
    cout<<"\t\t\t\t\t|                            |"<<endl;
    cout<<"\t\t\t\t\t|        3. RUSCHA           |"<<endl;
    cout<<"\t\t\t\t\t|____________________________|"<<endl;
    cout<<"\n"<<endl;
    int til;
    cout<<"  Tilni tanlang | Choose language : ";
    cin>>til;
    switch (til) {
        Case1:
        case 1: { // UZBEK TILI
            system("cls");
            cout<<"\n\n\n"<<endl;
            cout<<" "<<endl;
            cout<<"\t\t\t\t\t |4 RAQAMLI PIN KODNI KIRITING|"<<endl;
            cout<<"\t\t\t\t\t            >>>| ", cin >> Enter_Parol;

            if(Enter_Parol != Parol){
                cout<<"\t\t\t\t\t        NOTO'GRI PIN KOD!";
                limit--;
                sleep (2000);
                system("cls");
                if (limit > 0) { goto Case1;}
                else {  cout<<"\n\n\n"<<endl;
                    cout<<"\t\t|KARTANGIZ BLOCKLANDI. O'ZINGIZ UCHUN YAQIN BO'LGAN BANK FILIALIGA MUROJAAT QILING!|";
                    cout<<"\n\n\n"<<endl;
                    return 0;}

            } //xato parol uchun
            else {
                bosh_menyu:
                sleep (1000);
                system("cls");
                cout<<"\n"<<endl;
                cout<<"\t\t                             | BOSH MENYU: | " <<endl<<endl;
                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  1. BALANSNI TEKSHIRISH       | \t|  5. MOBIL ALOQA UCHUN TO'LOV  |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n";
                cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  2. NAQD PUL OLISH            | \t|  6. KOMMUNAL TO'LOVLAR        |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n";
                cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  3. HISOBNI TOLDIRISH         | \t|  7. SMS HABARNOMA YOQISH      |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n";
                cout<<"\t\t _______________________________  \t _______________________________"<<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  4. KARTAGA PUL O'TKAZISH     | \t|  8. PIN KODNI O'ZGARTIRISH    |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n\n";
                int amaliyot;
                cout<<" |BOSH MENYUDAN AMALIYOTNI TANGLANG: "; cin>>amaliyot;
                switch (amaliyot){

                    case 1: { // HISOBNI TEKSHIRISH MENYUSI
                        system("cls");
                        cout << "\n\n\t\t\t| HOZIRDA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                        sleep(3000);
                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana_b;
                        if (yana_b) {goto bosh_menyu;}
                        else if (yana_b == 0){ goto rahmat;}
                        break;}//balansni tekshirish case 1

                    case 2: { // NAQD PUL OLISH MENYUSI ==> JAVOHIR
                        int npo, s, summa, yana;
                        int kmiqdor;
                        bow:
                        system("cls");

                        cout<<"\n"<<endl;
                        cout<<"\t\t                 | NAQD PUL MABLAGLARINI YECHIB OLISH: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (1) 100 000            | \t|        (2) 200 000            |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (3) 400 000            | \t|        (4) 800 000            |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (5) 1000 000           | \t|        (6) BOSHQA MIQDOR      |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t                    _______________________________ " <<endl;
                        cout<<"\t\t                   |                               | "<<endl;
                        cout<<"\t\t                   |     (7) ORTGA QAYTISH         | "<<endl;
                        cout<<"\t\t                   |_______________________________| "<<endl;
                        cout<<"\n\n";
                        cout << "\t\t\t| HOZIRDA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                        cout << "| KERAKLI MIQDORNI TANLANG (XIZMAT HAQQI 1%):", cin >> summa;

                        system ("cls");
                        nn:
                        switch (summa){
                            case 1: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                sleep(3000);
                                system ("cls");
                                balans = balans - (100000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE1
                            case 2: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                sleep(3000);
                                system ("cls");
                                balans = balans - (200000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE2
                            case 3: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                sleep(3000);
                                system ("cls");
                                balans = balans - (400000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE3
                            case 4: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                sleep(3000);
                                system ("cls");
                                balans = balans - (800000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE4
                            case 5: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                sleep(3000);
                                system ("cls");
                                balans = balans - (1000000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE5
                            case 6: {
                                kerakli:
                                cout << "\n\n\n | HOZIRDA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                                cout<<"\n | KERAKLI MIQDORNI KIRITING: ", cin>>kmiqdor;
                                if (balans < kmiqdor){
                                    cout<<"\n\n\t\t\t| HISOBINGIZDA YETARLI MABLAG' MAVJUD EMAS! |";
                                    sleep(2000);
                                    system ("cls");
                                    goto kerakli; } // not enough money
                                else {
                                    system ("cls");

                                    cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                    sleep(3000);
                                    system ("cls");
                                    balans = balans - (kmiqdor*1.01);
                                    cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                    cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                    sleep(4000);

                                    cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                    cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                    if (yana) goto bow;
                                    else if (yana == 0) return 0;
                                    break;}} //CASE5 -- else
                            default : cout << "\n\t\t\t\t|QAYTADAN URINIB KO'RING!"; sleep (2000); goto bow; break;
                            case 7: { goto bosh_menyu;
                                break;} // ortga qaytish

                        } //swith naqd pul yechish

                        break;} // 2. Naqd pul olish

                    case 3: { // HISOBNI TOLDIRISH MENYUSI ==> JAVOHIR
                        hb:
                        system ("cls");
                        int sum, balans = 1500000;
                        cout << "\t\t\t| HISOB TO'LDIRISH BO'LIMI! |\n\n";
                        cout << " | HISOBINGIZDA " << balans<< " MAVJUD!\n\n" ;
                        cout << " | SUMMANI KIRITING! HIZMAT XAQQI (1%):  " ;
                        cin >> sum;
                        balans = balans + sum * 0.995;
                        system ("cls");
                        cout << "\n\t\t\t| KIRITILGAN MABLAG' QO'SHILMOQDA...\n"<<endl;
                        cout << " | ILTIMOS BIR OZ KUTING!"<<endl;

                        sleep (4000);

                        system("cls");
                        cout << " \t\t\t| KIRITILGAN MABLAG' HISOBINGIZGA QO'SHILDI! |";
                        cout <<"\n\n| HOZIRDA HISOBINGIZDA "<< balans<< " MAVJUD!" << endl;
                        sleep (3000);
                        cout << "\n\n| YANA AMAL BAJARISHNI XOXLAYSIZMI?\n";
                        cout << "1. HA | 2. YO'Q | ";
                        int bbq;
                        cin >> bbq ;
                        cout <<  endl;
                        system("cls");
                        if (bbq == 1)
                        {goto bosh_menyu;}
                        else if (bbq == 2)
                        {system ("cls");
                            goto rahmat;}



                        break;} // 3. Hisobni to'ldirish

                    case 4: { // PUL OTKAZMALARI MENYUSI ==> ASLOMBEK
                        int otkazma, yana;

                        long long kartaraqam,o;
                        int pull;
                        bosh:

                        system("cls");

                        cout<<"\n"<<endl;
                        cout<<"\t\t                   | PUL O'TKAZMALARI BO'LIMI: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (1) UZCARD             | \t|        (2) HUMO               |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t                    _______________________________ "<<endl;
                        cout<<"\t\t                   |                               | "<<endl;
                        cout<<"\t\t                   |     (3) ORTGA QAYTISH         | "<<endl;
                        cout<<"\t\t                   |_______________________________| "<<endl;
                        cout<<"\n\n";
                        cout << "\n\n";
                        cout << "| PUL O'TKAZILAYOTGAN KARTANI TURINI TANLANG (XIZMAT HAQQI 1%):", cin >> pull;
                        system("cls");

                        switch(pull){
                            case 1: {
                                case1:
                                system("cls");
                                cout << " | PUL O'TKAZMOQCHI BO'LGAN KARTA RAQAMINI KIRITING: \n   8600", cin>>kartaraqam;
                                system("cls");
                                if (kartaraqam <= 99999999999 || kartaraqam> 999999999999) {
                                    system("cls");
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    sleep(2000);
                                    goto case1;
                                }//xatolik
                                else {
                                    case1_1:
                                    system("cls");
                                    cout << "\n\n  | KARTA RAQAM EGASI: OCHILOV ASLOMBEK \n ";
                                    cout << " | ESLATIB O'TAMIZ, O'TKAZMALAR UCHUN BANK 1% XIZMAT HAQQI OLADI! \n ";
                                    cout << " | HOZIRDA SIZNING KARTANGIZDAGI PUL  MIQDORI "<<balans<<" UZS \n\n ";
                                    cout << " | O'TKAZMOQCHI BO'LGAN SUMMANI KIRITING: ", cin>>otkazma;
                                    if (balans < (otkazma * 1.01)) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ HISOBINGIZDA YETARLI MABLAG MAVJUD EMAS!|";
                                        sleep(2000);
                                        goto case1_1;
                                    }//balans < otkazma
                                    else {
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH AMALGA OSHIRILMOQDA!|";
                                        sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH MUVAFFAQIYATLI AMALGA OSHIRILDI!|"<<endl;
                                        balans = balans - (otkazma * 1.01);
                                        cout << "\n\n\t\t\t| HISOBINGIZDA "<<balans<<" UZS qoldi | \n\n"<<endl;
                                        sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh;}
                                        else if (yana == 0) {return 0;}

                                    } //balans > otkazma

                                }// to'gribosa

                                break; }//case1 uzcard

                            case 2: {
                                case2:
                                system("cls");
                                cout << " | PUL O'TKAZMOQCHI BO'LGAN KARTA RAQAMINI KIRITING: \n   9860", cin>>kartaraqam;
                                system("cls");
                                if (kartaraqam <= 99999999999 || kartaraqam> 999999999999) {
                                    system("cls");
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    sleep(2000);
                                    goto case2;
                                }//xatolik
                                else {
                                    case2_1:
                                    system("cls");
                                    cout << "\n\n  | KARTA RAQAM EGASI: OCHILOV ASLOMBEK \n ";
                                    cout << " | ESLATIB O'TAMIZ, O'TKAZMALAR UCHUN BANK 1% XIZMAT HAQQI OLADI! \n ";
                                    cout << " | HOZIRDA SIZNING KARTANGIZDAGI PUL  MIQDORI "<<balans<<" UZS \n\n ";
                                    cout << " | O'TKAZMOQCHI BO'LGAN SUMMANI KIRITING: ", cin>>otkazma;
                                    if (balans < (otkazma * 1.01)) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ HISOBINGIZDA YETARLI MABLAG MAVJUD EMAS!|";
                                        sleep(2000);
                                        goto case2_1;
                                    }//balans < otkazma
                                    else {
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH AMALGA OSHIRILMOQDA!|";
                                        sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH MUVAFFAQIYATLI AMALGA OSHIRILDI!|"<<endl;
                                        balans = balans - (otkazma * 1.01);
                                        cout << "\n\n\t\t\t| HISOBINGIZDA "<<balans<<" UZS qoldi | \n\n"<<endl;
                                        sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh;}
                                        else if (yana == 0) {return 0;}

                                    } //balans > otkazma

                                }// to'gribosa

                                break; }//case2 humo

                            case 3: {goto bosh_menyu; break;}

                            default: {
                                system("cls");
                                cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                sleep(2000);
                                goto bosh; break;}//default


                        }//SWITCH pul otkazma

                        break;} // 4. Kartaga pul otqazish

                    case 5: { //MOBIL ALOQA MENYUSI ==> UMIDJON

                        system("cls");
                        int a,b,c, yana;
                        mobil:
                        system("cls");
                        cout<<"\n"<<endl;
                        cout<<"\t\t                  | MOBIL ALOQA UCHUN TO'LOVLAR: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (1) UZMOBILE           | \t|        (2) BEELINE            |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (3) UCELL              | \t|        (4) MOBIUZ             |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (5) HUMANS             | \t|        (6) ORTGA QAYTISH      |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout << "\t\t\t| HOZIRDA KARTA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                        cout << "| MOBIL OPERATORNI TANLANG:", cin >> a;
                        system("cls");


                        switch (a){
                            case 1:{
                                raqam1:
                                system("cls");
                                cout << "\t\t\t| UZMOBILE OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(99)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        sleep(2000);
                                        goto raqam1;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    sleep(2500);
                                    goto raqam1;}
                                break; }//uzmobile case 1

                            case 2:{
                                raqam2:
                                system("cls");
                                cout << "\t\t\t| BEELINE OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(90)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        sleep(2000);
                                        goto raqam2;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    sleep(2500);
                                    goto raqam2;}
                                break; }//BEELINE case 2


                            case 3:{
                                raqam3:
                                system("cls");
                                cout << "\t\t\t| UCELL OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(93)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        sleep(2000);
                                        goto raqam3;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    sleep(2500);
                                    goto raqam3;}
                                break; }//UCELL case 3

                            case 4:{
                                raqam4:
                                system("cls");
                                cout << "\t\t\t| MOBIUZ OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(97)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        sleep(2000);
                                        goto raqam4;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    sleep(2500);
                                    goto raqam4;}
                                break; }//MOBIUZ case 4

                            case 5:{
                                raqam5:
                                system("cls");
                                cout << "\t\t\t| HUMANS OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(33)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        sleep(2000);
                                        goto raqam5;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    sleep(2500);
                                    goto raqam5;}
                                break; }//HUMANS case 5

                            case 6: { goto bosh_menyu; break;}

                            default: {
                                system("cls");
                                cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                sleep(2000);
                                goto mobil; break;
                            }//default
                        }//switch mobil aloqa menu
                    } // case 5 mobil aloqa

                    case 6: { //KOMMUNAL TO'LOVLAR BO'LIMI ==> MUHAMMAD
                        int komunal;
                        int gazb = 50000, elektrb = 70000, issiqb = 60000, sovuqb = 80000, chiqindib = 20000;
                        int temirovhr = 1234567;
                        kmnl: // orqa qaytish
                        system("cls");
                        cout<<"\n"<<endl;
                        cout<<"\t\t                     | KOMMUNAL TO'LOVLAR BO'LIMI: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  1. ELEKTR ENERGIYASI         | \t|  2. ISSIQ SUV                 |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  3. SOVUQ SUV                 | \t|  4. CHIQINDI                  |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  5. TABIIY GAZ                | \t|  6. ORTGA QAYTISH             |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\n\n";

                        cout<<" |KERAKLI BO'LIMNI TANLANG: "; cin>>komunal;
                        system("cls");

                        //Komunal bo'lim.......

                        switch (komunal){
                            case 1 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                     | ELEKTR ENERGIYA BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI BO'LIMNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    sleep (1000);
                                    system("cls");
                                    goto Hisobr;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<elektrb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1Kv= 2000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    sleep (1000);
                                    elektrb = kv +elektrb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << elektrb << " so'm"<<endl<<endl;
                                    sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}}
                                    default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;
                                } //hisob raqam to'gri kiritilsa
                            } //  case 1 elektr energiyasi

                            case 2 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | ISSIQ SUV BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr2 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    sleep (1000);
                                    system("cls");
                                    goto Hisobr2;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<issiqb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1M Kub ISSIQ SUV = 3000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    sleep (1000);
                                    issiqb = kv +issiqb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << issiqb << " so'm"<<endl<<endl;
                                    sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 2 Issiq suv

                            case 3 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | SOVUQ SUV BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr3 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    sleep (1000);
                                    system("cls");
                                    goto Hisobr3;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<sovuqb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1M Kub SOVUQ SUV = 1000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    sleep (1000);
                                    sovuqb = kv +sovuqb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << sovuqb << " so'm"<<endl<<endl;
                                    sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 3 SOVUQ suv

                            case 4 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | CHIQINDI BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr4 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    sleep (1000);
                                    system("cls");
                                    goto Hisobr4;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<issiqb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz chiqindiga 1 oylik to'lov  = 30000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    sleep (1000);
                                    chiqindib = kv +chiqindib;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << chiqindib << " so'm"<<endl<<endl;
                                    sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 4  chiqindi

                            case 5 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | TABIIY GAZ BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr5 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    sleep (1000);
                                    system("cls");
                                    goto Hisobr5;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<gazb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1 Kub m Tabiiy gaz = 1500 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    sleep (1000);
                                    gazb = kv +gazb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << gazb << " so'm"<<endl<<endl;
                                    sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 6 TABBIY GAZ
                            case 6: { goto bosh_menyu; break;}


                        } // kommunal menyu

                        break;} // 6. Kommnal to'lovlar

                    case 7: { // SMS XABARNOMA ==> ASLOMBEK
                        int k,p,telraqam,m, smskod = 7777, kod_check, yana;
                        bosh1:
                        system("cls");

                        cout<<"\n"<<endl;
                        cout<<"\t\t                   | PUL O'TKAZMALARI BO'LIMI: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  (1) SMS XABARNOMA O'CHIRISH  | \t|  (2) SMS XABARNOMA YOQISH     |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t                    _______________________________ "<<endl;
                        cout<<"\t\t                   |                               | "<<endl;
                        cout<<"\t\t                   |     (3) ORTGA QAYTISH         | "<<endl;
                        cout<<"\t\t                   |_______________________________| "<<endl;
                        cout<<"\n\n";
                        cout << "\n\n";
                        cout << "| KERAKLI AMALIYOTNI TANLANG:", cin >> k;
                        system("cls");

                        switch (k){
                            case 1:{
                                Case1_:
                                system("cls");
                                cout << "\n\t\t\t| SMS XABARNOMA O'CHIRILADIGAN TELEFON RAQAMINI KIRITING!|"<<endl<<endl;
                                cout << "  | TELEFON RAQAM: +998";cin >>telraqam;
                                system("cls");


                                if(telraqam>99999999 && telraqam<1000000000){
                                    cout << "\n\t\t\t| ILTIMOS KUTING..|"<<endl<<endl;
                                    sleep(2000);
                                    system("cls");
                                    CAse1_1:
                                    cout << "\n\t\t\t| SIZGA SMS ORQALI 4 XONALI TASDIQLASH KODI YUBORILDI!|"<<endl<<endl;
                                    cout << "  | ILTIMOS YUBORILGAN KODNI KIRITING: ";cin >>kod_check;
                                    if (kod_check == smskod) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| SMS XABARNOMA MUVAFFAQIYATLI O'CHIRILDI!|";
                                        sleep(2000);
                                        cout<<"\n\n | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh1;}
                                        else if (yana == 0) {return 0;}
                                    }//kod togri
                                    else if (kod_check != smskod) {
                                        cout << "\n\n XATOLIK, KODNI QAYTADAN KIRITING!|";
                                        sleep(2000);
                                        system("cls");
                                        goto CAse1_1;
                                    }//kodcheck xato
                                }//TEL RAQAM TOGRI
                                else {
                                    cout << "\n\n XATOLIK, TELEFON RAQAMNI QAYTADAN KIRITING!|";
                                    sleep(2000);
                                    system("cls");
                                    goto Case1_;
                                }//xato raqam
                                break;} //CASE 1 OCHIRISH

                            case 2:{
                                Case2:
                                system("cls");
                                cout << "\n\t\t\t| SMS XABARNOMA YOQISH UCHUN TELEFON RAQAMINI KIRITING!|"<<endl<<endl;
                                cout << "  | TELEFON RAQAM: +998";cin >>telraqam;
                                system("cls");


                                if(telraqam>99999999 && telraqam<1000000000){
                                    cout << "\n\t\t\t| ILTIMOS KUTING..|"<<endl<<endl;
                                    sleep(2000);
                                    system("cls");
                                    CAse2_1:
                                    cout << "\n\t\t\t| SIZGA SMS ORQALI 4 XONALI TASDIQLASH KODI YUBORILDI!|"<<endl<<endl;
                                    cout << "  | ILTIMOS YUBORILGAN KODNI KIRITING: ";cin >>kod_check;
                                    if (kod_check == smskod) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| SMS XABARNOMA MUVAFFAQIYATLI YOQILDI!|";
                                        sleep(2000);
                                        cout<<"\n\n | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh1;}
                                        else if (yana == 0) {return 0;}
                                    }//kod togri
                                    else if (kod_check != smskod) {
                                        cout << "\n\n XATOLIK, KODNI QAYTADAN KIRITING!|";
                                        sleep(2000);
                                        system("cls");
                                        goto CAse2_1;
                                    }//kodcheck xato
                                }//TEL RAQAM TOGRI
                                else {
                                    cout << "\n\n XATOLIK, TELEFON RAQAMNI QAYTADAN KIRITING!|";
                                    sleep(2000);
                                    system("cls");
                                    goto Case2;
                                }//xato raqam
                                break;} //CASE 2 YOQISH

                            case 3: { goto bosh_menyu; break;}
                            default: {
                                cout<<"\n\n\t\t\t| HURMATLI MIJOZ, ILTIMOS RAQAMNI QAYTADAN KIRITING! |";
                                sleep(2000);
                                goto bosh1; break;
                            }

                        }// SWITC SMS XABARNOMA

                        break;} // 7. SMS xabarnoma

                    case 8: { // PIN KODNI O'ZGARTIRISH
                        pin_ozg:
                        int pincheck;
                        system("cls");
                        cout << "\n\t\t\t| PLASTIK KARTA PIN KODINI O'ZGARTIRISH MENYUSI|";
                        cout << "\n\n\n  | PLASTIK KARTANING HOZIRGI PIN KODINI KIRITING: ", cin>>pincheck;
                        cout << "\n\n  | YANGI 4 XONALI PIN KODNI KIRITING: ", cin>>pinchange_1;
                        cout << "\n  | YANGI PIN KODNI QAYTA KIRITING: ", cin>>pinchange_2;
                        if ( Parol == pincheck && pinchange_1 == pinchange_2 && pinchange_1 >999 && pinchange_1<10000 ) {
                            Parol = pinchange_1;
                            cout <<"\n\n\n\t\t\t   | PIN KOD MUVAFFAQIYATLI O'ZGARTIRILDI!|";
                            sleep(1500);
                            cout<<"\n\n | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana_b;
                            if (yana_b) {goto bosh_menyu;}
                            else if (yana_b == 0){ goto rahmat;}
                        }else{
                            cout << "\n\n  | XATOLIK QAYTADAN URINIB KO'RING!|";
                            sleep(2000);
                            goto pin_ozg;
                        }

                        break;} // 7. Pin kodni ozgartirish

                    default: { //BOSH MENYU XATOLIK
                        cout << "\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                        sleep(2500);
                        goto bosh_menyu; break;}
                }//o'zbek tili bosh menyu switch

            } // parol togri kirilsa

            break;}
        case 2: { break;} // English
        case 3: { break;} // Russian
        default: { cout << "\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
            sleep(2500);
            goto Language; break;}
    } //switch TIL uchun

    rahmat:
    system("cls");
    cout<<"\n\n\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________________________ "<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|         KAPITALBANK XIZMATLARIDAN          |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|       FOYDALANGANINGIZ UCHUN RAHMAT!       |"<<endl;
    cout<<"\t\t\t\t\t|____________________________________________| \n\n\n\n\n\n\n\n\n\n"<<endl;

    return 0;
}
#include <iostream>
#include <zconf.h>





using namespace std;

int main()
{
    system("color F1");
    Start:

    cout<<"\n\n\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________________________ "<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|   KAPITALBANK BANKOMATIGA HUSH KELIBSIZ!   |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|        WELCOME TO KAPITALBANK ATM!         |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|____________________________________________|"<<endl;
    cout<<"\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________________________ "<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|     ILTIMOS PLASTIK KARTANI KIRITING!      |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|         PLEASE INSERT YOUR CARD!           |"<<endl;
    cout<<"\t\t\t\t\t|____________________________________________|"<<endl;
    int next;
    cin>>next;
    if (next) {
        system("cls");
        cout<<"\n\n\n"<<endl;
        cout<<"\t\t\t\t\t | Ma'lumotlar yuklanmoqda... |"<<endl;
        Sleep(2000);
        system("cls");}
    // Bismillah. Tilni tanlash
    Language:
    int balans = 1500000,Parol = 7777, Enter_Parol, pinchange_1, pinchange_2, limit = 3, yana_b;
    system("cls");
    cout<<"\t\t\t\t\t ____________________________ "<<endl;
    cout<<"\t\t\t\t\t|                            |"<<endl;
    cout<<"\t\t\t\t\t|       1. O'ZBEKCHA         |"<<endl;
    cout<<"\t\t\t\t\t|____________________________|"<<endl;
    cout<<"\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________ "<<endl;
    cout<<"\t\t\t\t\t|                            |"<<endl;
    cout<<"\t\t\t\t\t|        2. ENGLISH          |"<<endl;
    cout<<"\t\t\t\t\t|____________________________|"<<endl;
    cout<<"\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________ "<<endl;
    cout<<"\t\t\t\t\t|                            |"<<endl;
    cout<<"\t\t\t\t\t|        3. RUSCHA           |"<<endl;
    cout<<"\t\t\t\t\t|____________________________|"<<endl;
    cout<<"\n"<<endl;
    int til;
    cout<<"  Tilni tanlang | Choose language : ";
    cin>>til;
    switch (til) {
        Case1:
        case 1: { // UZBEK TILI
            system("cls");
            cout<<"\n\n\n"<<endl;
            cout<<" "<<endl;
            cout<<"\t\t\t\t\t |4 RAQAMLI PIN KODNI KIRITING|"<<endl;
            cout<<"\t\t\t\t\t            >>>| ", cin >> Enter_Parol;

            if(Enter_Parol != Parol){
                cout<<"\t\t\t\t\t        NOTO'GRI PIN KOD!";
                limit--;
                Sleep (2000);
                system("cls");
                if (limit > 0) { goto Case1;}
                else {  cout<<"\n\n\n"<<endl;
                    cout<<"\t\t|KARTANGIZ BLOCKLANDI. O'ZINGIZ UCHUN YAQIN BO'LGAN BANK FILIALIGA MUROJAAT QILING!|";
                    cout<<"\n\n\n"<<endl;
                    return 0;}

            } //xato parol uchun
            else {
                bosh_menyu:
                Sleep (1000);
                system("cls");
                cout<<"\n"<<endl;
                cout<<"\t\t                             | BOSH MENYU: | " <<endl<<endl;
                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  1. BALANSNI TEKSHIRISH       | \t|  5. MOBIL ALOQA UCHUN TO'LOV  |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n";
                cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  2. NAQD PUL OLISH            | \t|  6. KOMMUNAL TO'LOVLAR        |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n";
                cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  3. HISOBNI TOLDIRISH         | \t|  7. SMS HABARNOMA YOQISH      |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n";
                cout<<"\t\t _______________________________  \t _______________________________"<<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  4. KARTAGA PUL O'TKAZISH     | \t|  8. PIN KODNI O'ZGARTIRISH    |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n\n";
                int amaliyot;
                cout<<" |BOSH MENYUDAN AMALIYOTNI TANGLANG: "; cin>>amaliyot;
                switch (amaliyot){

                    case 1: { // HISOBNI TEKSHIRISH MENYUSI
                        system("cls");
                        cout << "\n\n\t\t\t| HOZIRDA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                        Sleep(3000);
                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana_b;
                        if (yana_b) {goto bosh_menyu;}
                        else if (yana_b == 0){ goto rahmat;}
                        break;}//balansni tekshirish case 1

                    case 2: { // NAQD PUL OLISH MENYUSI ==> JAVOHIR
                        int npo, s, summa, yana;
                        int kmiqdor;
                        bow:
                        system("cls");

                        cout<<"\n"<<endl;
                        cout<<"\t\t                 | NAQD PUL MABLAGLARINI YECHIB OLISH: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (1) 100 000            | \t|        (2) 200 000            |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (3) 400 000            | \t|        (4) 800 000            |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (5) 1000 000           | \t|        (6) BOSHQA MIQDOR      |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t                    _______________________________ " <<endl;
                        cout<<"\t\t                   |                               | "<<endl;
                        cout<<"\t\t                   |     (7) ORTGA QAYTISH         | "<<endl;
                        cout<<"\t\t                   |_______________________________| "<<endl;
                        cout<<"\n\n";
                        cout << "\t\t\t| HOZIRDA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                        cout << "| KERAKLI MIQDORNI TANLANG (XIZMAT HAQQI 1%):", cin >> summa;

                        system ("cls");
                        nn:
                        switch (summa){
                            case 1: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                Sleep(3000);
                                system ("cls");
                                balans = balans - (100000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                Sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE1
                            case 2: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                Sleep(3000);
                                system ("cls");
                                balans = balans - (200000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                Sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE2
                            case 3: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                Sleep(3000);
                                system ("cls");
                                balans = balans - (400000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                Sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE3
                            case 4: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                Sleep(3000);
                                system ("cls");
                                balans = balans - (800000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                Sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE4
                            case 5: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                Sleep(3000);
                                system ("cls");
                                balans = balans - (1000000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                Sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE5
                            case 6: {
                                kerakli:
                                cout << "\n\n\n | HOZIRDA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                                cout<<"\n | KERAKLI MIQDORNI KIRITING: ", cin>>kmiqdor;
                                if (balans < kmiqdor){
                                    cout<<"\n\n\t\t\t| HISOBINGIZDA YETARLI MABLAG' MAVJUD EMAS! |";
                                    Sleep(2000);
                                    system ("cls");
                                    goto kerakli; } // not enough money
                                else {
                                    system ("cls");

                                    cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                    Sleep(3000);
                                    system ("cls");
                                    balans = balans - (kmiqdor*1.01);
                                    cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                    cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                    Sleep(4000);

                                    cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                    cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                    if (yana) goto bow;
                                    else if (yana == 0) return 0;
                                    break;}} //CASE5 -- else
                            default : cout << "\n\t\t\t\t|QAYTADAN URINIB KO'RING!"; Sleep (2000); goto bow; break;
                            case 7: { goto bosh_menyu;
                                break;} // ortga qaytish

                        } //swith naqd pul yechish

                        break;} // 2. Naqd pul olish

                    case 3: { // HISOBNI TOLDIRISH MENYUSI ==> JAVOHIR
                        hb:
                        system ("cls");
                        int sum, balans = 1500000;
                        cout << "\t\t\t| HISOB TO'LDIRISH BO'LIMI! |\n\n";
                        cout << " | HISOBINGIZDA " << balans<< " MAVJUD!\n\n" ;
                        cout << " | SUMMANI KIRITING! HIZMAT XAQQI (1%):  " ;
                        cin >> sum;
                        balans = balans + sum * 0.995;
                        system ("cls");
                        cout << "\n\t\t\t| KIRITILGAN MABLAG' QO'SHILMOQDA...\n"<<endl;
                        cout << " | ILTIMOS BIR OZ KUTING!"<<endl;

                        Sleep (4000);

                        system("cls");
                        cout << " \t\t\t| KIRITILGAN MABLAG' HISOBINGIZGA QO'SHILDI! |";
                        cout <<"\n\n| HOZIRDA HISOBINGIZDA "<< balans<< " MAVJUD!" << endl;
                        Sleep (3000);
                        cout << "\n\n| YANA AMAL BAJARISHNI XOXLAYSIZMI?\n";
                        cout << "1. HA | 2. YO'Q | ";
                        int bbq;
                        cin >> bbq ;
                        cout <<  endl;
                        system("cls");
                        if (bbq == 1)
                        {goto bosh_menyu;}
                        else if (bbq == 2)
                        {system ("cls");
                            goto rahmat;}



                        break;} // 3. Hisobni to'ldirish

                    case 4: { // PUL OTKAZMALARI MENYUSI ==> ASLOMBEK
                        int otkazma, yana;

                        long long kartaraqam,o;
                        int pull;
                        bosh:

                        system("cls");

                        cout<<"\n"<<endl;
                        cout<<"\t\t                   | PUL O'TKAZMALARI BO'LIMI: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (1) UZCARD             | \t|        (2) HUMO               |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t                    _______________________________ "<<endl;
                        cout<<"\t\t                   |                               | "<<endl;
                        cout<<"\t\t                   |     (3) ORTGA QAYTISH         | "<<endl;
                        cout<<"\t\t                   |_______________________________| "<<endl;
                        cout<<"\n\n";
                        cout << "\n\n";
                        cout << "| PUL O'TKAZILAYOTGAN KARTANI TURINI TANLANG (XIZMAT HAQQI 1%):", cin >> pull;
                        system("cls");

                        switch(pull){
                            case 1: {
                                case1:
                                system("cls");
                                cout << " | PUL O'TKAZMOQCHI BO'LGAN KARTA RAQAMINI KIRITING: \n   8600", cin>>kartaraqam;
                                system("cls");
                                if (kartaraqam <= 99999999999 || kartaraqam> 999999999999) {
                                    system("cls");
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2000);
                                    goto case1;
                                }//xatolik
                                else {
                                    case1_1:
                                    system("cls");
                                    cout << "\n\n  | KARTA RAQAM EGASI: OCHILOV ASLOMBEK \n ";
                                    cout << " | ESLATIB O'TAMIZ, O'TKAZMALAR UCHUN BANK 1% XIZMAT HAQQI OLADI! \n ";
                                    cout << " | HOZIRDA SIZNING KARTANGIZDAGI PUL  MIQDORI "<<balans<<" UZS \n\n ";
                                    cout << " | O'TKAZMOQCHI BO'LGAN SUMMANI KIRITING: ", cin>>otkazma;
                                    if (balans < (otkazma * 1.01)) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ HISOBINGIZDA YETARLI MABLAG MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto case1_1;
                                    }//balans < otkazma
                                    else {
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH AMALGA OSHIRILMOQDA!|";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH MUVAFFAQIYATLI AMALGA OSHIRILDI!|"<<endl;
                                        balans = balans - (otkazma * 1.01);
                                        cout << "\n\n\t\t\t| HISOBINGIZDA "<<balans<<" UZS qoldi | \n\n"<<endl;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh;}
                                        else if (yana == 0) {return 0;}

                                    } //balans > otkazma

                                }// to'gribosa

                                break; }//case1 uzcard

                            case 2: {
                                case2:
                                system("cls");
                                cout << " | PUL O'TKAZMOQCHI BO'LGAN KARTA RAQAMINI KIRITING: \n   9860", cin>>kartaraqam;
                                system("cls");
                                if (kartaraqam <= 99999999999 || kartaraqam> 999999999999) {
                                    system("cls");
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2000);
                                    goto case2;
                                }//xatolik
                                else {
                                    case2_1:
                                    system("cls");
                                    cout << "\n\n  | KARTA RAQAM EGASI: OCHILOV ASLOMBEK \n ";
                                    cout << " | ESLATIB O'TAMIZ, O'TKAZMALAR UCHUN BANK 1% XIZMAT HAQQI OLADI! \n ";
                                    cout << " | HOZIRDA SIZNING KARTANGIZDAGI PUL  MIQDORI "<<balans<<" UZS \n\n ";
                                    cout << " | O'TKAZMOQCHI BO'LGAN SUMMANI KIRITING: ", cin>>otkazma;
                                    if (balans < (otkazma * 1.01)) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ HISOBINGIZDA YETARLI MABLAG MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto case2_1;
                                    }//balans < otkazma
                                    else {
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH AMALGA OSHIRILMOQDA!|";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH MUVAFFAQIYATLI AMALGA OSHIRILDI!|"<<endl;
                                        balans = balans - (otkazma * 1.01);
                                        cout << "\n\n\t\t\t| HISOBINGIZDA "<<balans<<" UZS qoldi | \n\n"<<endl;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh;}
                                        else if (yana == 0) {return 0;}

                                    } //balans > otkazma

                                }// to'gribosa

                                break; }//case2 humo

                            case 3: {goto bosh_menyu; break;}

                            default: {
                                system("cls");
                                cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                Sleep(2000);
                                goto bosh; break;}//default


                        }//SWITCH pul otkazma

                        break;} // 4. Kartaga pul otqazish

                    case 5: { //MOBIL ALOQA MENYUSI ==> UMIDJON

                        system("cls");
                        int a,b,c, yana;
                        mobil:
                        system("cls");
                        cout<<"\n"<<endl;
                        cout<<"\t\t                  | MOBIL ALOQA UCHUN TO'LOVLAR: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (1) UZMOBILE           | \t|        (2) BEELINE            |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (3) UCELL              | \t|        (4) MOBIUZ             |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (5) HUMANS             | \t|        (6) ORTGA QAYTISH      |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout << "\t\t\t| HOZIRDA KARTA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                        cout << "| MOBIL OPERATORNI TANLANG:", cin >> a;
                        system("cls");


                        switch (a){
                            case 1:{
                                raqam1:
                                system("cls");
                                cout << "\t\t\t| UZMOBILE OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(99)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto raqam1;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2500);
                                    goto raqam1;}
                                break; }//uzmobile case 1

                            case 2:{
                                raqam2:
                                system("cls");
                                cout << "\t\t\t| BEELINE OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(90)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto raqam2;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2500);
                                    goto raqam2;}
                                break; }//BEELINE case 2


                            case 3:{
                                raqam3:
                                system("cls");
                                cout << "\t\t\t| UCELL OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(93)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto raqam3;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2500);
                                    goto raqam3;}
                                break; }//UCELL case 3

                            case 4:{
                                raqam4:
                                system("cls");
                                cout << "\t\t\t| MOBIUZ OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(97)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto raqam4;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2500);
                                    goto raqam4;}
                                break; }//MOBIUZ case 4

                            case 5:{
                                raqam5:
                                system("cls");
                                cout << "\t\t\t| HUMANS OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(33)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto raqam5;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2500);
                                    goto raqam5;}
                                break; }//HUMANS case 5

                            case 6: { goto bosh_menyu; break;}

                            default: {
                                system("cls");
                                cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                Sleep(2000);
                                goto mobil; break;
                            }//default
                        }//switch mobil aloqa menu
                    } // case 5 mobil aloqa

                    case 6: { //KOMMUNAL TO'LOVLAR BO'LIMI ==> MUHAMMAD
                        int komunal;
                        int gazb = 50000, elektrb = 70000, issiqb = 60000, sovuqb = 80000, chiqindib = 20000;
                        int temirovhr = 1234567;
                        kmnl: // orqa qaytish
                        system("cls");
                        cout<<"\n"<<endl;
                        cout<<"\t\t                     | KOMMUNAL TO'LOVLAR BO'LIMI: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  1. ELEKTR ENERGIYASI         | \t|  2. ISSIQ SUV                 |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  3. SOVUQ SUV                 | \t|  4. CHIQINDI                  |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  5. TABIIY GAZ                | \t|  6. ORTGA QAYTISH             |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\n\n";

                        cout<<" |KERAKLI BO'LIMNI TANLANG: "; cin>>komunal;
                        system("cls");

                        //Komunal bo'lim.......

                        switch (komunal){
                            case 1 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                     | ELEKTR ENERGIYA BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI BO'LIMNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                Sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    Sleep (1000);
                                    system("cls");
                                    goto Hisobr;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<elektrb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1Kv= 2000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    Sleep (1000);
                                    elektrb = kv +elektrb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << elektrb << " so'm"<<endl<<endl;
                                    Sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}}
                                    default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;
                                } //hisob raqam to'gri kiritilsa
                            } //  case 1 elektr energiyasi

                            case 2 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | ISSIQ SUV BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr2 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                Sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    Sleep (1000);
                                    system("cls");
                                    goto Hisobr2;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<issiqb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1M Kub ISSIQ SUV = 3000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    Sleep (1000);
                                    issiqb = kv +issiqb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << issiqb << " so'm"<<endl<<endl;
                                    Sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 2 Issiq suv

                            case 3 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | SOVUQ SUV BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr3 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                Sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    Sleep (1000);
                                    system("cls");
                                    goto Hisobr3;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<sovuqb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1M Kub SOVUQ SUV = 1000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    Sleep (1000);
                                    sovuqb = kv +sovuqb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << sovuqb << " so'm"<<endl<<endl;
                                    Sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 3 SOVUQ suv

                            case 4 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | CHIQINDI BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr4 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                Sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    Sleep (1000);
                                    system("cls");
                                    goto Hisobr4;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<issiqb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz chiqindiga 1 oylik to'lov  = 30000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    Sleep (1000);
                                    chiqindib = kv +chiqindib;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << chiqindib << " so'm"<<endl<<endl;
                                    Sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 4  chiqindi

                            case 5 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | TABIIY GAZ BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr5 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                Sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    Sleep (1000);
                                    system("cls");
                                    goto Hisobr5;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<gazb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1 Kub m Tabiiy gaz = 1500 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    Sleep (1000);
                                    gazb = kv +gazb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << gazb << " so'm"<<endl<<endl;
                                    Sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 6 TABBIY GAZ
                            case 6: { goto bosh_menyu; break;}


                        } // kommunal menyu

                        break;} // 6. Kommnal to'lovlar

                    case 7: { // SMS XABARNOMA ==> ASLOMBEK
                        int k,p,telraqam,m, smskod = 7777, kod_check, yana;
                        bosh1:
                        system("cls");

                        cout<<"\n"<<endl;
                        cout<<"\t\t                   | PUL O'TKAZMALARI BO'LIMI: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  (1) SMS XABARNOMA O'CHIRISH  | \t|  (2) SMS XABARNOMA YOQISH     |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t                    _______________________________ "<<endl;
                        cout<<"\t\t                   |                               | "<<endl;
                        cout<<"\t\t                   |     (3) ORTGA QAYTISH         | "<<endl;
                        cout<<"\t\t                   |_______________________________| "<<endl;
                        cout<<"\n\n";
                        cout << "\n\n";
                        cout << "| KERAKLI AMALIYOTNI TANLANG:", cin >> k;
                        system("cls");

                        switch (k){
                            case 1:{
                                Case1_:
                                system("cls");
                                cout << "\n\t\t\t| SMS XABARNOMA O'CHIRILADIGAN TELEFON RAQAMINI KIRITING!|"<<endl<<endl;
                                cout << "  | TELEFON RAQAM: +998";cin >>telraqam;
                                system("cls");


                                if(telraqam>99999999 && telraqam<1000000000){
                                    cout << "\n\t\t\t| ILTIMOS KUTING..|"<<endl<<endl;
                                    Sleep(2000);
                                    system("cls");
                                    CAse1_1:
                                    cout << "\n\t\t\t| SIZGA SMS ORQALI 4 XONALI TASDIQLASH KODI YUBORILDI!|"<<endl<<endl;
                                    cout << "  | ILTIMOS YUBORILGAN KODNI KIRITING: ";cin >>kod_check;
                                    if (kod_check == smskod) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| SMS XABARNOMA MUVAFFAQIYATLI O'CHIRILDI!|";
                                        Sleep(2000);
                                        cout<<"\n\n | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh1;}
                                        else if (yana == 0) {return 0;}
                                    }//kod togri
                                    else if (kod_check != smskod) {
                                        cout << "\n\n XATOLIK, KODNI QAYTADAN KIRITING!|";
                                        Sleep(2000);
                                        system("cls");
                                        goto CAse1_1;
                                    }//kodcheck xato
                                }//TEL RAQAM TOGRI
                                else {
                                    cout << "\n\n XATOLIK, TELEFON RAQAMNI QAYTADAN KIRITING!|";
                                    Sleep(2000);
                                    system("cls");
                                    goto Case1_;
                                }//xato raqam
                                break;} //CASE 1 OCHIRISH

                            case 2:{
                                Case2:
                                system("cls");
                                cout << "\n\t\t\t| SMS XABARNOMA YOQISH UCHUN TELEFON RAQAMINI KIRITING!|"<<endl<<endl;
                                cout << "  | TELEFON RAQAM: +998";cin >>telraqam;
                                system("cls");


                                if(telraqam>99999999 && telraqam<1000000000){
                                    cout << "\n\t\t\t| ILTIMOS KUTING..|"<<endl<<endl;
                                    Sleep(2000);
                                    system("cls");
                                    CAse2_1:
                                    cout << "\n\t\t\t| SIZGA SMS ORQALI 4 XONALI TASDIQLASH KODI YUBORILDI!|"<<endl<<endl;
                                    cout << "  | ILTIMOS YUBORILGAN KODNI KIRITING: ";cin >>kod_check;
                                    if (kod_check == smskod) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| SMS XABARNOMA MUVAFFAQIYATLI YOQILDI!|";
                                        Sleep(2000);
                                        cout<<"\n\n | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh1;}
                                        else if (yana == 0) {return 0;}
                                    }//kod togri
                                    else if (kod_check != smskod) {
                                        cout << "\n\n XATOLIK, KODNI QAYTADAN KIRITING!|";
                                        Sleep(2000);
                                        system("cls");
                                        goto CAse2_1;
                                    }//kodcheck xato
                                }//TEL RAQAM TOGRI
                                else {
                                    cout << "\n\n XATOLIK, TELEFON RAQAMNI QAYTADAN KIRITING!|";
                                    Sleep(2000);
                                    system("cls");
                                    goto Case2;
                                }//xato raqam
                                break;} //CASE 2 YOQISH

                            case 3: { goto bosh_menyu; break;}
                            default: {
                                cout<<"\n\n\t\t\t| HURMATLI MIJOZ, ILTIMOS RAQAMNI QAYTADAN KIRITING! |";
                                Sleep(2000);
                                goto bosh1; break;
                            }

                        }// SWITC SMS XABARNOMA

                        break;} // 7. SMS xabarnoma

                    case 8: { // PIN KODNI O'ZGARTIRISH
                        pin_ozg:
                        int pincheck;
                        system("cls");
                        cout << "\n\t\t\t| PLASTIK KARTA PIN KODINI O'ZGARTIRISH MENYUSI|";
                        cout << "\n\n\n  | PLASTIK KARTANING HOZIRGI PIN KODINI KIRITING: ", cin>>pincheck;
                        cout << "\n\n  | YANGI 4 XONALI PIN KODNI KIRITING: ", cin>>pinchange_1;
                        cout << "\n  | YANGI PIN KODNI QAYTA KIRITING: ", cin>>pinchange_2;
                        if ( Parol == pincheck && pinchange_1 == pinchange_2 && pinchange_1 >999 && pinchange_1<10000 ) {
                            Parol = pinchange_1;
                            cout <<"\n\n\n\t\t\t   | PIN KOD MUVAFFAQIYATLI O'ZGARTIRILDI!|";
                            Sleep(1500);
                            cout<<"\n\n | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana_b;
                            if (yana_b) {goto bosh_menyu;}
                            else if (yana_b == 0){ goto rahmat;}
                        }else{
                            cout << "\n\n  | XATOLIK QAYTADAN URINIB KO'RING!|";
                            Sleep(2000);
                            goto pin_ozg;
                        }

                        break;} // 7. Pin kodni ozgartirish

                    default: { //BOSH MENYU XATOLIK
                        cout << "\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                        Sleep(2500);
                        goto bosh_menyu; break;}
                }//o'zbek tili bosh menyu switch

            } // parol togri kirilsa

            break;}
        case 2: { break;} // English
        case 3: { break;} // Russian
        default: { cout << "\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
            Sleep(2500);
            goto Language; break;}
    } //switch TIL uchun

    rahmat:
    system("cls");
    cout<<"\n\n\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________________________ "<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|         KAPITALBANK XIZMATLARIDAN          |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|       FOYDALANGANINGIZ UCHUN RAHMAT!       |"<<endl;
    cout<<"\t\t\t\t\t|____________________________________________| \n\n\n\n\n\n\n\n\n\n"<<endl;

    return 0;
}
#include <iostream>

#include <windows.h>



using namespace std;

int main()
{
    system("color F1");
    Start:

    cout<<"\n\n\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________________________ "<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|   KAPITALBANK BANKOMATIGA HUSH KELIBSIZ!   |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|        WELCOME TO KAPITALBANK ATM!         |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|____________________________________________|"<<endl;
    cout<<"\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________________________ "<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|     ILTIMOS PLASTIK KARTANI KIRITING!      |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|         PLEASE INSERT YOUR CARD!           |"<<endl;
    cout<<"\t\t\t\t\t|____________________________________________|"<<endl;
    int next;
    cin>>next;
    if (next) {
        system("cls");
        cout<<"\n\n\n"<<endl;
        cout<<"\t\t\t\t\t | Ma'lumotlar yuklanmoqda... |"<<endl;
        Sleep(2000);
        system("cls");}
    // Bismillah. Tilni tanlash
    Language:
    int balans = 1500000,Parol = 7777, Enter_Parol, pinchange_1, pinchange_2, limit = 3, yana_b;
    system("cls");
    cout<<"\t\t\t\t\t ____________________________ "<<endl;
    cout<<"\t\t\t\t\t|                            |"<<endl;
    cout<<"\t\t\t\t\t|       1. O'ZBEKCHA         |"<<endl;
    cout<<"\t\t\t\t\t|____________________________|"<<endl;
    cout<<"\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________ "<<endl;
    cout<<"\t\t\t\t\t|                            |"<<endl;
    cout<<"\t\t\t\t\t|        2. ENGLISH          |"<<endl;
    cout<<"\t\t\t\t\t|____________________________|"<<endl;
    cout<<"\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________ "<<endl;
    cout<<"\t\t\t\t\t|                            |"<<endl;
    cout<<"\t\t\t\t\t|        3. RUSCHA           |"<<endl;
    cout<<"\t\t\t\t\t|____________________________|"<<endl;
    cout<<"\n"<<endl;
    int til;
    cout<<"  Tilni tanlang | Choose language : ";
    cin>>til;
    switch (til) {
        Case1:
        case 1: { // UZBEK TILI
            system("cls");
            cout<<"\n\n\n"<<endl;
            cout<<" "<<endl;
            cout<<"\t\t\t\t\t |4 RAQAMLI PIN KODNI KIRITING|"<<endl;
            cout<<"\t\t\t\t\t            >>>| ", cin >> Enter_Parol;

            if(Enter_Parol != Parol){
                cout<<"\t\t\t\t\t        NOTO'GRI PIN KOD!";
                limit--;
                Sleep (2000);
                system("cls");
                if (limit > 0) { goto Case1;}
                else {  cout<<"\n\n\n"<<endl;
                    cout<<"\t\t|KARTANGIZ BLOCKLANDI. O'ZINGIZ UCHUN YAQIN BO'LGAN BANK FILIALIGA MUROJAAT QILING!|";
                    cout<<"\n\n\n"<<endl;
                    return 0;}

            } //xato parol uchun
            else {
                bosh_menyu:
                Sleep (1000);
                system("cls");
                cout<<"\n"<<endl;
                cout<<"\t\t                             | BOSH MENYU: | " <<endl<<endl;
                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  1. BALANSNI TEKSHIRISH       | \t|  5. MOBIL ALOQA UCHUN TO'LOV  |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n";
                cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  2. NAQD PUL OLISH            | \t|  6. KOMMUNAL TO'LOVLAR        |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n";
                cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  3. HISOBNI TOLDIRISH         | \t|  7. SMS HABARNOMA YOQISH      |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n";
                cout<<"\t\t _______________________________  \t _______________________________"<<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  4. KARTAGA PUL O'TKAZISH     | \t|  8. PIN KODNI O'ZGARTIRISH    |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n\n";
                int amaliyot;
                cout<<" |BOSH MENYUDAN AMALIYOTNI TANGLANG: "; cin>>amaliyot;
                switch (amaliyot){

                    case 1: { // HISOBNI TEKSHIRISH MENYUSI
                        system("cls");
                        cout << "\n\n\t\t\t| HOZIRDA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                        Sleep(3000);
                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana_b;
                        if (yana_b) {goto bosh_menyu;}
                        else if (yana_b == 0){ goto rahmat;}
                        break;}//balansni tekshirish case 1

                    case 2: { // NAQD PUL OLISH MENYUSI ==> JAVOHIR
                        int npo, s, summa, yana;
                        int kmiqdor;
                        bow:
                        system("cls");

                        cout<<"\n"<<endl;
                        cout<<"\t\t                 | NAQD PUL MABLAGLARINI YECHIB OLISH: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (1) 100 000            | \t|        (2) 200 000            |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (3) 400 000            | \t|        (4) 800 000            |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (5) 1000 000           | \t|        (6) BOSHQA MIQDOR      |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t                    _______________________________ " <<endl;
                        cout<<"\t\t                   |                               | "<<endl;
                        cout<<"\t\t                   |     (7) ORTGA QAYTISH         | "<<endl;
                        cout<<"\t\t                   |_______________________________| "<<endl;
                        cout<<"\n\n";
                        cout << "\t\t\t| HOZIRDA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                        cout << "| KERAKLI MIQDORNI TANLANG (XIZMAT HAQQI 1%):", cin >> summa;

                        system ("cls");
                        nn:
                        switch (summa){
                            case 1: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                Sleep(3000);
                                system ("cls");
                                balans = balans - (100000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                Sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE1
                            case 2: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                Sleep(3000);
                                system ("cls");
                                balans = balans - (200000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                Sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE2
                            case 3: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                Sleep(3000);
                                system ("cls");
                                balans = balans - (400000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                Sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE3
                            case 4: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                Sleep(3000);
                                system ("cls");
                                balans = balans - (800000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                Sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE4
                            case 5: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                Sleep(3000);
                                system ("cls");
                                balans = balans - (1000000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                Sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE5
                            case 6: {
                                kerakli:
                                cout << "\n\n\n | HOZIRDA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                                cout<<"\n | KERAKLI MIQDORNI KIRITING: ", cin>>kmiqdor;
                                if (balans < kmiqdor){
                                    cout<<"\n\n\t\t\t| HISOBINGIZDA YETARLI MABLAG' MAVJUD EMAS! |";
                                    Sleep(2000);
                                    system ("cls");
                                    goto kerakli; } // not enough money
                                else {
                                    system ("cls");

                                    cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                    Sleep(3000);
                                    system ("cls");
                                    balans = balans - (kmiqdor*1.01);
                                    cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                    cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                    Sleep(4000);

                                    cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                    cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                    if (yana) goto bow;
                                    else if (yana == 0) return 0;
                                    break;}} //CASE5 -- else
                            default : cout << "\n\t\t\t\t|QAYTADAN URINIB KO'RING!"; Sleep (2000); goto bow; break;
                            case 7: { goto bosh_menyu;
                                break;} // ortga qaytish

                        } //swith naqd pul yechish

                        break;} // 2. Naqd pul olish

                    case 3: { // HISOBNI TOLDIRISH MENYUSI ==> JAVOHIR
                        hb:
                        system ("cls");
                        int sum, balans = 1500000;
                        cout << "\t\t\t| HISOB TO'LDIRISH BO'LIMI! |\n\n";
                        cout << " | HISOBINGIZDA " << balans<< " MAVJUD!\n\n" ;
                        cout << " | SUMMANI KIRITING! HIZMAT XAQQI (1%):  " ;
                        cin >> sum;
                        balans = balans + sum * 0.995;
                        system ("cls");
                        cout << "\n\t\t\t| KIRITILGAN MABLAG' QO'SHILMOQDA...\n"<<endl;
                        cout << " | ILTIMOS BIR OZ KUTING!"<<endl;

                        Sleep (4000);

                        system("cls");
                        cout << " \t\t\t| KIRITILGAN MABLAG' HISOBINGIZGA QO'SHILDI! |";
                        cout <<"\n\n| HOZIRDA HISOBINGIZDA "<< balans<< " MAVJUD!" << endl;
                        Sleep (3000);
                        cout << "\n\n| YANA AMAL BAJARISHNI XOXLAYSIZMI?\n";
                        cout << "1. HA | 2. YO'Q | ";
                        int bbq;
                        cin >> bbq ;
                        cout <<  endl;
                        system("cls");
                        if (bbq == 1)
                        {goto bosh_menyu;}
                        else if (bbq == 2)
                        {system ("cls");
                            goto rahmat;}



                        break;} // 3. Hisobni to'ldirish

                    case 4: { // PUL OTKAZMALARI MENYUSI ==> ASLOMBEK
                        int otkazma, yana;

                        long long kartaraqam,o;
                        int pull;
                        bosh:

                        system("cls");

                        cout<<"\n"<<endl;
                        cout<<"\t\t                   | PUL O'TKAZMALARI BO'LIMI: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (1) UZCARD             | \t|        (2) HUMO               |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t                    _______________________________ "<<endl;
                        cout<<"\t\t                   |                               | "<<endl;
                        cout<<"\t\t                   |     (3) ORTGA QAYTISH         | "<<endl;
                        cout<<"\t\t                   |_______________________________| "<<endl;
                        cout<<"\n\n";
                        cout << "\n\n";
                        cout << "| PUL O'TKAZILAYOTGAN KARTANI TURINI TANLANG (XIZMAT HAQQI 1%):", cin >> pull;
                        system("cls");

                        switch(pull){
                            case 1: {
                                case1:
                                system("cls");
                                cout << " | PUL O'TKAZMOQCHI BO'LGAN KARTA RAQAMINI KIRITING: \n   8600", cin>>kartaraqam;
                                system("cls");
                                if (kartaraqam <= 99999999999 || kartaraqam> 999999999999) {
                                    system("cls");
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2000);
                                    goto case1;
                                }//xatolik
                                else {
                                    case1_1:
                                    system("cls");
                                    cout << "\n\n  | KARTA RAQAM EGASI: OCHILOV ASLOMBEK \n ";
                                    cout << " | ESLATIB O'TAMIZ, O'TKAZMALAR UCHUN BANK 1% XIZMAT HAQQI OLADI! \n ";
                                    cout << " | HOZIRDA SIZNING KARTANGIZDAGI PUL  MIQDORI "<<balans<<" UZS \n\n ";
                                    cout << " | O'TKAZMOQCHI BO'LGAN SUMMANI KIRITING: ", cin>>otkazma;
                                    if (balans < (otkazma * 1.01)) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ HISOBINGIZDA YETARLI MABLAG MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto case1_1;
                                    }//balans < otkazma
                                    else {
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH AMALGA OSHIRILMOQDA!|";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH MUVAFFAQIYATLI AMALGA OSHIRILDI!|"<<endl;
                                        balans = balans - (otkazma * 1.01);
                                        cout << "\n\n\t\t\t| HISOBINGIZDA "<<balans<<" UZS qoldi | \n\n"<<endl;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh;}
                                        else if (yana == 0) {return 0;}

                                    } //balans > otkazma

                                }// to'gribosa

                                break; }//case1 uzcard

                            case 2: {
                                case2:
                                system("cls");
                                cout << " | PUL O'TKAZMOQCHI BO'LGAN KARTA RAQAMINI KIRITING: \n   9860", cin>>kartaraqam;
                                system("cls");
                                if (kartaraqam <= 99999999999 || kartaraqam> 999999999999) {
                                    system("cls");
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2000);
                                    goto case2;
                                }//xatolik
                                else {
                                    case2_1:
                                    system("cls");
                                    cout << "\n\n  | KARTA RAQAM EGASI: OCHILOV ASLOMBEK \n ";
                                    cout << " | ESLATIB O'TAMIZ, O'TKAZMALAR UCHUN BANK 1% XIZMAT HAQQI OLADI! \n ";
                                    cout << " | HOZIRDA SIZNING KARTANGIZDAGI PUL  MIQDORI "<<balans<<" UZS \n\n ";
                                    cout << " | O'TKAZMOQCHI BO'LGAN SUMMANI KIRITING: ", cin>>otkazma;
                                    if (balans < (otkazma * 1.01)) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ HISOBINGIZDA YETARLI MABLAG MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto case2_1;
                                    }//balans < otkazma
                                    else {
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH AMALGA OSHIRILMOQDA!|";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH MUVAFFAQIYATLI AMALGA OSHIRILDI!|"<<endl;
                                        balans = balans - (otkazma * 1.01);
                                        cout << "\n\n\t\t\t| HISOBINGIZDA "<<balans<<" UZS qoldi | \n\n"<<endl;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh;}
                                        else if (yana == 0) {return 0;}

                                    } //balans > otkazma

                                }// to'gribosa

                                break; }//case2 humo

                            case 3: {goto bosh_menyu; break;}

                            default: {
                                system("cls");
                                cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                Sleep(2000);
                                goto bosh; break;}//default


                        }//SWITCH pul otkazma

                        break;} // 4. Kartaga pul otqazish

                    case 5: { //MOBIL ALOQA MENYUSI ==> UMIDJON

                        system("cls");
                        int a,b,c, yana;
                        mobil:
                        system("cls");
                        cout<<"\n"<<endl;
                        cout<<"\t\t                  | MOBIL ALOQA UCHUN TO'LOVLAR: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (1) UZMOBILE           | \t|        (2) BEELINE            |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (3) UCELL              | \t|        (4) MOBIUZ             |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (5) HUMANS             | \t|        (6) ORTGA QAYTISH      |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout << "\t\t\t| HOZIRDA KARTA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                        cout << "| MOBIL OPERATORNI TANLANG:", cin >> a;
                        system("cls");


                        switch (a){
                            case 1:{
                                raqam1:
                                system("cls");
                                cout << "\t\t\t| UZMOBILE OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(99)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto raqam1;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2500);
                                    goto raqam1;}
                                break; }//uzmobile case 1

                            case 2:{
                                raqam2:
                                system("cls");
                                cout << "\t\t\t| BEELINE OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(90)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto raqam2;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2500);
                                    goto raqam2;}
                                break; }//BEELINE case 2


                            case 3:{
                                raqam3:
                                system("cls");
                                cout << "\t\t\t| UCELL OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(93)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto raqam3;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2500);
                                    goto raqam3;}
                                break; }//UCELL case 3

                            case 4:{
                                raqam4:
                                system("cls");
                                cout << "\t\t\t| MOBIUZ OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(97)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto raqam4;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2500);
                                    goto raqam4;}
                                break; }//MOBIUZ case 4

                            case 5:{
                                raqam5:
                                system("cls");
                                cout << "\t\t\t| HUMANS OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(33)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto raqam5;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2500);
                                    goto raqam5;}
                                break; }//HUMANS case 5

                            case 6: { goto bosh_menyu; break;}

                            default: {
                                system("cls");
                                cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                Sleep(2000);
                                goto mobil; break;
                            }//default
                        }//switch mobil aloqa menu
                    } // case 5 mobil aloqa

                    case 6: { //KOMMUNAL TO'LOVLAR BO'LIMI ==> MUHAMMAD
                        int komunal;
                        int gazb = 50000, elektrb = 70000, issiqb = 60000, sovuqb = 80000, chiqindib = 20000;
                        int temirovhr = 1234567;
                        kmnl: // orqa qaytish
                        system("cls");
                        cout<<"\n"<<endl;
                        cout<<"\t\t                     | KOMMUNAL TO'LOVLAR BO'LIMI: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  1. ELEKTR ENERGIYASI         | \t|  2. ISSIQ SUV                 |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  3. SOVUQ SUV                 | \t|  4. CHIQINDI                  |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  5. TABIIY GAZ                | \t|  6. ORTGA QAYTISH             |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\n\n";

                        cout<<" |KERAKLI BO'LIMNI TANLANG: "; cin>>komunal;
                        system("cls");

                        //Komunal bo'lim.......

                        switch (komunal){
                            case 1 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                     | ELEKTR ENERGIYA BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI BO'LIMNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                Sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    Sleep (1000);
                                    system("cls");
                                    goto Hisobr;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<elektrb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1Kv= 2000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    Sleep (1000);
                                    elektrb = kv +elektrb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << elektrb << " so'm"<<endl<<endl;
                                    Sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}}
                                    default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;
                                } //hisob raqam to'gri kiritilsa
                            } //  case 1 elektr energiyasi

                            case 2 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | ISSIQ SUV BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr2 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                Sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    Sleep (1000);
                                    system("cls");
                                    goto Hisobr2;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<issiqb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1M Kub ISSIQ SUV = 3000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    Sleep (1000);
                                    issiqb = kv +issiqb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << issiqb << " so'm"<<endl<<endl;
                                    Sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 2 Issiq suv

                            case 3 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | SOVUQ SUV BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr3 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                Sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    Sleep (1000);
                                    system("cls");
                                    goto Hisobr3;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<sovuqb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1M Kub SOVUQ SUV = 1000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    Sleep (1000);
                                    sovuqb = kv +sovuqb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << sovuqb << " so'm"<<endl<<endl;
                                    Sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 3 SOVUQ suv

                            case 4 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | CHIQINDI BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr4 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                Sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    Sleep (1000);
                                    system("cls");
                                    goto Hisobr4;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<issiqb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz chiqindiga 1 oylik to'lov  = 30000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    Sleep (1000);
                                    chiqindib = kv +chiqindib;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << chiqindib << " so'm"<<endl<<endl;
                                    Sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 4  chiqindi

                            case 5 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | TABIIY GAZ BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr5 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                Sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    Sleep (1000);
                                    system("cls");
                                    goto Hisobr5;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<gazb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1 Kub m Tabiiy gaz = 1500 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    Sleep (1000);
                                    gazb = kv +gazb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << gazb << " so'm"<<endl<<endl;
                                    Sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 6 TABBIY GAZ
                            case 6: { goto bosh_menyu; break;}


                        } // kommunal menyu

                        break;} // 6. Kommnal to'lovlar

                    case 7: { // SMS XABARNOMA ==> ASLOMBEK
                        int k,p,telraqam,m, smskod = 7777, kod_check, yana;
                        bosh1:
                        system("cls");

                        cout<<"\n"<<endl;
                        cout<<"\t\t                   | PUL O'TKAZMALARI BO'LIMI: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  (1) SMS XABARNOMA O'CHIRISH  | \t|  (2) SMS XABARNOMA YOQISH     |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t                    _______________________________ "<<endl;
                        cout<<"\t\t                   |                               | "<<endl;
                        cout<<"\t\t                   |     (3) ORTGA QAYTISH         | "<<endl;
                        cout<<"\t\t                   |_______________________________| "<<endl;
                        cout<<"\n\n";
                        cout << "\n\n";
                        cout << "| KERAKLI AMALIYOTNI TANLANG:", cin >> k;
                        system("cls");

                        switch (k){
                            case 1:{
                                Case1_:
                                system("cls");
                                cout << "\n\t\t\t| SMS XABARNOMA O'CHIRILADIGAN TELEFON RAQAMINI KIRITING!|"<<endl<<endl;
                                cout << "  | TELEFON RAQAM: +998";cin >>telraqam;
                                system("cls");


                                if(telraqam>99999999 && telraqam<1000000000){
                                    cout << "\n\t\t\t| ILTIMOS KUTING..|"<<endl<<endl;
                                    Sleep(2000);
                                    system("cls");
                                    CAse1_1:
                                    cout << "\n\t\t\t| SIZGA SMS ORQALI 4 XONALI TASDIQLASH KODI YUBORILDI!|"<<endl<<endl;
                                    cout << "  | ILTIMOS YUBORILGAN KODNI KIRITING: ";cin >>kod_check;
                                    if (kod_check == smskod) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| SMS XABARNOMA MUVAFFAQIYATLI O'CHIRILDI!|";
                                        Sleep(2000);
                                        cout<<"\n\n | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh1;}
                                        else if (yana == 0) {return 0;}
                                    }//kod togri
                                    else if (kod_check != smskod) {
                                        cout << "\n\n XATOLIK, KODNI QAYTADAN KIRITING!|";
                                        Sleep(2000);
                                        system("cls");
                                        goto CAse1_1;
                                    }//kodcheck xato
                                }//TEL RAQAM TOGRI
                                else {
                                    cout << "\n\n XATOLIK, TELEFON RAQAMNI QAYTADAN KIRITING!|";
                                    Sleep(2000);
                                    system("cls");
                                    goto Case1_;
                                }//xato raqam
                                break;} //CASE 1 OCHIRISH

                            case 2:{
                                Case2:
                                system("cls");
                                cout << "\n\t\t\t| SMS XABARNOMA YOQISH UCHUN TELEFON RAQAMINI KIRITING!|"<<endl<<endl;
                                cout << "  | TELEFON RAQAM: +998";cin >>telraqam;
                                system("cls");


                                if(telraqam>99999999 && telraqam<1000000000){
                                    cout << "\n\t\t\t| ILTIMOS KUTING..|"<<endl<<endl;
                                    Sleep(2000);
                                    system("cls");
                                    CAse2_1:
                                    cout << "\n\t\t\t| SIZGA SMS ORQALI 4 XONALI TASDIQLASH KODI YUBORILDI!|"<<endl<<endl;
                                    cout << "  | ILTIMOS YUBORILGAN KODNI KIRITING: ";cin >>kod_check;
                                    if (kod_check == smskod) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| SMS XABARNOMA MUVAFFAQIYATLI YOQILDI!|";
                                        Sleep(2000);
                                        cout<<"\n\n | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh1;}
                                        else if (yana == 0) {return 0;}
                                    }//kod togri
                                    else if (kod_check != smskod) {
                                        cout << "\n\n XATOLIK, KODNI QAYTADAN KIRITING!|";
                                        Sleep(2000);
                                        system("cls");
                                        goto CAse2_1;
                                    }//kodcheck xato
                                }//TEL RAQAM TOGRI
                                else {
                                    cout << "\n\n XATOLIK, TELEFON RAQAMNI QAYTADAN KIRITING!|";
                                    Sleep(2000);
                                    system("cls");
                                    goto Case2;
                                }//xato raqam
                                break;} //CASE 2 YOQISH

                            case 3: { goto bosh_menyu; break;}
                            default: {
                                cout<<"\n\n\t\t\t| HURMATLI MIJOZ, ILTIMOS RAQAMNI QAYTADAN KIRITING! |";
                                Sleep(2000);
                                goto bosh1; break;
                            }

                        }// SWITC SMS XABARNOMA

                        break;} // 7. SMS xabarnoma

                    case 8: { // PIN KODNI O'ZGARTIRISH
                        pin_ozg:
                        int pincheck;
                        system("cls");
                        cout << "\n\t\t\t| PLASTIK KARTA PIN KODINI O'ZGARTIRISH MENYUSI|";
                        cout << "\n\n\n  | PLASTIK KARTANING HOZIRGI PIN KODINI KIRITING: ", cin>>pincheck;
                        cout << "\n\n  | YANGI 4 XONALI PIN KODNI KIRITING: ", cin>>pinchange_1;
                        cout << "\n  | YANGI PIN KODNI QAYTA KIRITING: ", cin>>pinchange_2;
                        if ( Parol == pincheck && pinchange_1 == pinchange_2 && pinchange_1 >999 && pinchange_1<10000 ) {
                            Parol = pinchange_1;
                            cout <<"\n\n\n\t\t\t   | PIN KOD MUVAFFAQIYATLI O'ZGARTIRILDI!|";
                            Sleep(1500);
                            cout<<"\n\n | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana_b;
                            if (yana_b) {goto bosh_menyu;}
                            else if (yana_b == 0){ goto rahmat;}
                        }else{
                            cout << "\n\n  | XATOLIK QAYTADAN URINIB KO'RING!|";
                            Sleep(2000);
                            goto pin_ozg;
                        }

                        break;} // 7. Pin kodni ozgartirish

                    default: { //BOSH MENYU XATOLIK
                        cout << "\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                        Sleep(2500);
                        goto bosh_menyu; break;}
                }//o'zbek tili bosh menyu switch

            } // parol togri kirilsa

            break;}
        case 2: { break;} // English
        case 3: { break;} // Russian
        default: { cout << "\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
            Sleep(2500);
            goto Language; break;}
    } //switch TIL uchun

    rahmat:
    system("cls");
    cout<<"\n\n\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________________________ "<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|         KAPITALBANK XIZMATLARIDAN          |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|       FOYDALANGANINGIZ UCHUN RAHMAT!       |"<<endl;
    cout<<"\t\t\t\t\t|____________________________________________| \n\n\n\n\n\n\n\n\n\n"<<endl;

    return 0;
}
#include <iostream>
#include <zconf.h>
// slipni kichkinadas yozing





using namespace std;

int main()
{
    system("color F1");
    Start:

    cout<<"\n\n\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________________________ "<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|   KAPITALBANK BANKOMATIGA HUSH KELIBSIZ!   |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|        WELCOME TO KAPITALBANK ATM!         |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|____________________________________________|"<<endl;
    cout<<"\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________________________ "<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|     ILTIMOS PLASTIK KARTANI KIRITING!      |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|         PLEASE INSERT YOUR CARD!           |"<<endl;
    cout<<"\t\t\t\t\t|____________________________________________|"<<endl;
    int next;
    cin>>next;
    if (next) {
        system("cls");
        cout<<"\n\n\n"<<endl;
        cout<<"\t\t\t\t\t | Ma'lumotlar yuklanmoqda... |"<<endl;
        sleep(2000);
        system("cls");}
    // Bismillah. Tilni tanlash
    Language:
    int balans = 1500000,Parol = 7777, Enter_Parol, pinchange_1, pinchange_2, limit = 3, yana_b;
    system("cls");
    cout<<"\t\t\t\t\t ____________________________ "<<endl;
    cout<<"\t\t\t\t\t|                            |"<<endl;
    cout<<"\t\t\t\t\t|       1. O'ZBEKCHA         |"<<endl;
    cout<<"\t\t\t\t\t|____________________________|"<<endl;
    cout<<"\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________ "<<endl;
    cout<<"\t\t\t\t\t|                            |"<<endl;
    cout<<"\t\t\t\t\t|        2. ENGLISH          |"<<endl;
    cout<<"\t\t\t\t\t|____________________________|"<<endl;
    cout<<"\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________ "<<endl;
    cout<<"\t\t\t\t\t|                            |"<<endl;
    cout<<"\t\t\t\t\t|        3. RUSCHA           |"<<endl;
    cout<<"\t\t\t\t\t|____________________________|"<<endl;
    cout<<"\n"<<endl;
    int til;
    cout<<"  Tilni tanlang | Choose language : ";
    cin>>til;
    switch (til) {
        Case1:
        case 1: { // UZBEK TILI
            system("cls");
            cout<<"\n\n\n"<<endl;
            cout<<" "<<endl;
            cout<<"\t\t\t\t\t |4 RAQAMLI PIN KODNI KIRITING|"<<endl;
            cout<<"\t\t\t\t\t            >>>| ", cin >> Enter_Parol;

            if(Enter_Parol != Parol){
                cout<<"\t\t\t\t\t        NOTO'GRI PIN KOD!";
                limit--;
                sleep (2000);
                system("cls");
                if (limit > 0) { goto Case1;}
                else {  cout<<"\n\n\n"<<endl;
                    cout<<"\t\t|KARTANGIZ BLOCKLANDI. O'ZINGIZ UCHUN YAQIN BO'LGAN BANK FILIALIGA MUROJAAT QILING!|";
                    cout<<"\n\n\n"<<endl;
                    return 0;}

            } //xato parol uchun
            else {
                bosh_menyu:
                sleep (1000);
                system("cls");
                cout<<"\n"<<endl;
                cout<<"\t\t                             | BOSH MENYU: | " <<endl<<endl;
                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  1. BALANSNI TEKSHIRISH       | \t|  5. MOBIL ALOQA UCHUN TO'LOV  |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n";
                cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  2. NAQD PUL OLISH            | \t|  6. KOMMUNAL TO'LOVLAR        |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n";
                cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  3. HISOBNI TOLDIRISH         | \t|  7. SMS HABARNOMA YOQISH      |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n";
                cout<<"\t\t _______________________________  \t _______________________________"<<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  4. KARTAGA PUL O'TKAZISH     | \t|  8. PIN KODNI O'ZGARTIRISH    |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n\n";
                int amaliyot;
                cout<<" |BOSH MENYUDAN AMALIYOTNI TANGLANG: "; cin>>amaliyot;
                switch (amaliyot){

                    case 1: { // HISOBNI TEKSHIRISH MENYUSI
                        system("cls");
                        cout << "\n\n\t\t\t| HOZIRDA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                        sleep(3000);
                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana_b;
                        if (yana_b) {goto bosh_menyu;}
                        else if (yana_b == 0){ goto rahmat;}
                        break;}//balansni tekshirish case 1

                    case 2: { // NAQD PUL OLISH MENYUSI ==> JAVOHIR
                        int npo, s, summa, yana;
                        int kmiqdor;
                        bow:
                        system("cls");

                        cout<<"\n"<<endl;
                        cout<<"\t\t                 | NAQD PUL MABLAGLARINI YECHIB OLISH: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (1) 100 000            | \t|        (2) 200 000            |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (3) 400 000            | \t|        (4) 800 000            |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (5) 1000 000           | \t|        (6) BOSHQA MIQDOR      |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t                    _______________________________ " <<endl;
                        cout<<"\t\t                   |                               | "<<endl;
                        cout<<"\t\t                   |     (7) ORTGA QAYTISH         | "<<endl;
                        cout<<"\t\t                   |_______________________________| "<<endl;
                        cout<<"\n\n";
                        cout << "\t\t\t| HOZIRDA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                        cout << "| KERAKLI MIQDORNI TANLANG (XIZMAT HAQQI 1%):", cin >> summa;

                        system ("cls");
                        nn:
                        switch (summa){
                            case 1: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                sleep(3000);
                                system ("cls");
                                balans = balans - (100000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE1
                            case 2: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                sleep(3000);
                                system ("cls");
                                balans = balans - (200000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE2
                            case 3: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                sleep(3000);
                                system ("cls");
                                balans = balans - (400000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE3
                            case 4: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                sleep(3000);
                                system ("cls");
                                balans = balans - (800000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE4
                            case 5: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                sleep(3000);
                                system ("cls");
                                balans = balans - (1000000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE5
                            case 6: {
                                kerakli:
                                cout << "\n\n\n | HOZIRDA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                                cout<<"\n | KERAKLI MIQDORNI KIRITING: ", cin>>kmiqdor;
                                if (balans < kmiqdor){
                                    cout<<"\n\n\t\t\t| HISOBINGIZDA YETARLI MABLAG' MAVJUD EMAS! |";
                                    sleep(2000);
                                    system ("cls");
                                    goto kerakli; } // not enough money
                                else {
                                    system ("cls");

                                    cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                    sleep(3000);
                                    system ("cls");
                                    balans = balans - (kmiqdor*1.01);
                                    cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                    cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                    sleep(4000);

                                    cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                    cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                    if (yana) goto bow;
                                    else if (yana == 0) return 0;
                                    break;}} //CASE5 -- else
                            default : cout << "\n\t\t\t\t|QAYTADAN URINIB KO'RING!"; sleep (2000); goto bow; break;
                            case 7: { goto bosh_menyu;
                                break;} // ortga qaytish

                        } //swith naqd pul yechish

                        break;} // 2. Naqd pul olish

                    case 3: { // HISOBNI TOLDIRISH MENYUSI ==> JAVOHIR
                        hb:
                        system ("cls");
                        int sum, balans = 1500000;
                        cout << "\t\t\t| HISOB TO'LDIRISH BO'LIMI! |\n\n";
                        cout << " | HISOBINGIZDA " << balans<< " MAVJUD!\n\n" ;
                        cout << " | SUMMANI KIRITING! HIZMAT XAQQI (1%):  " ;
                        cin >> sum;
                        balans = balans + sum * 0.995;
                        system ("cls");
                        cout << "\n\t\t\t| KIRITILGAN MABLAG' QO'SHILMOQDA...\n"<<endl;
                        cout << " | ILTIMOS BIR OZ KUTING!"<<endl;

                        sleep (4000);

                        system("cls");
                        cout << " \t\t\t| KIRITILGAN MABLAG' HISOBINGIZGA QO'SHILDI! |";
                        cout <<"\n\n| HOZIRDA HISOBINGIZDA "<< balans<< " MAVJUD!" << endl;
                        sleep (3000);
                        cout << "\n\n| YANA AMAL BAJARISHNI XOXLAYSIZMI?\n";
                        cout << "1. HA | 2. YO'Q | ";
                        int bbq;
                        cin >> bbq ;
                        cout <<  endl;
                        system("cls");
                        if (bbq == 1)
                        {goto bosh_menyu;}
                        else if (bbq == 2)
                        {system ("cls");
                            goto rahmat;}



                        break;} // 3. Hisobni to'ldirish

                    case 4: { // PUL OTKAZMALARI MENYUSI ==> ASLOMBEK
                        int otkazma, yana;

                        long long kartaraqam,o;
                        int pull;
                        bosh:

                        system("cls");

                        cout<<"\n"<<endl;
                        cout<<"\t\t                   | PUL O'TKAZMALARI BO'LIMI: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (1) UZCARD             | \t|        (2) HUMO               |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t                    _______________________________ "<<endl;
                        cout<<"\t\t                   |                               | "<<endl;
                        cout<<"\t\t                   |     (3) ORTGA QAYTISH         | "<<endl;
                        cout<<"\t\t                   |_______________________________| "<<endl;
                        cout<<"\n\n";
                        cout << "\n\n";
                        cout << "| PUL O'TKAZILAYOTGAN KARTANI TURINI TANLANG (XIZMAT HAQQI 1%):", cin >> pull;
                        system("cls");

                        switch(pull){
                            case 1: {
                                case1:
                                system("cls");
                                cout << " | PUL O'TKAZMOQCHI BO'LGAN KARTA RAQAMINI KIRITING: \n   8600", cin>>kartaraqam;
                                system("cls");
                                if (kartaraqam <= 99999999999 || kartaraqam> 999999999999) {
                                    system("cls");
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    sleep(2000);
                                    goto case1;
                                }//xatolik
                                else {
                                    case1_1:
                                    system("cls");
                                    cout << "\n\n  | KARTA RAQAM EGASI: OCHILOV ASLOMBEK \n ";
                                    cout << " | ESLATIB O'TAMIZ, O'TKAZMALAR UCHUN BANK 1% XIZMAT HAQQI OLADI! \n ";
                                    cout << " | HOZIRDA SIZNING KARTANGIZDAGI PUL  MIQDORI "<<balans<<" UZS \n\n ";
                                    cout << " | O'TKAZMOQCHI BO'LGAN SUMMANI KIRITING: ", cin>>otkazma;
                                    if (balans < (otkazma * 1.01)) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ HISOBINGIZDA YETARLI MABLAG MAVJUD EMAS!|";
                                        sleep(2000);
                                        goto case1_1;
                                    }//balans < otkazma
                                    else {
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH AMALGA OSHIRILMOQDA!|";
                                        sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH MUVAFFAQIYATLI AMALGA OSHIRILDI!|"<<endl;
                                        balans = balans - (otkazma * 1.01);
                                        cout << "\n\n\t\t\t| HISOBINGIZDA "<<balans<<" UZS qoldi | \n\n"<<endl;
                                        sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh;}
                                        else if (yana == 0) {return 0;}

                                    } //balans > otkazma

                                }// to'gribosa

                                break; }//case1 uzcard

                            case 2: {
                                case2:
                                system("cls");
                                cout << " | PUL O'TKAZMOQCHI BO'LGAN KARTA RAQAMINI KIRITING: \n   9860", cin>>kartaraqam;
                                system("cls");
                                if (kartaraqam <= 99999999999 || kartaraqam> 999999999999) {
                                    system("cls");
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    sleep(2000);
                                    goto case2;
                                }//xatolik
                                else {
                                    case2_1:
                                    system("cls");
                                    cout << "\n\n  | KARTA RAQAM EGASI: OCHILOV ASLOMBEK \n ";
                                    cout << " | ESLATIB O'TAMIZ, O'TKAZMALAR UCHUN BANK 1% XIZMAT HAQQI OLADI! \n ";
                                    cout << " | HOZIRDA SIZNING KARTANGIZDAGI PUL  MIQDORI "<<balans<<" UZS \n\n ";
                                    cout << " | O'TKAZMOQCHI BO'LGAN SUMMANI KIRITING: ", cin>>otkazma;
                                    if (balans < (otkazma * 1.01)) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ HISOBINGIZDA YETARLI MABLAG MAVJUD EMAS!|";
                                        sleep(2000);
                                        goto case2_1;
                                    }//balans < otkazma
                                    else {
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH AMALGA OSHIRILMOQDA!|";
                                        sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH MUVAFFAQIYATLI AMALGA OSHIRILDI!|"<<endl;
                                        balans = balans - (otkazma * 1.01);
                                        cout << "\n\n\t\t\t| HISOBINGIZDA "<<balans<<" UZS qoldi | \n\n"<<endl;
                                        sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh;}
                                        else if (yana == 0) {return 0;}

                                    } //balans > otkazma

                                }// to'gribosa

                                break; }//case2 humo

                            case 3: {goto bosh_menyu; break;}

                            default: {
                                system("cls");
                                cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                sleep(2000);
                                goto bosh; break;}//default


                        }//SWITCH pul otkazma

                        break;} // 4. Kartaga pul otqazish

                    case 5: { //MOBIL ALOQA MENYUSI ==> UMIDJON

                        system("cls");
                        int a,b,c, yana;
                        mobil:
                        system("cls");
                        cout<<"\n"<<endl;
                        cout<<"\t\t                  | MOBIL ALOQA UCHUN TO'LOVLAR: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (1) UZMOBILE           | \t|        (2) BEELINE            |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (3) UCELL              | \t|        (4) MOBIUZ             |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (5) HUMANS             | \t|        (6) ORTGA QAYTISH      |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout << "\t\t\t| HOZIRDA KARTA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                        cout << "| MOBIL OPERATORNI TANLANG:", cin >> a;
                        system("cls");


                        switch (a){
                            case 1:{
                                raqam1:
                                system("cls");
                                cout << "\t\t\t| UZMOBILE OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(99)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        sleep(2000);
                                        goto raqam1;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    sleep(2500);
                                    goto raqam1;}
                                break; }//uzmobile case 1

                            case 2:{
                                raqam2:
                                system("cls");
                                cout << "\t\t\t| BEELINE OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(90)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        sleep(2000);
                                        goto raqam2;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    sleep(2500);
                                    goto raqam2;}
                                break; }//BEELINE case 2


                            case 3:{
                                raqam3:
                                system("cls");
                                cout << "\t\t\t| UCELL OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(93)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        sleep(2000);
                                        goto raqam3;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    sleep(2500);
                                    goto raqam3;}
                                break; }//UCELL case 3

                            case 4:{
                                raqam4:
                                system("cls");
                                cout << "\t\t\t| MOBIUZ OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(97)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        sleep(2000);
                                        goto raqam4;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    sleep(2500);
                                    goto raqam4;}
                                break; }//MOBIUZ case 4

                            case 5:{
                                raqam5:
                                system("cls");
                                cout << "\t\t\t| HUMANS OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(33)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        sleep(2000);
                                        goto raqam5;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    sleep(2500);
                                    goto raqam5;}
                                break; }//HUMANS case 5

                            case 6: { goto bosh_menyu; break;}

                            default: {
                                system("cls");
                                cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                sleep(2000);
                                goto mobil; break;
                            }//default
                        }//switch mobil aloqa menu
                    } // case 5 mobil aloqa

                    case 6: { //KOMMUNAL TO'LOVLAR BO'LIMI ==> MUHAMMAD
                        int komunal;
                        int gazb = 50000, elektrb = 70000, issiqb = 60000, sovuqb = 80000, chiqindib = 20000;
                        int temirovhr = 1234567;
                        kmnl: // orqa qaytish
                        system("cls");
                        cout<<"\n"<<endl;
                        cout<<"\t\t                     | KOMMUNAL TO'LOVLAR BO'LIMI: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  1. ELEKTR ENERGIYASI         | \t|  2. ISSIQ SUV                 |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  3. SOVUQ SUV                 | \t|  4. CHIQINDI                  |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  5. TABIIY GAZ                | \t|  6. ORTGA QAYTISH             |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\n\n";

                        cout<<" |KERAKLI BO'LIMNI TANLANG: "; cin>>komunal;
                        system("cls");

                        //Komunal bo'lim.......

                        switch (komunal){
                            case 1 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                     | ELEKTR ENERGIYA BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI BO'LIMNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    sleep (1000);
                                    system("cls");
                                    goto Hisobr;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<elektrb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1Kv= 2000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    sleep (1000);
                                    elektrb = kv +elektrb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << elektrb << " so'm"<<endl<<endl;
                                    sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}}
                                    default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;
                                } //hisob raqam to'gri kiritilsa
                            } //  case 1 elektr energiyasi

                            case 2 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | ISSIQ SUV BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr2 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    sleep (1000);
                                    system("cls");
                                    goto Hisobr2;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<issiqb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1M Kub ISSIQ SUV = 3000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    sleep (1000);
                                    issiqb = kv +issiqb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << issiqb << " so'm"<<endl<<endl;
                                    sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 2 Issiq suv

                            case 3 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | SOVUQ SUV BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr3 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    sleep (1000);
                                    system("cls");
                                    goto Hisobr3;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<sovuqb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1M Kub SOVUQ SUV = 1000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    sleep (1000);
                                    sovuqb = kv +sovuqb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << sovuqb << " so'm"<<endl<<endl;
                                    sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 3 SOVUQ suv

                            case 4 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | CHIQINDI BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr4 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    sleep (1000);
                                    system("cls");
                                    goto Hisobr4;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<issiqb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz chiqindiga 1 oylik to'lov  = 30000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    sleep (1000);
                                    chiqindib = kv +chiqindib;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << chiqindib << " so'm"<<endl<<endl;
                                    sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 4  chiqindi

                            case 5 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | TABIIY GAZ BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr5 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    sleep (1000);
                                    system("cls");
                                    goto Hisobr5;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<gazb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1 Kub m Tabiiy gaz = 1500 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    sleep (1000);
                                    gazb = kv +gazb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << gazb << " so'm"<<endl<<endl;
                                    sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 6 TABBIY GAZ
                            case 6: { goto bosh_menyu; break;}


                        } // kommunal menyu

                        break;} // 6. Kommnal to'lovlar

                    case 7: { // SMS XABARNOMA ==> ASLOMBEK
                        int k,p,telraqam,m, smskod = 7777, kod_check, yana;
                        bosh1:
                        system("cls");

                        cout<<"\n"<<endl;
                        cout<<"\t\t                   | PUL O'TKAZMALARI BO'LIMI: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  (1) SMS XABARNOMA O'CHIRISH  | \t|  (2) SMS XABARNOMA YOQISH     |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t                    _______________________________ "<<endl;
                        cout<<"\t\t                   |                               | "<<endl;
                        cout<<"\t\t                   |     (3) ORTGA QAYTISH         | "<<endl;
                        cout<<"\t\t                   |_______________________________| "<<endl;
                        cout<<"\n\n";
                        cout << "\n\n";
                        cout << "| KERAKLI AMALIYOTNI TANLANG:", cin >> k;
                        system("cls");

                        switch (k){
                            case 1:{
                                Case1_:
                                system("cls");
                                cout << "\n\t\t\t| SMS XABARNOMA O'CHIRILADIGAN TELEFON RAQAMINI KIRITING!|"<<endl<<endl;
                                cout << "  | TELEFON RAQAM: +998";cin >>telraqam;
                                system("cls");


                                if(telraqam>99999999 && telraqam<1000000000){
                                    cout << "\n\t\t\t| ILTIMOS KUTING..|"<<endl<<endl;
                                    sleep(2000);
                                    system("cls");
                                    CAse1_1:
                                    cout << "\n\t\t\t| SIZGA SMS ORQALI 4 XONALI TASDIQLASH KODI YUBORILDI!|"<<endl<<endl;
                                    cout << "  | ILTIMOS YUBORILGAN KODNI KIRITING: ";cin >>kod_check;
                                    if (kod_check == smskod) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| SMS XABARNOMA MUVAFFAQIYATLI O'CHIRILDI!|";
                                        sleep(2000);
                                        cout<<"\n\n | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh1;}
                                        else if (yana == 0) {return 0;}
                                    }//kod togri
                                    else if (kod_check != smskod) {
                                        cout << "\n\n XATOLIK, KODNI QAYTADAN KIRITING!|";
                                        sleep(2000);
                                        system("cls");
                                        goto CAse1_1;
                                    }//kodcheck xato
                                }//TEL RAQAM TOGRI
                                else {
                                    cout << "\n\n XATOLIK, TELEFON RAQAMNI QAYTADAN KIRITING!|";
                                    sleep(2000);
                                    system("cls");
                                    goto Case1_;
                                }//xato raqam
                                break;} //CASE 1 OCHIRISH

                            case 2:{
                                Case2:
                                system("cls");
                                cout << "\n\t\t\t| SMS XABARNOMA YOQISH UCHUN TELEFON RAQAMINI KIRITING!|"<<endl<<endl;
                                cout << "  | TELEFON RAQAM: +998";cin >>telraqam;
                                system("cls");


                                if(telraqam>99999999 && telraqam<1000000000){
                                    cout << "\n\t\t\t| ILTIMOS KUTING..|"<<endl<<endl;
                                    sleep(2000);
                                    system("cls");
                                    CAse2_1:
                                    cout << "\n\t\t\t| SIZGA SMS ORQALI 4 XONALI TASDIQLASH KODI YUBORILDI!|"<<endl<<endl;
                                    cout << "  | ILTIMOS YUBORILGAN KODNI KIRITING: ";cin >>kod_check;
                                    if (kod_check == smskod) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| SMS XABARNOMA MUVAFFAQIYATLI YOQILDI!|";
                                        sleep(2000);
                                        cout<<"\n\n | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh1;}
                                        else if (yana == 0) {return 0;}
                                    }//kod togri
                                    else if (kod_check != smskod) {
                                        cout << "\n\n XATOLIK, KODNI QAYTADAN KIRITING!|";
                                        sleep(2000);
                                        system("cls");
                                        goto CAse2_1;
                                    }//kodcheck xato
                                }//TEL RAQAM TOGRI
                                else {
                                    cout << "\n\n XATOLIK, TELEFON RAQAMNI QAYTADAN KIRITING!|";
                                    sleep(2000);
                                    system("cls");
                                    goto Case2;
                                }//xato raqam
                                break;} //CASE 2 YOQISH

                            case 3: { goto bosh_menyu; break;}
                            default: {
                                cout<<"\n\n\t\t\t| HURMATLI MIJOZ, ILTIMOS RAQAMNI QAYTADAN KIRITING! |";
                                sleep(2000);
                                goto bosh1; break;
                            }

                        }// SWITC SMS XABARNOMA

                        break;} // 7. SMS xabarnoma

                    case 8: { // PIN KODNI O'ZGARTIRISH
                        pin_ozg:
                        int pincheck;
                        system("cls");
                        cout << "\n\t\t\t| PLASTIK KARTA PIN KODINI O'ZGARTIRISH MENYUSI|";
                        cout << "\n\n\n  | PLASTIK KARTANING HOZIRGI PIN KODINI KIRITING: ", cin>>pincheck;
                        cout << "\n\n  | YANGI 4 XONALI PIN KODNI KIRITING: ", cin>>pinchange_1;
                        cout << "\n  | YANGI PIN KODNI QAYTA KIRITING: ", cin>>pinchange_2;
                        if ( Parol == pincheck && pinchange_1 == pinchange_2 && pinchange_1 >999 && pinchange_1<10000 ) {
                            Parol = pinchange_1;
                            cout <<"\n\n\n\t\t\t   | PIN KOD MUVAFFAQIYATLI O'ZGARTIRILDI!|";
                            sleep(1500);
                            cout<<"\n\n | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana_b;
                            if (yana_b) {goto bosh_menyu;}
                            else if (yana_b == 0){ goto rahmat;}
                        }else{
                            cout << "\n\n  | XATOLIK QAYTADAN URINIB KO'RING!|";
                            sleep(2000);
                            goto pin_ozg;
                        }

                        break;} // 7. Pin kodni ozgartirish

                    default: { //BOSH MENYU XATOLIK
                        cout << "\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                        sleep(2500);
                        goto bosh_menyu; break;}
                }//o'zbek tili bosh menyu switch

            } // parol togri kirilsa

            break;}
        case 2: { break;} // English
        case 3: { break;} // Russian
        default: { cout << "\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
            sleep(2500);
            goto Language; break;}
    } //switch TIL uchun

    rahmat:
    system("cls");
    cout<<"\n\n\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________________________ "<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|         KAPITALBANK XIZMATLARIDAN          |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|       FOYDALANGANINGIZ UCHUN RAHMAT!       |"<<endl;
    cout<<"\t\t\t\t\t|____________________________________________| \n\n\n\n\n\n\n\n\n\n"<<endl;

    return 0;
}
#include <iostream>
#include <zconf.h>





using namespace std;

int main()
{
    system("color F1");
    Start:

    cout<<"\n\n\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________________________ "<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|   KAPITALBANK BANKOMATIGA HUSH KELIBSIZ!   |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|        WELCOME TO KAPITALBANK ATM!         |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|____________________________________________|"<<endl;
    cout<<"\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________________________ "<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|     ILTIMOS PLASTIK KARTANI KIRITING!      |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|         PLEASE INSERT YOUR CARD!           |"<<endl;
    cout<<"\t\t\t\t\t|____________________________________________|"<<endl;
    int next;
    cin>>next;
    if (next) {
        system("cls");
        cout<<"\n\n\n"<<endl;
        cout<<"\t\t\t\t\t | Ma'lumotlar yuklanmoqda... |"<<endl;
        Sleep(2000);
        system("cls");}
    // Bismillah. Tilni tanlash
    Language:
    int balans = 1500000,Parol = 7777, Enter_Parol, pinchange_1, pinchange_2, limit = 3, yana_b;
    system("cls");
    cout<<"\t\t\t\t\t ____________________________ "<<endl;
    cout<<"\t\t\t\t\t|                            |"<<endl;
    cout<<"\t\t\t\t\t|       1. O'ZBEKCHA         |"<<endl;
    cout<<"\t\t\t\t\t|____________________________|"<<endl;
    cout<<"\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________ "<<endl;
    cout<<"\t\t\t\t\t|                            |"<<endl;
    cout<<"\t\t\t\t\t|        2. ENGLISH          |"<<endl;
    cout<<"\t\t\t\t\t|____________________________|"<<endl;
    cout<<"\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________ "<<endl;
    cout<<"\t\t\t\t\t|                            |"<<endl;
    cout<<"\t\t\t\t\t|        3. RUSCHA           |"<<endl;
    cout<<"\t\t\t\t\t|____________________________|"<<endl;
    cout<<"\n"<<endl;
    int til;
    cout<<"  Tilni tanlang | Choose language : ";
    cin>>til;
    switch (til) {
        Case1:
        case 1: { // UZBEK TILI
            system("cls");
            cout<<"\n\n\n"<<endl;
            cout<<" "<<endl;
            cout<<"\t\t\t\t\t |4 RAQAMLI PIN KODNI KIRITING|"<<endl;
            cout<<"\t\t\t\t\t            >>>| ", cin >> Enter_Parol;

            if(Enter_Parol != Parol){
                cout<<"\t\t\t\t\t        NOTO'GRI PIN KOD!";
                limit--;
                Sleep (2000);
                system("cls");
                if (limit > 0) { goto Case1;}
                else {  cout<<"\n\n\n"<<endl;
                    cout<<"\t\t|KARTANGIZ BLOCKLANDI. O'ZINGIZ UCHUN YAQIN BO'LGAN BANK FILIALIGA MUROJAAT QILING!|";
                    cout<<"\n\n\n"<<endl;
                    return 0;}

            } //xato parol uchun
            else {
                bosh_menyu:
                Sleep (1000);
                system("cls");
                cout<<"\n"<<endl;
                cout<<"\t\t                             | BOSH MENYU: | " <<endl<<endl;
                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  1. BALANSNI TEKSHIRISH       | \t|  5. MOBIL ALOQA UCHUN TO'LOV  |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n";
                cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  2. NAQD PUL OLISH            | \t|  6. KOMMUNAL TO'LOVLAR        |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n";
                cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  3. HISOBNI TOLDIRISH         | \t|  7. SMS HABARNOMA YOQISH      |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n";
                cout<<"\t\t _______________________________  \t _______________________________"<<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  4. KARTAGA PUL O'TKAZISH     | \t|  8. PIN KODNI O'ZGARTIRISH    |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n\n";
                int amaliyot;
                cout<<" |BOSH MENYUDAN AMALIYOTNI TANGLANG: "; cin>>amaliyot;
                switch (amaliyot){

                    case 1: { // HISOBNI TEKSHIRISH MENYUSI
                        system("cls");
                        cout << "\n\n\t\t\t| HOZIRDA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                        Sleep(3000);
                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana_b;
                        if (yana_b) {goto bosh_menyu;}
                        else if (yana_b == 0){ goto rahmat;}
                        break;}//balansni tekshirish case 1

                    case 2: { // NAQD PUL OLISH MENYUSI ==> JAVOHIR
                        int npo, s, summa, yana;
                        int kmiqdor;
                        bow:
                        system("cls");

                        cout<<"\n"<<endl;
                        cout<<"\t\t                 | NAQD PUL MABLAGLARINI YECHIB OLISH: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (1) 100 000            | \t|        (2) 200 000            |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (3) 400 000            | \t|        (4) 800 000            |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (5) 1000 000           | \t|        (6) BOSHQA MIQDOR      |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t                    _______________________________ " <<endl;
                        cout<<"\t\t                   |                               | "<<endl;
                        cout<<"\t\t                   |     (7) ORTGA QAYTISH         | "<<endl;
                        cout<<"\t\t                   |_______________________________| "<<endl;
                        cout<<"\n\n";
                        cout << "\t\t\t| HOZIRDA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                        cout << "| KERAKLI MIQDORNI TANLANG (XIZMAT HAQQI 1%):", cin >> summa;

                        system ("cls");
                        nn:
                        switch (summa){
                            case 1: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                Sleep(3000);
                                system ("cls");
                                balans = balans - (100000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                Sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE1
                            case 2: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                Sleep(3000);
                                system ("cls");
                                balans = balans - (200000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                Sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE2
                            case 3: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                Sleep(3000);
                                system ("cls");
                                balans = balans - (400000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                Sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE3
                            case 4: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                Sleep(3000);
                                system ("cls");
                                balans = balans - (800000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                Sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE4
                            case 5: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                Sleep(3000);
                                system ("cls");
                                balans = balans - (1000000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                Sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE5
                            case 6: {
                                kerakli:
                                cout << "\n\n\n | HOZIRDA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                                cout<<"\n | KERAKLI MIQDORNI KIRITING: ", cin>>kmiqdor;
                                if (balans < kmiqdor){
                                    cout<<"\n\n\t\t\t| HISOBINGIZDA YETARLI MABLAG' MAVJUD EMAS! |";
                                    Sleep(2000);
                                    system ("cls");
                                    goto kerakli; } // not enough money
                                else {
                                    system ("cls");

                                    cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                    Sleep(3000);
                                    system ("cls");
                                    balans = balans - (kmiqdor*1.01);
                                    cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                    cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                    Sleep(4000);

                                    cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                    cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                    if (yana) goto bow;
                                    else if (yana == 0) return 0;
                                    break;}} //CASE5 -- else
                            default : cout << "\n\t\t\t\t|QAYTADAN URINIB KO'RING!"; Sleep (2000); goto bow; break;
                            case 7: { goto bosh_menyu;
                                break;} // ortga qaytish

                        } //swith naqd pul yechish

                        break;} // 2. Naqd pul olish

                    case 3: { // HISOBNI TOLDIRISH MENYUSI ==> JAVOHIR
                        hb:
                        system ("cls");
                        int sum, balans = 1500000;
                        cout << "\t\t\t| HISOB TO'LDIRISH BO'LIMI! |\n\n";
                        cout << " | HISOBINGIZDA " << balans<< " MAVJUD!\n\n" ;
                        cout << " | SUMMANI KIRITING! HIZMAT XAQQI (1%):  " ;
                        cin >> sum;
                        balans = balans + sum * 0.995;
                        system ("cls");
                        cout << "\n\t\t\t| KIRITILGAN MABLAG' QO'SHILMOQDA...\n"<<endl;
                        cout << " | ILTIMOS BIR OZ KUTING!"<<endl;

                        Sleep (4000);

                        system("cls");
                        cout << " \t\t\t| KIRITILGAN MABLAG' HISOBINGIZGA QO'SHILDI! |";
                        cout <<"\n\n| HOZIRDA HISOBINGIZDA "<< balans<< " MAVJUD!" << endl;
                        Sleep (3000);
                        cout << "\n\n| YANA AMAL BAJARISHNI XOXLAYSIZMI?\n";
                        cout << "1. HA | 2. YO'Q | ";
                        int bbq;
                        cin >> bbq ;
                        cout <<  endl;
                        system("cls");
                        if (bbq == 1)
                        {goto bosh_menyu;}
                        else if (bbq == 2)
                        {system ("cls");
                            goto rahmat;}



                        break;} // 3. Hisobni to'ldirish

                    case 4: { // PUL OTKAZMALARI MENYUSI ==> ASLOMBEK
                        int otkazma, yana;

                        long long kartaraqam,o;
                        int pull;
                        bosh:

                        system("cls");

                        cout<<"\n"<<endl;
                        cout<<"\t\t                   | PUL O'TKAZMALARI BO'LIMI: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (1) UZCARD             | \t|        (2) HUMO               |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t                    _______________________________ "<<endl;
                        cout<<"\t\t                   |                               | "<<endl;
                        cout<<"\t\t                   |     (3) ORTGA QAYTISH         | "<<endl;
                        cout<<"\t\t                   |_______________________________| "<<endl;
                        cout<<"\n\n";
                        cout << "\n\n";
                        cout << "| PUL O'TKAZILAYOTGAN KARTANI TURINI TANLANG (XIZMAT HAQQI 1%):", cin >> pull;
                        system("cls");

                        switch(pull){
                            case 1: {
                                case1:
                                system("cls");
                                cout << " | PUL O'TKAZMOQCHI BO'LGAN KARTA RAQAMINI KIRITING: \n   8600", cin>>kartaraqam;
                                system("cls");
                                if (kartaraqam <= 99999999999 || kartaraqam> 999999999999) {
                                    system("cls");
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2000);
                                    goto case1;
                                }//xatolik
                                else {
                                    case1_1:
                                    system("cls");
                                    cout << "\n\n  | KARTA RAQAM EGASI: OCHILOV ASLOMBEK \n ";
                                    cout << " | ESLATIB O'TAMIZ, O'TKAZMALAR UCHUN BANK 1% XIZMAT HAQQI OLADI! \n ";
                                    cout << " | HOZIRDA SIZNING KARTANGIZDAGI PUL  MIQDORI "<<balans<<" UZS \n\n ";
                                    cout << " | O'TKAZMOQCHI BO'LGAN SUMMANI KIRITING: ", cin>>otkazma;
                                    if (balans < (otkazma * 1.01)) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ HISOBINGIZDA YETARLI MABLAG MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto case1_1;
                                    }//balans < otkazma
                                    else {
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH AMALGA OSHIRILMOQDA!|";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH MUVAFFAQIYATLI AMALGA OSHIRILDI!|"<<endl;
                                        balans = balans - (otkazma * 1.01);
                                        cout << "\n\n\t\t\t| HISOBINGIZDA "<<balans<<" UZS qoldi | \n\n"<<endl;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh;}
                                        else if (yana == 0) {return 0;}

                                    } //balans > otkazma

                                }// to'gribosa

                                break; }//case1 uzcard

                            case 2: {
                                case2:
                                system("cls");
                                cout << " | PUL O'TKAZMOQCHI BO'LGAN KARTA RAQAMINI KIRITING: \n   9860", cin>>kartaraqam;
                                system("cls");
                                if (kartaraqam <= 99999999999 || kartaraqam> 999999999999) {
                                    system("cls");
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2000);
                                    goto case2;
                                }//xatolik
                                else {
                                    case2_1:
                                    system("cls");
                                    cout << "\n\n  | KARTA RAQAM EGASI: OCHILOV ASLOMBEK \n ";
                                    cout << " | ESLATIB O'TAMIZ, O'TKAZMALAR UCHUN BANK 1% XIZMAT HAQQI OLADI! \n ";
                                    cout << " | HOZIRDA SIZNING KARTANGIZDAGI PUL  MIQDORI "<<balans<<" UZS \n\n ";
                                    cout << " | O'TKAZMOQCHI BO'LGAN SUMMANI KIRITING: ", cin>>otkazma;
                                    if (balans < (otkazma * 1.01)) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ HISOBINGIZDA YETARLI MABLAG MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto case2_1;
                                    }//balans < otkazma
                                    else {
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH AMALGA OSHIRILMOQDA!|";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH MUVAFFAQIYATLI AMALGA OSHIRILDI!|"<<endl;
                                        balans = balans - (otkazma * 1.01);
                                        cout << "\n\n\t\t\t| HISOBINGIZDA "<<balans<<" UZS qoldi | \n\n"<<endl;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh;}
                                        else if (yana == 0) {return 0;}

                                    } //balans > otkazma

                                }// to'gribosa

                                break; }//case2 humo

                            case 3: {goto bosh_menyu; break;}

                            default: {
                                system("cls");
                                cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                Sleep(2000);
                                goto bosh; break;}//default


                        }//SWITCH pul otkazma

                        break;} // 4. Kartaga pul otqazish

                    case 5: { //MOBIL ALOQA MENYUSI ==> UMIDJON

                        system("cls");
                        int a,b,c, yana;
                        mobil:
                        system("cls");
                        cout<<"\n"<<endl;
                        cout<<"\t\t                  | MOBIL ALOQA UCHUN TO'LOVLAR: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (1) UZMOBILE           | \t|        (2) BEELINE            |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (3) UCELL              | \t|        (4) MOBIUZ             |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (5) HUMANS             | \t|        (6) ORTGA QAYTISH      |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout << "\t\t\t| HOZIRDA KARTA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                        cout << "| MOBIL OPERATORNI TANLANG:", cin >> a;
                        system("cls");


                        switch (a){
                            case 1:{
                                raqam1:
                                system("cls");
                                cout << "\t\t\t| UZMOBILE OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(99)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto raqam1;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2500);
                                    goto raqam1;}
                                break; }//uzmobile case 1

                            case 2:{
                                raqam2:
                                system("cls");
                                cout << "\t\t\t| BEELINE OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(90)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto raqam2;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2500);
                                    goto raqam2;}
                                break; }//BEELINE case 2


                            case 3:{
                                raqam3:
                                system("cls");
                                cout << "\t\t\t| UCELL OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(93)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto raqam3;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2500);
                                    goto raqam3;}
                                break; }//UCELL case 3

                            case 4:{
                                raqam4:
                                system("cls");
                                cout << "\t\t\t| MOBIUZ OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(97)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto raqam4;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2500);
                                    goto raqam4;}
                                break; }//MOBIUZ case 4

                            case 5:{
                                raqam5:
                                system("cls");
                                cout << "\t\t\t| HUMANS OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(33)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto raqam5;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2500);
                                    goto raqam5;}
                                break; }//HUMANS case 5

                            case 6: { goto bosh_menyu; break;}

                            default: {
                                system("cls");
                                cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                Sleep(2000);
                                goto mobil; break;
                            }//default
                        }//switch mobil aloqa menu
                    } // case 5 mobil aloqa

                    case 6: { //KOMMUNAL TO'LOVLAR BO'LIMI ==> MUHAMMAD
                        int komunal;
                        int gazb = 50000, elektrb = 70000, issiqb = 60000, sovuqb = 80000, chiqindib = 20000;
                        int temirovhr = 1234567;
                        kmnl: // orqa qaytish
                        system("cls");
                        cout<<"\n"<<endl;
                        cout<<"\t\t                     | KOMMUNAL TO'LOVLAR BO'LIMI: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  1. ELEKTR ENERGIYASI         | \t|  2. ISSIQ SUV                 |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  3. SOVUQ SUV                 | \t|  4. CHIQINDI                  |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  5. TABIIY GAZ                | \t|  6. ORTGA QAYTISH             |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\n\n";

                        cout<<" |KERAKLI BO'LIMNI TANLANG: "; cin>>komunal;
                        system("cls");

                        //Komunal bo'lim.......

                        switch (komunal){
                            case 1 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                     | ELEKTR ENERGIYA BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI BO'LIMNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                Sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    Sleep (1000);
                                    system("cls");
                                    goto Hisobr;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<elektrb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1Kv= 2000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    Sleep (1000);
                                    elektrb = kv +elektrb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << elektrb << " so'm"<<endl<<endl;
                                    Sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}}
                                    default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;
                                } //hisob raqam to'gri kiritilsa
                            } //  case 1 elektr energiyasi

                            case 2 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | ISSIQ SUV BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr2 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                Sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    Sleep (1000);
                                    system("cls");
                                    goto Hisobr2;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<issiqb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1M Kub ISSIQ SUV = 3000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    Sleep (1000);
                                    issiqb = kv +issiqb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << issiqb << " so'm"<<endl<<endl;
                                    Sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 2 Issiq suv

                            case 3 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | SOVUQ SUV BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr3 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                Sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    Sleep (1000);
                                    system("cls");
                                    goto Hisobr3;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<sovuqb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1M Kub SOVUQ SUV = 1000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    Sleep (1000);
                                    sovuqb = kv +sovuqb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << sovuqb << " so'm"<<endl<<endl;
                                    Sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 3 SOVUQ suv

                            case 4 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | CHIQINDI BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr4 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                Sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    Sleep (1000);
                                    system("cls");
                                    goto Hisobr4;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<issiqb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz chiqindiga 1 oylik to'lov  = 30000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    Sleep (1000);
                                    chiqindib = kv +chiqindib;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << chiqindib << " so'm"<<endl<<endl;
                                    Sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 4  chiqindi

                            case 5 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | TABIIY GAZ BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr5 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                Sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    Sleep (1000);
                                    system("cls");
                                    goto Hisobr5;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<gazb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1 Kub m Tabiiy gaz = 1500 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    Sleep (1000);
                                    gazb = kv +gazb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << gazb << " so'm"<<endl<<endl;
                                    Sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 6 TABBIY GAZ
                            case 6: { goto bosh_menyu; break;}


                        } // kommunal menyu

                        break;} // 6. Kommnal to'lovlar

                    case 7: { // SMS XABARNOMA ==> ASLOMBEK
                        int k,p,telraqam,m, smskod = 7777, kod_check, yana;
                        bosh1:
                        system("cls");

                        cout<<"\n"<<endl;
                        cout<<"\t\t                   | PUL O'TKAZMALARI BO'LIMI: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  (1) SMS XABARNOMA O'CHIRISH  | \t|  (2) SMS XABARNOMA YOQISH     |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t                    _______________________________ "<<endl;
                        cout<<"\t\t                   |                               | "<<endl;
                        cout<<"\t\t                   |     (3) ORTGA QAYTISH         | "<<endl;
                        cout<<"\t\t                   |_______________________________| "<<endl;
                        cout<<"\n\n";
                        cout << "\n\n";
                        cout << "| KERAKLI AMALIYOTNI TANLANG:", cin >> k;
                        system("cls");

                        switch (k){
                            case 1:{
                                Case1_:
                                system("cls");
                                cout << "\n\t\t\t| SMS XABARNOMA O'CHIRILADIGAN TELEFON RAQAMINI KIRITING!|"<<endl<<endl;
                                cout << "  | TELEFON RAQAM: +998";cin >>telraqam;
                                system("cls");


                                if(telraqam>99999999 && telraqam<1000000000){
                                    cout << "\n\t\t\t| ILTIMOS KUTING..|"<<endl<<endl;
                                    Sleep(2000);
                                    system("cls");
                                    CAse1_1:
                                    cout << "\n\t\t\t| SIZGA SMS ORQALI 4 XONALI TASDIQLASH KODI YUBORILDI!|"<<endl<<endl;
                                    cout << "  | ILTIMOS YUBORILGAN KODNI KIRITING: ";cin >>kod_check;
                                    if (kod_check == smskod) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| SMS XABARNOMA MUVAFFAQIYATLI O'CHIRILDI!|";
                                        Sleep(2000);
                                        cout<<"\n\n | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh1;}
                                        else if (yana == 0) {return 0;}
                                    }//kod togri
                                    else if (kod_check != smskod) {
                                        cout << "\n\n XATOLIK, KODNI QAYTADAN KIRITING!|";
                                        Sleep(2000);
                                        system("cls");
                                        goto CAse1_1;
                                    }//kodcheck xato
                                }//TEL RAQAM TOGRI
                                else {
                                    cout << "\n\n XATOLIK, TELEFON RAQAMNI QAYTADAN KIRITING!|";
                                    Sleep(2000);
                                    system("cls");
                                    goto Case1_;
                                }//xato raqam
                                break;} //CASE 1 OCHIRISH

                            case 2:{
                                Case2:
                                system("cls");
                                cout << "\n\t\t\t| SMS XABARNOMA YOQISH UCHUN TELEFON RAQAMINI KIRITING!|"<<endl<<endl;
                                cout << "  | TELEFON RAQAM: +998";cin >>telraqam;
                                system("cls");


                                if(telraqam>99999999 && telraqam<1000000000){
                                    cout << "\n\t\t\t| ILTIMOS KUTING..|"<<endl<<endl;
                                    Sleep(2000);
                                    system("cls");
                                    CAse2_1:
                                    cout << "\n\t\t\t| SIZGA SMS ORQALI 4 XONALI TASDIQLASH KODI YUBORILDI!|"<<endl<<endl;
                                    cout << "  | ILTIMOS YUBORILGAN KODNI KIRITING: ";cin >>kod_check;
                                    if (kod_check == smskod) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| SMS XABARNOMA MUVAFFAQIYATLI YOQILDI!|";
                                        Sleep(2000);
                                        cout<<"\n\n | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh1;}
                                        else if (yana == 0) {return 0;}
                                    }//kod togri
                                    else if (kod_check != smskod) {
                                        cout << "\n\n XATOLIK, KODNI QAYTADAN KIRITING!|";
                                        Sleep(2000);
                                        system("cls");
                                        goto CAse2_1;
                                    }//kodcheck xato
                                }//TEL RAQAM TOGRI
                                else {
                                    cout << "\n\n XATOLIK, TELEFON RAQAMNI QAYTADAN KIRITING!|";
                                    Sleep(2000);
                                    system("cls");
                                    goto Case2;
                                }//xato raqam
                                break;} //CASE 2 YOQISH

                            case 3: { goto bosh_menyu; break;}
                            default: {
                                cout<<"\n\n\t\t\t| HURMATLI MIJOZ, ILTIMOS RAQAMNI QAYTADAN KIRITING! |";
                                Sleep(2000);
                                goto bosh1; break;
                            }

                        }// SWITC SMS XABARNOMA

                        break;} // 7. SMS xabarnoma

                    case 8: { // PIN KODNI O'ZGARTIRISH
                        pin_ozg:
                        int pincheck;
                        system("cls");
                        cout << "\n\t\t\t| PLASTIK KARTA PIN KODINI O'ZGARTIRISH MENYUSI|";
                        cout << "\n\n\n  | PLASTIK KARTANING HOZIRGI PIN KODINI KIRITING: ", cin>>pincheck;
                        cout << "\n\n  | YANGI 4 XONALI PIN KODNI KIRITING: ", cin>>pinchange_1;
                        cout << "\n  | YANGI PIN KODNI QAYTA KIRITING: ", cin>>pinchange_2;
                        if ( Parol == pincheck && pinchange_1 == pinchange_2 && pinchange_1 >999 && pinchange_1<10000 ) {
                            Parol = pinchange_1;
                            cout <<"\n\n\n\t\t\t   | PIN KOD MUVAFFAQIYATLI O'ZGARTIRILDI!|";
                            Sleep(1500);
                            cout<<"\n\n | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana_b;
                            if (yana_b) {goto bosh_menyu;}
                            else if (yana_b == 0){ goto rahmat;}
                        }else{
                            cout << "\n\n  | XATOLIK QAYTADAN URINIB KO'RING!|";
                            Sleep(2000);
                            goto pin_ozg;
                        }

                        break;} // 7. Pin kodni ozgartirish

                    default: { //BOSH MENYU XATOLIK
                        cout << "\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                        Sleep(2500);
                        goto bosh_menyu; break;}
                }//o'zbek tili bosh menyu switch

            } // parol togri kirilsa

            break;}
        case 2: { break;} // English
        case 3: { break;} // Russian
        default: { cout << "\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
            Sleep(2500);
            goto Language; break;}
    } //switch TIL uchun

    rahmat:
    system("cls");
    cout<<"\n\n\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________________________ "<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|         KAPITALBANK XIZMATLARIDAN          |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|       FOYDALANGANINGIZ UCHUN RAHMAT!       |"<<endl;
    cout<<"\t\t\t\t\t|____________________________________________| \n\n\n\n\n\n\n\n\n\n"<<endl;

    return 0;
}
#include <iostream>

#include <windows.h>



using namespace std;

int main()
{
    system("color F1");
    Start:

    cout<<"\n\n\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________________________ "<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|   KAPITALBANK BANKOMATIGA HUSH KELIBSIZ!   |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|        WELCOME TO KAPITALBANK ATM!         |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|____________________________________________|"<<endl;
    cout<<"\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________________________ "<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|     ILTIMOS PLASTIK KARTANI KIRITING!      |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|         PLEASE INSERT YOUR CARD!           |"<<endl;
    cout<<"\t\t\t\t\t|____________________________________________|"<<endl;
    int next;
    cin>>next;
    if (next) {
        system("cls");
        cout<<"\n\n\n"<<endl;
        cout<<"\t\t\t\t\t | Ma'lumotlar yuklanmoqda... |"<<endl;
        Sleep(2000);
        system("cls");}
    // Bismillah. Tilni tanlash
    Language:
    int balans = 1500000,Parol = 7777, Enter_Parol, pinchange_1, pinchange_2, limit = 3, yana_b;
    system("cls");
    cout<<"\t\t\t\t\t ____________________________ "<<endl;
    cout<<"\t\t\t\t\t|                            |"<<endl;
    cout<<"\t\t\t\t\t|       1. O'ZBEKCHA         |"<<endl;
    cout<<"\t\t\t\t\t|____________________________|"<<endl;
    cout<<"\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________ "<<endl;
    cout<<"\t\t\t\t\t|                            |"<<endl;
    cout<<"\t\t\t\t\t|        2. ENGLISH          |"<<endl;
    cout<<"\t\t\t\t\t|____________________________|"<<endl;
    cout<<"\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________ "<<endl;
    cout<<"\t\t\t\t\t|                            |"<<endl;
    cout<<"\t\t\t\t\t|        3. RUSCHA           |"<<endl;
    cout<<"\t\t\t\t\t|____________________________|"<<endl;
    cout<<"\n"<<endl;
    int til;
    cout<<"  Tilni tanlang | Choose language : ";
    cin>>til;
    switch (til) {
        Case1:
        case 1: { // UZBEK TILI
            system("cls");
            cout<<"\n\n\n"<<endl;
            cout<<" "<<endl;
            cout<<"\t\t\t\t\t |4 RAQAMLI PIN KODNI KIRITING|"<<endl;
            cout<<"\t\t\t\t\t            >>>| ", cin >> Enter_Parol;

            if(Enter_Parol != Parol){
                cout<<"\t\t\t\t\t        NOTO'GRI PIN KOD!";
                limit--;
                Sleep (2000);
                system("cls");
                if (limit > 0) { goto Case1;}
                else {  cout<<"\n\n\n"<<endl;
                    cout<<"\t\t|KARTANGIZ BLOCKLANDI. O'ZINGIZ UCHUN YAQIN BO'LGAN BANK FILIALIGA MUROJAAT QILING!|";
                    cout<<"\n\n\n"<<endl;
                    return 0;}

            } //xato parol uchun
            else {
                bosh_menyu:
                Sleep (1000);
                system("cls");
                cout<<"\n"<<endl;
                cout<<"\t\t                             | BOSH MENYU: | " <<endl<<endl;
                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  1. BALANSNI TEKSHIRISH       | \t|  5. MOBIL ALOQA UCHUN TO'LOV  |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n";
                cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  2. NAQD PUL OLISH            | \t|  6. KOMMUNAL TO'LOVLAR        |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n";
                cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  3. HISOBNI TOLDIRISH         | \t|  7. SMS HABARNOMA YOQISH      |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n";
                cout<<"\t\t _______________________________  \t _______________________________"<<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  4. KARTAGA PUL O'TKAZISH     | \t|  8. PIN KODNI O'ZGARTIRISH    |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n\n";
                int amaliyot;
                cout<<" |BOSH MENYUDAN AMALIYOTNI TANGLANG: "; cin>>amaliyot;
                switch (amaliyot){

                    case 1: { // HISOBNI TEKSHIRISH MENYUSI
                        system("cls");
                        cout << "\n\n\t\t\t| HOZIRDA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                        Sleep(3000);
                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana_b;
                        if (yana_b) {goto bosh_menyu;}
                        else if (yana_b == 0){ goto rahmat;}
                        break;}//balansni tekshirish case 1

                    case 2: { // NAQD PUL OLISH MENYUSI ==> JAVOHIR
                        int npo, s, summa, yana;
                        int kmiqdor;
                        bow:
                        system("cls");

                        cout<<"\n"<<endl;
                        cout<<"\t\t                 | NAQD PUL MABLAGLARINI YECHIB OLISH: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (1) 100 000            | \t|        (2) 200 000            |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (3) 400 000            | \t|        (4) 800 000            |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (5) 1000 000           | \t|        (6) BOSHQA MIQDOR      |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t                    _______________________________ " <<endl;
                        cout<<"\t\t                   |                               | "<<endl;
                        cout<<"\t\t                   |     (7) ORTGA QAYTISH         | "<<endl;
                        cout<<"\t\t                   |_______________________________| "<<endl;
                        cout<<"\n\n";
                        cout << "\t\t\t| HOZIRDA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                        cout << "| KERAKLI MIQDORNI TANLANG (XIZMAT HAQQI 1%):", cin >> summa;

                        system ("cls");
                        nn:
                        switch (summa){
                            case 1: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                Sleep(3000);
                                system ("cls");
                                balans = balans - (100000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                Sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE1
                            case 2: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                Sleep(3000);
                                system ("cls");
                                balans = balans - (200000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                Sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE2
                            case 3: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                Sleep(3000);
                                system ("cls");
                                balans = balans - (400000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                Sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE3
                            case 4: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                Sleep(3000);
                                system ("cls");
                                balans = balans - (800000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                Sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE4
                            case 5: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                Sleep(3000);
                                system ("cls");
                                balans = balans - (1000000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                Sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE5
                            case 6: {
                                kerakli:
                                cout << "\n\n\n | HOZIRDA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                                cout<<"\n | KERAKLI MIQDORNI KIRITING: ", cin>>kmiqdor;
                                if (balans < kmiqdor){
                                    cout<<"\n\n\t\t\t| HISOBINGIZDA YETARLI MABLAG' MAVJUD EMAS! |";
                                    Sleep(2000);
                                    system ("cls");
                                    goto kerakli; } // not enough money
                                else {
                                    system ("cls");

                                    cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                    Sleep(3000);
                                    system ("cls");
                                    balans = balans - (kmiqdor*1.01);
                                    cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                    cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                    Sleep(4000);

                                    cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                    cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                    if (yana) goto bow;
                                    else if (yana == 0) return 0;
                                    break;}} //CASE5 -- else
                            default : cout << "\n\t\t\t\t|QAYTADAN URINIB KO'RING!"; Sleep (2000); goto bow; break;
                            case 7: { goto bosh_menyu;
                                break;} // ortga qaytish

                        } //swith naqd pul yechish

                        break;} // 2. Naqd pul olish

                    case 3: { // HISOBNI TOLDIRISH MENYUSI ==> JAVOHIR
                        hb:
                        system ("cls");
                        int sum, balans = 1500000;
                        cout << "\t\t\t| HISOB TO'LDIRISH BO'LIMI! |\n\n";
                        cout << " | HISOBINGIZDA " << balans<< " MAVJUD!\n\n" ;
                        cout << " | SUMMANI KIRITING! HIZMAT XAQQI (1%):  " ;
                        cin >> sum;
                        balans = balans + sum * 0.995;
                        system ("cls");
                        cout << "\n\t\t\t| KIRITILGAN MABLAG' QO'SHILMOQDA...\n"<<endl;
                        cout << " | ILTIMOS BIR OZ KUTING!"<<endl;

                        Sleep (4000);

                        system("cls");
                        cout << " \t\t\t| KIRITILGAN MABLAG' HISOBINGIZGA QO'SHILDI! |";
                        cout <<"\n\n| HOZIRDA HISOBINGIZDA "<< balans<< " MAVJUD!" << endl;
                        Sleep (3000);
                        cout << "\n\n| YANA AMAL BAJARISHNI XOXLAYSIZMI?\n";
                        cout << "1. HA | 2. YO'Q | ";
                        int bbq;
                        cin >> bbq ;
                        cout <<  endl;
                        system("cls");
                        if (bbq == 1)
                        {goto bosh_menyu;}
                        else if (bbq == 2)
                        {system ("cls");
                            goto rahmat;}



                        break;} // 3. Hisobni to'ldirish

                    case 4: { // PUL OTKAZMALARI MENYUSI ==> ASLOMBEK
                        int otkazma, yana;

                        long long kartaraqam,o;
                        int pull;
                        bosh:

                        system("cls");

                        cout<<"\n"<<endl;
                        cout<<"\t\t                   | PUL O'TKAZMALARI BO'LIMI: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (1) UZCARD             | \t|        (2) HUMO               |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t                    _______________________________ "<<endl;
                        cout<<"\t\t                   |                               | "<<endl;
                        cout<<"\t\t                   |     (3) ORTGA QAYTISH         | "<<endl;
                        cout<<"\t\t                   |_______________________________| "<<endl;
                        cout<<"\n\n";
                        cout << "\n\n";
                        cout << "| PUL O'TKAZILAYOTGAN KARTANI TURINI TANLANG (XIZMAT HAQQI 1%):", cin >> pull;
                        system("cls");

                        switch(pull){
                            case 1: {
                                case1:
                                system("cls");
                                cout << " | PUL O'TKAZMOQCHI BO'LGAN KARTA RAQAMINI KIRITING: \n   8600", cin>>kartaraqam;
                                system("cls");
                                if (kartaraqam <= 99999999999 || kartaraqam> 999999999999) {
                                    system("cls");
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2000);
                                    goto case1;
                                }//xatolik
                                else {
                                    case1_1:
                                    system("cls");
                                    cout << "\n\n  | KARTA RAQAM EGASI: OCHILOV ASLOMBEK \n ";
                                    cout << " | ESLATIB O'TAMIZ, O'TKAZMALAR UCHUN BANK 1% XIZMAT HAQQI OLADI! \n ";
                                    cout << " | HOZIRDA SIZNING KARTANGIZDAGI PUL  MIQDORI "<<balans<<" UZS \n\n ";
                                    cout << " | O'TKAZMOQCHI BO'LGAN SUMMANI KIRITING: ", cin>>otkazma;
                                    if (balans < (otkazma * 1.01)) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ HISOBINGIZDA YETARLI MABLAG MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto case1_1;
                                    }//balans < otkazma
                                    else {
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH AMALGA OSHIRILMOQDA!|";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH MUVAFFAQIYATLI AMALGA OSHIRILDI!|"<<endl;
                                        balans = balans - (otkazma * 1.01);
                                        cout << "\n\n\t\t\t| HISOBINGIZDA "<<balans<<" UZS qoldi | \n\n"<<endl;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh;}
                                        else if (yana == 0) {return 0;}

                                    } //balans > otkazma

                                }// to'gribosa

                                break; }//case1 uzcard

                            case 2: {
                                case2:
                                system("cls");
                                cout << " | PUL O'TKAZMOQCHI BO'LGAN KARTA RAQAMINI KIRITING: \n   9860", cin>>kartaraqam;
                                system("cls");
                                if (kartaraqam <= 99999999999 || kartaraqam> 999999999999) {
                                    system("cls");
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2000);
                                    goto case2;
                                }//xatolik
                                else {
                                    case2_1:
                                    system("cls");
                                    cout << "\n\n  | KARTA RAQAM EGASI: OCHILOV ASLOMBEK \n ";
                                    cout << " | ESLATIB O'TAMIZ, O'TKAZMALAR UCHUN BANK 1% XIZMAT HAQQI OLADI! \n ";
                                    cout << " | HOZIRDA SIZNING KARTANGIZDAGI PUL  MIQDORI "<<balans<<" UZS \n\n ";
                                    cout << " | O'TKAZMOQCHI BO'LGAN SUMMANI KIRITING: ", cin>>otkazma;
                                    if (balans < (otkazma * 1.01)) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ HISOBINGIZDA YETARLI MABLAG MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto case2_1;
                                    }//balans < otkazma
                                    else {
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH AMALGA OSHIRILMOQDA!|";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH MUVAFFAQIYATLI AMALGA OSHIRILDI!|"<<endl;
                                        balans = balans - (otkazma * 1.01);
                                        cout << "\n\n\t\t\t| HISOBINGIZDA "<<balans<<" UZS qoldi | \n\n"<<endl;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh;}
                                        else if (yana == 0) {return 0;}

                                    } //balans > otkazma

                                }// to'gribosa

                                break; }//case2 humo

                            case 3: {goto bosh_menyu; break;}

                            default: {
                                system("cls");
                                cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                Sleep(2000);
                                goto bosh; break;}//default


                        }//SWITCH pul otkazma

                        break;} // 4. Kartaga pul otqazish

                    case 5: { //MOBIL ALOQA MENYUSI ==> UMIDJON

                        system("cls");
                        int a,b,c, yana;
                        mobil:
                        system("cls");
                        cout<<"\n"<<endl;
                        cout<<"\t\t                  | MOBIL ALOQA UCHUN TO'LOVLAR: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (1) UZMOBILE           | \t|        (2) BEELINE            |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (3) UCELL              | \t|        (4) MOBIUZ             |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (5) HUMANS             | \t|        (6) ORTGA QAYTISH      |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout << "\t\t\t| HOZIRDA KARTA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                        cout << "| MOBIL OPERATORNI TANLANG:", cin >> a;
                        system("cls");


                        switch (a){
                            case 1:{
                                raqam1:
                                system("cls");
                                cout << "\t\t\t| UZMOBILE OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(99)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto raqam1;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2500);
                                    goto raqam1;}
                                break; }//uzmobile case 1

                            case 2:{
                                raqam2:
                                system("cls");
                                cout << "\t\t\t| BEELINE OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(90)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto raqam2;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2500);
                                    goto raqam2;}
                                break; }//BEELINE case 2


                            case 3:{
                                raqam3:
                                system("cls");
                                cout << "\t\t\t| UCELL OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(93)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto raqam3;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2500);
                                    goto raqam3;}
                                break; }//UCELL case 3

                            case 4:{
                                raqam4:
                                system("cls");
                                cout << "\t\t\t| MOBIUZ OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(97)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto raqam4;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2500);
                                    goto raqam4;}
                                break; }//MOBIUZ case 4

                            case 5:{
                                raqam5:
                                system("cls");
                                cout << "\t\t\t| HUMANS OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(33)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto raqam5;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2500);
                                    goto raqam5;}
                                break; }//HUMANS case 5

                            case 6: { goto bosh_menyu; break;}

                            default: {
                                system("cls");
                                cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                Sleep(2000);
                                goto mobil; break;
                            }//default
                        }//switch mobil aloqa menu
                    } // case 5 mobil aloqa

                    case 6: { //KOMMUNAL TO'LOVLAR BO'LIMI ==> MUHAMMAD
                        int komunal;
                        int gazb = 50000, elektrb = 70000, issiqb = 60000, sovuqb = 80000, chiqindib = 20000;
                        int temirovhr = 1234567;
                        kmnl: // orqa qaytish
                        system("cls");
                        cout<<"\n"<<endl;
                        cout<<"\t\t                     | KOMMUNAL TO'LOVLAR BO'LIMI: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  1. ELEKTR ENERGIYASI         | \t|  2. ISSIQ SUV                 |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  3. SOVUQ SUV                 | \t|  4. CHIQINDI                  |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  5. TABIIY GAZ                | \t|  6. ORTGA QAYTISH             |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\n\n";

                        cout<<" |KERAKLI BO'LIMNI TANLANG: "; cin>>komunal;
                        system("cls");

                        //Komunal bo'lim.......

                        switch (komunal){
                            case 1 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                     | ELEKTR ENERGIYA BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI BO'LIMNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                Sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    Sleep (1000);
                                    system("cls");
                                    goto Hisobr;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<elektrb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1Kv= 2000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    Sleep (1000);
                                    elektrb = kv +elektrb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << elektrb << " so'm"<<endl<<endl;
                                    Sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}}
                                    default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;
                                } //hisob raqam to'gri kiritilsa
                            } //  case 1 elektr energiyasi

                            case 2 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | ISSIQ SUV BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr2 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                Sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    Sleep (1000);
                                    system("cls");
                                    goto Hisobr2;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<issiqb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1M Kub ISSIQ SUV = 3000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    Sleep (1000);
                                    issiqb = kv +issiqb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << issiqb << " so'm"<<endl<<endl;
                                    Sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 2 Issiq suv

                            case 3 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | SOVUQ SUV BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr3 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                Sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    Sleep (1000);
                                    system("cls");
                                    goto Hisobr3;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<sovuqb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1M Kub SOVUQ SUV = 1000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    Sleep (1000);
                                    sovuqb = kv +sovuqb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << sovuqb << " so'm"<<endl<<endl;
                                    Sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 3 SOVUQ suv

                            case 4 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | CHIQINDI BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr4 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                Sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    Sleep (1000);
                                    system("cls");
                                    goto Hisobr4;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<issiqb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz chiqindiga 1 oylik to'lov  = 30000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    Sleep (1000);
                                    chiqindib = kv +chiqindib;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << chiqindib << " so'm"<<endl<<endl;
                                    Sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 4  chiqindi

                            case 5 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | TABIIY GAZ BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr5 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                Sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    Sleep (1000);
                                    system("cls");
                                    goto Hisobr5;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<gazb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1 Kub m Tabiiy gaz = 1500 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    Sleep (1000);
                                    gazb = kv +gazb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << gazb << " so'm"<<endl<<endl;
                                    Sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 6 TABBIY GAZ
                            case 6: { goto bosh_menyu; break;}


                        } // kommunal menyu

                        break;} // 6. Kommnal to'lovlar

                    case 7: { // SMS XABARNOMA ==> ASLOMBEK
                        int k,p,telraqam,m, smskod = 7777, kod_check, yana;
                        bosh1:
                        system("cls");

                        cout<<"\n"<<endl;
                        cout<<"\t\t                   | PUL O'TKAZMALARI BO'LIMI: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  (1) SMS XABARNOMA O'CHIRISH  | \t|  (2) SMS XABARNOMA YOQISH     |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t                    _______________________________ "<<endl;
                        cout<<"\t\t                   |                               | "<<endl;
                        cout<<"\t\t                   |     (3) ORTGA QAYTISH         | "<<endl;
                        cout<<"\t\t                   |_______________________________| "<<endl;
                        cout<<"\n\n";
                        cout << "\n\n";
                        cout << "| KERAKLI AMALIYOTNI TANLANG:", cin >> k;
                        system("cls");

                        switch (k){
                            case 1:{
                                Case1_:
                                system("cls");
                                cout << "\n\t\t\t| SMS XABARNOMA O'CHIRILADIGAN TELEFON RAQAMINI KIRITING!|"<<endl<<endl;
                                cout << "  | TELEFON RAQAM: +998";cin >>telraqam;
                                system("cls");


                                if(telraqam>99999999 && telraqam<1000000000){
                                    cout << "\n\t\t\t| ILTIMOS KUTING..|"<<endl<<endl;
                                    Sleep(2000);
                                    system("cls");
                                    CAse1_1:
                                    cout << "\n\t\t\t| SIZGA SMS ORQALI 4 XONALI TASDIQLASH KODI YUBORILDI!|"<<endl<<endl;
                                    cout << "  | ILTIMOS YUBORILGAN KODNI KIRITING: ";cin >>kod_check;
                                    if (kod_check == smskod) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| SMS XABARNOMA MUVAFFAQIYATLI O'CHIRILDI!|";
                                        Sleep(2000);
                                        cout<<"\n\n | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh1;}
                                        else if (yana == 0) {return 0;}
                                    }//kod togri
                                    else if (kod_check != smskod) {
                                        cout << "\n\n XATOLIK, KODNI QAYTADAN KIRITING!|";
                                        Sleep(2000);
                                        system("cls");
                                        goto CAse1_1;
                                    }//kodcheck xato
                                }//TEL RAQAM TOGRI
                                else {
                                    cout << "\n\n XATOLIK, TELEFON RAQAMNI QAYTADAN KIRITING!|";
                                    Sleep(2000);
                                    system("cls");
                                    goto Case1_;
                                }//xato raqam
                                break;} //CASE 1 OCHIRISH

                            case 2:{
                                Case2:
                                system("cls");
                                cout << "\n\t\t\t| SMS XABARNOMA YOQISH UCHUN TELEFON RAQAMINI KIRITING!|"<<endl<<endl;
                                cout << "  | TELEFON RAQAM: +998";cin >>telraqam;
                                system("cls");


                                if(telraqam>99999999 && telraqam<1000000000){
                                    cout << "\n\t\t\t| ILTIMOS KUTING..|"<<endl<<endl;
                                    Sleep(2000);
                                    system("cls");
                                    CAse2_1:
                                    cout << "\n\t\t\t| SIZGA SMS ORQALI 4 XONALI TASDIQLASH KODI YUBORILDI!|"<<endl<<endl;
                                    cout << "  | ILTIMOS YUBORILGAN KODNI KIRITING: ";cin >>kod_check;
                                    if (kod_check == smskod) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| SMS XABARNOMA MUVAFFAQIYATLI YOQILDI!|";
                                        Sleep(2000);
                                        cout<<"\n\n | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh1;}
                                        else if (yana == 0) {return 0;}
                                    }//kod togri
                                    else if (kod_check != smskod) {
                                        cout << "\n\n XATOLIK, KODNI QAYTADAN KIRITING!|";
                                        Sleep(2000);
                                        system("cls");
                                        goto CAse2_1;
                                    }//kodcheck xato
                                }//TEL RAQAM TOGRI
                                else {
                                    cout << "\n\n XATOLIK, TELEFON RAQAMNI QAYTADAN KIRITING!|";
                                    Sleep(2000);
                                    system("cls");
                                    goto Case2;
                                }//xato raqam
                                break;} //CASE 2 YOQISH

                            case 3: { goto bosh_menyu; break;}
                            default: {
                                cout<<"\n\n\t\t\t| HURMATLI MIJOZ, ILTIMOS RAQAMNI QAYTADAN KIRITING! |";
                                Sleep(2000);
                                goto bosh1; break;
                            }

                        }// SWITC SMS XABARNOMA

                        break;} // 7. SMS xabarnoma

                    case 8: { // PIN KODNI O'ZGARTIRISH
                        pin_ozg:
                        int pincheck;
                        system("cls");
                        cout << "\n\t\t\t| PLASTIK KARTA PIN KODINI O'ZGARTIRISH MENYUSI|";
                        cout << "\n\n\n  | PLASTIK KARTANING HOZIRGI PIN KODINI KIRITING: ", cin>>pincheck;
                        cout << "\n\n  | YANGI 4 XONALI PIN KODNI KIRITING: ", cin>>pinchange_1;
                        cout << "\n  | YANGI PIN KODNI QAYTA KIRITING: ", cin>>pinchange_2;
                        if ( Parol == pincheck && pinchange_1 == pinchange_2 && pinchange_1 >999 && pinchange_1<10000 ) {
                            Parol = pinchange_1;
                            cout <<"\n\n\n\t\t\t   | PIN KOD MUVAFFAQIYATLI O'ZGARTIRILDI!|";
                            Sleep(1500);
                            cout<<"\n\n | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana_b;
                            if (yana_b) {goto bosh_menyu;}
                            else if (yana_b == 0){ goto rahmat;}
                        }else{
                            cout << "\n\n  | XATOLIK QAYTADAN URINIB KO'RING!|";
                            Sleep(2000);
                            goto pin_ozg;
                        }

                        break;} // 7. Pin kodni ozgartirish

                    default: { //BOSH MENYU XATOLIK
                        cout << "\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                        Sleep(2500);
                        goto bosh_menyu; break;}
                }//o'zbek tili bosh menyu switch

            } // parol togri kirilsa

            break;}
        case 2: { break;} // English
        case 3: { break;} // Russian
        default: { cout << "\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
            Sleep(2500);
            goto Language; break;}
    } //switch TIL uchun

    rahmat:
    system("cls");
    cout<<"\n\n\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________________________ "<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|         KAPITALBANK XIZMATLARIDAN          |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|       FOYDALANGANINGIZ UCHUN RAHMAT!       |"<<endl;
    cout<<"\t\t\t\t\t|____________________________________________| \n\n\n\n\n\n\n\n\n\n"<<endl;

    return 0;
}
#include <iostream>
#include <zconf.h>
// slipni kichkinadas yozing





using namespace std;

int main()
{
    system("color F1");
    Start:

    cout<<"\n\n\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________________________ "<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|   KAPITALBANK BANKOMATIGA HUSH KELIBSIZ!   |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|        WELCOME TO KAPITALBANK ATM!         |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|____________________________________________|"<<endl;
    cout<<"\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________________________ "<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|     ILTIMOS PLASTIK KARTANI KIRITING!      |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|         PLEASE INSERT YOUR CARD!           |"<<endl;
    cout<<"\t\t\t\t\t|____________________________________________|"<<endl;
    int next;
    cin>>next;
    if (next) {
        system("cls");
        cout<<"\n\n\n"<<endl;
        cout<<"\t\t\t\t\t | Ma'lumotlar yuklanmoqda... |"<<endl;
        sleep(2000);
        system("cls");}
    // Bismillah. Tilni tanlash
    Language:
    int balans = 1500000,Parol = 7777, Enter_Parol, pinchange_1, pinchange_2, limit = 3, yana_b;
    system("cls");
    cout<<"\t\t\t\t\t ____________________________ "<<endl;
    cout<<"\t\t\t\t\t|                            |"<<endl;
    cout<<"\t\t\t\t\t|       1. O'ZBEKCHA         |"<<endl;
    cout<<"\t\t\t\t\t|____________________________|"<<endl;
    cout<<"\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________ "<<endl;
    cout<<"\t\t\t\t\t|                            |"<<endl;
    cout<<"\t\t\t\t\t|        2. ENGLISH          |"<<endl;
    cout<<"\t\t\t\t\t|____________________________|"<<endl;
    cout<<"\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________ "<<endl;
    cout<<"\t\t\t\t\t|                            |"<<endl;
    cout<<"\t\t\t\t\t|        3. RUSCHA           |"<<endl;
    cout<<"\t\t\t\t\t|____________________________|"<<endl;
    cout<<"\n"<<endl;
    int til;
    cout<<"  Tilni tanlang | Choose language : ";
    cin>>til;
    switch (til) {
        Case1:
        case 1: { // UZBEK TILI
            system("cls");
            cout<<"\n\n\n"<<endl;
            cout<<" "<<endl;
            cout<<"\t\t\t\t\t |4 RAQAMLI PIN KODNI KIRITING|"<<endl;
            cout<<"\t\t\t\t\t            >>>| ", cin >> Enter_Parol;

            if(Enter_Parol != Parol){
                cout<<"\t\t\t\t\t        NOTO'GRI PIN KOD!";
                limit--;
                sleep (2000);
                system("cls");
                if (limit > 0) { goto Case1;}
                else {  cout<<"\n\n\n"<<endl;
                    cout<<"\t\t|KARTANGIZ BLOCKLANDI. O'ZINGIZ UCHUN YAQIN BO'LGAN BANK FILIALIGA MUROJAAT QILING!|";
                    cout<<"\n\n\n"<<endl;
                    return 0;}

            } //xato parol uchun
            else {
                bosh_menyu:
                sleep (1000);
                system("cls");
                cout<<"\n"<<endl;
                cout<<"\t\t                             | BOSH MENYU: | " <<endl<<endl;
                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  1. BALANSNI TEKSHIRISH       | \t|  5. MOBIL ALOQA UCHUN TO'LOV  |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n";
                cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  2. NAQD PUL OLISH            | \t|  6. KOMMUNAL TO'LOVLAR        |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n";
                cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  3. HISOBNI TOLDIRISH         | \t|  7. SMS HABARNOMA YOQISH      |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n";
                cout<<"\t\t _______________________________  \t _______________________________"<<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  4. KARTAGA PUL O'TKAZISH     | \t|  8. PIN KODNI O'ZGARTIRISH    |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n\n";
                int amaliyot;
                cout<<" |BOSH MENYUDAN AMALIYOTNI TANGLANG: "; cin>>amaliyot;
                switch (amaliyot){

                    case 1: { // HISOBNI TEKSHIRISH MENYUSI
                        system("cls");
                        cout << "\n\n\t\t\t| HOZIRDA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                        sleep(3000);
                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana_b;
                        if (yana_b) {goto bosh_menyu;}
                        else if (yana_b == 0){ goto rahmat;}
                        break;}//balansni tekshirish case 1

                    case 2: { // NAQD PUL OLISH MENYUSI ==> JAVOHIR
                        int npo, s, summa, yana;
                        int kmiqdor;
                        bow:
                        system("cls");

                        cout<<"\n"<<endl;
                        cout<<"\t\t                 | NAQD PUL MABLAGLARINI YECHIB OLISH: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (1) 100 000            | \t|        (2) 200 000            |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (3) 400 000            | \t|        (4) 800 000            |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (5) 1000 000           | \t|        (6) BOSHQA MIQDOR      |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t                    _______________________________ " <<endl;
                        cout<<"\t\t                   |                               | "<<endl;
                        cout<<"\t\t                   |     (7) ORTGA QAYTISH         | "<<endl;
                        cout<<"\t\t                   |_______________________________| "<<endl;
                        cout<<"\n\n";
                        cout << "\t\t\t| HOZIRDA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                        cout << "| KERAKLI MIQDORNI TANLANG (XIZMAT HAQQI 1%):", cin >> summa;

                        system ("cls");
                        nn:
                        switch (summa){
                            case 1: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                sleep(3000);
                                system ("cls");
                                balans = balans - (100000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE1
                            case 2: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                sleep(3000);
                                system ("cls");
                                balans = balans - (200000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE2
                            case 3: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                sleep(3000);
                                system ("cls");
                                balans = balans - (400000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE3
                            case 4: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                sleep(3000);
                                system ("cls");
                                balans = balans - (800000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE4
                            case 5: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                sleep(3000);
                                system ("cls");
                                balans = balans - (1000000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE5
                            case 6: {
                                kerakli:
                                cout << "\n\n\n | HOZIRDA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                                cout<<"\n | KERAKLI MIQDORNI KIRITING: ", cin>>kmiqdor;
                                if (balans < kmiqdor){
                                    cout<<"\n\n\t\t\t| HISOBINGIZDA YETARLI MABLAG' MAVJUD EMAS! |";
                                    sleep(2000);
                                    system ("cls");
                                    goto kerakli; } // not enough money
                                else {
                                    system ("cls");

                                    cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                    sleep(3000);
                                    system ("cls");
                                    balans = balans - (kmiqdor*1.01);
                                    cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                    cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                    sleep(4000);

                                    cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                    cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                    if (yana) goto bow;
                                    else if (yana == 0) return 0;
                                    break;}} //CASE5 -- else
                            default : cout << "\n\t\t\t\t|QAYTADAN URINIB KO'RING!"; sleep (2000); goto bow; break;
                            case 7: { goto bosh_menyu;
                                break;} // ortga qaytish

                        } //swith naqd pul yechish

                        break;} // 2. Naqd pul olish

                    case 3: { // HISOBNI TOLDIRISH MENYUSI ==> JAVOHIR
                        hb:
                        system ("cls");
                        int sum, balans = 1500000;
                        cout << "\t\t\t| HISOB TO'LDIRISH BO'LIMI! |\n\n";
                        cout << " | HISOBINGIZDA " << balans<< " MAVJUD!\n\n" ;
                        cout << " | SUMMANI KIRITING! HIZMAT XAQQI (1%):  " ;
                        cin >> sum;
                        balans = balans + sum * 0.995;
                        system ("cls");
                        cout << "\n\t\t\t| KIRITILGAN MABLAG' QO'SHILMOQDA...\n"<<endl;
                        cout << " | ILTIMOS BIR OZ KUTING!"<<endl;

                        sleep (4000);

                        system("cls");
                        cout << " \t\t\t| KIRITILGAN MABLAG' HISOBINGIZGA QO'SHILDI! |";
                        cout <<"\n\n| HOZIRDA HISOBINGIZDA "<< balans<< " MAVJUD!" << endl;
                        sleep (3000);
                        cout << "\n\n| YANA AMAL BAJARISHNI XOXLAYSIZMI?\n";
                        cout << "1. HA | 2. YO'Q | ";
                        int bbq;
                        cin >> bbq ;
                        cout <<  endl;
                        system("cls");
                        if (bbq == 1)
                        {goto bosh_menyu;}
                        else if (bbq == 2)
                        {system ("cls");
                            goto rahmat;}



                        break;} // 3. Hisobni to'ldirish

                    case 4: { // PUL OTKAZMALARI MENYUSI ==> ASLOMBEK
                        int otkazma, yana;

                        long long kartaraqam,o;
                        int pull;
                        bosh:

                        system("cls");

                        cout<<"\n"<<endl;
                        cout<<"\t\t                   | PUL O'TKAZMALARI BO'LIMI: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (1) UZCARD             | \t|        (2) HUMO               |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t                    _______________________________ "<<endl;
                        cout<<"\t\t                   |                               | "<<endl;
                        cout<<"\t\t                   |     (3) ORTGA QAYTISH         | "<<endl;
                        cout<<"\t\t                   |_______________________________| "<<endl;
                        cout<<"\n\n";
                        cout << "\n\n";
                        cout << "| PUL O'TKAZILAYOTGAN KARTANI TURINI TANLANG (XIZMAT HAQQI 1%):", cin >> pull;
                        system("cls");

                        switch(pull){
                            case 1: {
                                case1:
                                system("cls");
                                cout << " | PUL O'TKAZMOQCHI BO'LGAN KARTA RAQAMINI KIRITING: \n   8600", cin>>kartaraqam;
                                system("cls");
                                if (kartaraqam <= 99999999999 || kartaraqam> 999999999999) {
                                    system("cls");
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    sleep(2000);
                                    goto case1;
                                }//xatolik
                                else {
                                    case1_1:
                                    system("cls");
                                    cout << "\n\n  | KARTA RAQAM EGASI: OCHILOV ASLOMBEK \n ";
                                    cout << " | ESLATIB O'TAMIZ, O'TKAZMALAR UCHUN BANK 1% XIZMAT HAQQI OLADI! \n ";
                                    cout << " | HOZIRDA SIZNING KARTANGIZDAGI PUL  MIQDORI "<<balans<<" UZS \n\n ";
                                    cout << " | O'TKAZMOQCHI BO'LGAN SUMMANI KIRITING: ", cin>>otkazma;
                                    if (balans < (otkazma * 1.01)) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ HISOBINGIZDA YETARLI MABLAG MAVJUD EMAS!|";
                                        sleep(2000);
                                        goto case1_1;
                                    }//balans < otkazma
                                    else {
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH AMALGA OSHIRILMOQDA!|";
                                        sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH MUVAFFAQIYATLI AMALGA OSHIRILDI!|"<<endl;
                                        balans = balans - (otkazma * 1.01);
                                        cout << "\n\n\t\t\t| HISOBINGIZDA "<<balans<<" UZS qoldi | \n\n"<<endl;
                                        sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh;}
                                        else if (yana == 0) {return 0;}

                                    } //balans > otkazma

                                }// to'gribosa

                                break; }//case1 uzcard

                            case 2: {
                                case2:
                                system("cls");
                                cout << " | PUL O'TKAZMOQCHI BO'LGAN KARTA RAQAMINI KIRITING: \n   9860", cin>>kartaraqam;
                                system("cls");
                                if (kartaraqam <= 99999999999 || kartaraqam> 999999999999) {
                                    system("cls");
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    sleep(2000);
                                    goto case2;
                                }//xatolik
                                else {
                                    case2_1:
                                    system("cls");
                                    cout << "\n\n  | KARTA RAQAM EGASI: OCHILOV ASLOMBEK \n ";
                                    cout << " | ESLATIB O'TAMIZ, O'TKAZMALAR UCHUN BANK 1% XIZMAT HAQQI OLADI! \n ";
                                    cout << " | HOZIRDA SIZNING KARTANGIZDAGI PUL  MIQDORI "<<balans<<" UZS \n\n ";
                                    cout << " | O'TKAZMOQCHI BO'LGAN SUMMANI KIRITING: ", cin>>otkazma;
                                    if (balans < (otkazma * 1.01)) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ HISOBINGIZDA YETARLI MABLAG MAVJUD EMAS!|";
                                        sleep(2000);
                                        goto case2_1;
                                    }//balans < otkazma
                                    else {
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH AMALGA OSHIRILMOQDA!|";
                                        sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH MUVAFFAQIYATLI AMALGA OSHIRILDI!|"<<endl;
                                        balans = balans - (otkazma * 1.01);
                                        cout << "\n\n\t\t\t| HISOBINGIZDA "<<balans<<" UZS qoldi | \n\n"<<endl;
                                        sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh;}
                                        else if (yana == 0) {return 0;}

                                    } //balans > otkazma

                                }// to'gribosa

                                break; }//case2 humo

                            case 3: {goto bosh_menyu; break;}

                            default: {
                                system("cls");
                                cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                sleep(2000);
                                goto bosh; break;}//default


                        }//SWITCH pul otkazma

                        break;} // 4. Kartaga pul otqazish

                    case 5: { //MOBIL ALOQA MENYUSI ==> UMIDJON

                        system("cls");
                        int a,b,c, yana;
                        mobil:
                        system("cls");
                        cout<<"\n"<<endl;
                        cout<<"\t\t                  | MOBIL ALOQA UCHUN TO'LOVLAR: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (1) UZMOBILE           | \t|        (2) BEELINE            |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (3) UCELL              | \t|        (4) MOBIUZ             |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (5) HUMANS             | \t|        (6) ORTGA QAYTISH      |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout << "\t\t\t| HOZIRDA KARTA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                        cout << "| MOBIL OPERATORNI TANLANG:", cin >> a;
                        system("cls");


                        switch (a){
                            case 1:{
                                raqam1:
                                system("cls");
                                cout << "\t\t\t| UZMOBILE OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(99)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        sleep(2000);
                                        goto raqam1;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    sleep(2500);
                                    goto raqam1;}
                                break; }//uzmobile case 1

                            case 2:{
                                raqam2:
                                system("cls");
                                cout << "\t\t\t| BEELINE OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(90)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        sleep(2000);
                                        goto raqam2;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    sleep(2500);
                                    goto raqam2;}
                                break; }//BEELINE case 2


                            case 3:{
                                raqam3:
                                system("cls");
                                cout << "\t\t\t| UCELL OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(93)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        sleep(2000);
                                        goto raqam3;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    sleep(2500);
                                    goto raqam3;}
                                break; }//UCELL case 3

                            case 4:{
                                raqam4:
                                system("cls");
                                cout << "\t\t\t| MOBIUZ OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(97)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        sleep(2000);
                                        goto raqam4;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    sleep(2500);
                                    goto raqam4;}
                                break; }//MOBIUZ case 4

                            case 5:{
                                raqam5:
                                system("cls");
                                cout << "\t\t\t| HUMANS OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(33)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        sleep(2000);
                                        goto raqam5;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    sleep(2500);
                                    goto raqam5;}
                                break; }//HUMANS case 5

                            case 6: { goto bosh_menyu; break;}

                            default: {
                                system("cls");
                                cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                sleep(2000);
                                goto mobil; break;
                            }//default
                        }//switch mobil aloqa menu
                    } // case 5 mobil aloqa

                    case 6: { //KOMMUNAL TO'LOVLAR BO'LIMI ==> MUHAMMAD
                        int komunal;
                        int gazb = 50000, elektrb = 70000, issiqb = 60000, sovuqb = 80000, chiqindib = 20000;
                        int temirovhr = 1234567;
                        kmnl: // orqa qaytish
                        system("cls");
                        cout<<"\n"<<endl;
                        cout<<"\t\t                     | KOMMUNAL TO'LOVLAR BO'LIMI: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  1. ELEKTR ENERGIYASI         | \t|  2. ISSIQ SUV                 |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  3. SOVUQ SUV                 | \t|  4. CHIQINDI                  |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  5. TABIIY GAZ                | \t|  6. ORTGA QAYTISH             |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\n\n";

                        cout<<" |KERAKLI BO'LIMNI TANLANG: "; cin>>komunal;
                        system("cls");

                        //Komunal bo'lim.......

                        switch (komunal){
                            case 1 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                     | ELEKTR ENERGIYA BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI BO'LIMNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    sleep (1000);
                                    system("cls");
                                    goto Hisobr;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<elektrb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1Kv= 2000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    sleep (1000);
                                    elektrb = kv +elektrb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << elektrb << " so'm"<<endl<<endl;
                                    sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}}
                                    default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;
                                } //hisob raqam to'gri kiritilsa
                            } //  case 1 elektr energiyasi

                            case 2 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | ISSIQ SUV BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr2 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    sleep (1000);
                                    system("cls");
                                    goto Hisobr2;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<issiqb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1M Kub ISSIQ SUV = 3000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    sleep (1000);
                                    issiqb = kv +issiqb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << issiqb << " so'm"<<endl<<endl;
                                    sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 2 Issiq suv

                            case 3 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | SOVUQ SUV BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr3 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    sleep (1000);
                                    system("cls");
                                    goto Hisobr3;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<sovuqb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1M Kub SOVUQ SUV = 1000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    sleep (1000);
                                    sovuqb = kv +sovuqb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << sovuqb << " so'm"<<endl<<endl;
                                    sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 3 SOVUQ suv

                            case 4 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | CHIQINDI BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr4 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    sleep (1000);
                                    system("cls");
                                    goto Hisobr4;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<issiqb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz chiqindiga 1 oylik to'lov  = 30000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    sleep (1000);
                                    chiqindib = kv +chiqindib;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << chiqindib << " so'm"<<endl<<endl;
                                    sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 4  chiqindi

                            case 5 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | TABIIY GAZ BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr5 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    sleep (1000);
                                    system("cls");
                                    goto Hisobr5;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<gazb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1 Kub m Tabiiy gaz = 1500 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    sleep (1000);
                                    gazb = kv +gazb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << gazb << " so'm"<<endl<<endl;
                                    sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 6 TABBIY GAZ
                            case 6: { goto bosh_menyu; break;}


                        } // kommunal menyu

                        break;} // 6. Kommnal to'lovlar

                    case 7: { // SMS XABARNOMA ==> ASLOMBEK
                        int k,p,telraqam,m, smskod = 7777, kod_check, yana;
                        bosh1:
                        system("cls");

                        cout<<"\n"<<endl;
                        cout<<"\t\t                   | PUL O'TKAZMALARI BO'LIMI: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  (1) SMS XABARNOMA O'CHIRISH  | \t|  (2) SMS XABARNOMA YOQISH     |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t                    _______________________________ "<<endl;
                        cout<<"\t\t                   |                               | "<<endl;
                        cout<<"\t\t                   |     (3) ORTGA QAYTISH         | "<<endl;
                        cout<<"\t\t                   |_______________________________| "<<endl;
                        cout<<"\n\n";
                        cout << "\n\n";
                        cout << "| KERAKLI AMALIYOTNI TANLANG:", cin >> k;
                        system("cls");

                        switch (k){
                            case 1:{
                                Case1_:
                                system("cls");
                                cout << "\n\t\t\t| SMS XABARNOMA O'CHIRILADIGAN TELEFON RAQAMINI KIRITING!|"<<endl<<endl;
                                cout << "  | TELEFON RAQAM: +998";cin >>telraqam;
                                system("cls");


                                if(telraqam>99999999 && telraqam<1000000000){
                                    cout << "\n\t\t\t| ILTIMOS KUTING..|"<<endl<<endl;
                                    sleep(2000);
                                    system("cls");
                                    CAse1_1:
                                    cout << "\n\t\t\t| SIZGA SMS ORQALI 4 XONALI TASDIQLASH KODI YUBORILDI!|"<<endl<<endl;
                                    cout << "  | ILTIMOS YUBORILGAN KODNI KIRITING: ";cin >>kod_check;
                                    if (kod_check == smskod) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| SMS XABARNOMA MUVAFFAQIYATLI O'CHIRILDI!|";
                                        sleep(2000);
                                        cout<<"\n\n | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh1;}
                                        else if (yana == 0) {return 0;}
                                    }//kod togri
                                    else if (kod_check != smskod) {
                                        cout << "\n\n XATOLIK, KODNI QAYTADAN KIRITING!|";
                                        sleep(2000);
                                        system("cls");
                                        goto CAse1_1;
                                    }//kodcheck xato
                                }//TEL RAQAM TOGRI
                                else {
                                    cout << "\n\n XATOLIK, TELEFON RAQAMNI QAYTADAN KIRITING!|";
                                    sleep(2000);
                                    system("cls");
                                    goto Case1_;
                                }//xato raqam
                                break;} //CASE 1 OCHIRISH

                            case 2:{
                                Case2:
                                system("cls");
                                cout << "\n\t\t\t| SMS XABARNOMA YOQISH UCHUN TELEFON RAQAMINI KIRITING!|"<<endl<<endl;
                                cout << "  | TELEFON RAQAM: +998";cin >>telraqam;
                                system("cls");


                                if(telraqam>99999999 && telraqam<1000000000){
                                    cout << "\n\t\t\t| ILTIMOS KUTING..|"<<endl<<endl;
                                    sleep(2000);
                                    system("cls");
                                    CAse2_1:
                                    cout << "\n\t\t\t| SIZGA SMS ORQALI 4 XONALI TASDIQLASH KODI YUBORILDI!|"<<endl<<endl;
                                    cout << "  | ILTIMOS YUBORILGAN KODNI KIRITING: ";cin >>kod_check;
                                    if (kod_check == smskod) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| SMS XABARNOMA MUVAFFAQIYATLI YOQILDI!|";
                                        sleep(2000);
                                        cout<<"\n\n | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh1;}
                                        else if (yana == 0) {return 0;}
                                    }//kod togri
                                    else if (kod_check != smskod) {
                                        cout << "\n\n XATOLIK, KODNI QAYTADAN KIRITING!|";
                                        sleep(2000);
                                        system("cls");
                                        goto CAse2_1;
                                    }//kodcheck xato
                                }//TEL RAQAM TOGRI
                                else {
                                    cout << "\n\n XATOLIK, TELEFON RAQAMNI QAYTADAN KIRITING!|";
                                    sleep(2000);
                                    system("cls");
                                    goto Case2;
                                }//xato raqam
                                break;} //CASE 2 YOQISH

                            case 3: { goto bosh_menyu; break;}
                            default: {
                                cout<<"\n\n\t\t\t| HURMATLI MIJOZ, ILTIMOS RAQAMNI QAYTADAN KIRITING! |";
                                sleep(2000);
                                goto bosh1; break;
                            }

                        }// SWITC SMS XABARNOMA

                        break;} // 7. SMS xabarnoma

                    case 8: { // PIN KODNI O'ZGARTIRISH
                        pin_ozg:
                        int pincheck;
                        system("cls");
                        cout << "\n\t\t\t| PLASTIK KARTA PIN KODINI O'ZGARTIRISH MENYUSI|";
                        cout << "\n\n\n  | PLASTIK KARTANING HOZIRGI PIN KODINI KIRITING: ", cin>>pincheck;
                        cout << "\n\n  | YANGI 4 XONALI PIN KODNI KIRITING: ", cin>>pinchange_1;
                        cout << "\n  | YANGI PIN KODNI QAYTA KIRITING: ", cin>>pinchange_2;
                        if ( Parol == pincheck && pinchange_1 == pinchange_2 && pinchange_1 >999 && pinchange_1<10000 ) {
                            Parol = pinchange_1;
                            cout <<"\n\n\n\t\t\t   | PIN KOD MUVAFFAQIYATLI O'ZGARTIRILDI!|";
                            sleep(1500);
                            cout<<"\n\n | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana_b;
                            if (yana_b) {goto bosh_menyu;}
                            else if (yana_b == 0){ goto rahmat;}
                        }else{
                            cout << "\n\n  | XATOLIK QAYTADAN URINIB KO'RING!|";
                            sleep(2000);
                            goto pin_ozg;
                        }

                        break;} // 7. Pin kodni ozgartirish

                    default: { //BOSH MENYU XATOLIK
                        cout << "\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                        sleep(2500);
                        goto bosh_menyu; break;}
                }//o'zbek tili bosh menyu switch

            } // parol togri kirilsa

            break;}
        case 2: { break;} // English
        case 3: { break;} // Russian
        default: { cout << "\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
            sleep(2500);
            goto Language; break;}
    } //switch TIL uchun

    rahmat:
    system("cls");
    cout<<"\n\n\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________________________ "<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|         KAPITALBANK XIZMATLARIDAN          |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|       FOYDALANGANINGIZ UCHUN RAHMAT!       |"<<endl;
    cout<<"\t\t\t\t\t|____________________________________________| \n\n\n\n\n\n\n\n\n\n"<<endl;

    return 0;
}
#include <iostream>
#include <zconf.h>





using namespace std;

int main()
{
    system("color F1");
    Start:

    cout<<"\n\n\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________________________ "<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|   KAPITALBANK BANKOMATIGA HUSH KELIBSIZ!   |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|        WELCOME TO KAPITALBANK ATM!         |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|____________________________________________|"<<endl;
    cout<<"\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________________________ "<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|     ILTIMOS PLASTIK KARTANI KIRITING!      |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|         PLEASE INSERT YOUR CARD!           |"<<endl;
    cout<<"\t\t\t\t\t|____________________________________________|"<<endl;
    int next;
    cin>>next;
    if (next) {
        system("cls");
        cout<<"\n\n\n"<<endl;
        cout<<"\t\t\t\t\t | Ma'lumotlar yuklanmoqda... |"<<endl;
        Sleep(2000);
        system("cls");}
    // Bismillah. Tilni tanlash
    Language:
    int balans = 1500000,Parol = 7777, Enter_Parol, pinchange_1, pinchange_2, limit = 3, yana_b;
    system("cls");
    cout<<"\t\t\t\t\t ____________________________ "<<endl;
    cout<<"\t\t\t\t\t|                            |"<<endl;
    cout<<"\t\t\t\t\t|       1. O'ZBEKCHA         |"<<endl;
    cout<<"\t\t\t\t\t|____________________________|"<<endl;
    cout<<"\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________ "<<endl;
    cout<<"\t\t\t\t\t|                            |"<<endl;
    cout<<"\t\t\t\t\t|        2. ENGLISH          |"<<endl;
    cout<<"\t\t\t\t\t|____________________________|"<<endl;
    cout<<"\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________ "<<endl;
    cout<<"\t\t\t\t\t|                            |"<<endl;
    cout<<"\t\t\t\t\t|        3. RUSCHA           |"<<endl;
    cout<<"\t\t\t\t\t|____________________________|"<<endl;
    cout<<"\n"<<endl;
    int til;
    cout<<"  Tilni tanlang | Choose language : ";
    cin>>til;
    switch (til) {
        Case1:
        case 1: { // UZBEK TILI
            system("cls");
            cout<<"\n\n\n"<<endl;
            cout<<" "<<endl;
            cout<<"\t\t\t\t\t |4 RAQAMLI PIN KODNI KIRITING|"<<endl;
            cout<<"\t\t\t\t\t            >>>| ", cin >> Enter_Parol;

            if(Enter_Parol != Parol){
                cout<<"\t\t\t\t\t        NOTO'GRI PIN KOD!";
                limit--;
                Sleep (2000);
                system("cls");
                if (limit > 0) { goto Case1;}
                else {  cout<<"\n\n\n"<<endl;
                    cout<<"\t\t|KARTANGIZ BLOCKLANDI. O'ZINGIZ UCHUN YAQIN BO'LGAN BANK FILIALIGA MUROJAAT QILING!|";
                    cout<<"\n\n\n"<<endl;
                    return 0;}

            } //xato parol uchun
            else {
                bosh_menyu:
                Sleep (1000);
                system("cls");
                cout<<"\n"<<endl;
                cout<<"\t\t                             | BOSH MENYU: | " <<endl<<endl;
                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  1. BALANSNI TEKSHIRISH       | \t|  5. MOBIL ALOQA UCHUN TO'LOV  |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n";
                cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  2. NAQD PUL OLISH            | \t|  6. KOMMUNAL TO'LOVLAR        |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n";
                cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  3. HISOBNI TOLDIRISH         | \t|  7. SMS HABARNOMA YOQISH      |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n";
                cout<<"\t\t _______________________________  \t _______________________________"<<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  4. KARTAGA PUL O'TKAZISH     | \t|  8. PIN KODNI O'ZGARTIRISH    |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n\n";
                int amaliyot;
                cout<<" |BOSH MENYUDAN AMALIYOTNI TANGLANG: "; cin>>amaliyot;
                switch (amaliyot){

                    case 1: { // HISOBNI TEKSHIRISH MENYUSI
                        system("cls");
                        cout << "\n\n\t\t\t| HOZIRDA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                        Sleep(3000);
                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana_b;
                        if (yana_b) {goto bosh_menyu;}
                        else if (yana_b == 0){ goto rahmat;}
                        break;}//balansni tekshirish case 1

                    case 2: { // NAQD PUL OLISH MENYUSI ==> JAVOHIR
                        int npo, s, summa, yana;
                        int kmiqdor;
                        bow:
                        system("cls");

                        cout<<"\n"<<endl;
                        cout<<"\t\t                 | NAQD PUL MABLAGLARINI YECHIB OLISH: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (1) 100 000            | \t|        (2) 200 000            |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (3) 400 000            | \t|        (4) 800 000            |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (5) 1000 000           | \t|        (6) BOSHQA MIQDOR      |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t                    _______________________________ " <<endl;
                        cout<<"\t\t                   |                               | "<<endl;
                        cout<<"\t\t                   |     (7) ORTGA QAYTISH         | "<<endl;
                        cout<<"\t\t                   |_______________________________| "<<endl;
                        cout<<"\n\n";
                        cout << "\t\t\t| HOZIRDA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                        cout << "| KERAKLI MIQDORNI TANLANG (XIZMAT HAQQI 1%):", cin >> summa;

                        system ("cls");
                        nn:
                        switch (summa){
                            case 1: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                Sleep(3000);
                                system ("cls");
                                balans = balans - (100000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                Sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE1
                            case 2: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                Sleep(3000);
                                system ("cls");
                                balans = balans - (200000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                Sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE2
                            case 3: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                Sleep(3000);
                                system ("cls");
                                balans = balans - (400000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                Sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE3
                            case 4: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                Sleep(3000);
                                system ("cls");
                                balans = balans - (800000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                Sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE4
                            case 5: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                Sleep(3000);
                                system ("cls");
                                balans = balans - (1000000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                Sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE5
                            case 6: {
                                kerakli:
                                cout << "\n\n\n | HOZIRDA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                                cout<<"\n | KERAKLI MIQDORNI KIRITING: ", cin>>kmiqdor;
                                if (balans < kmiqdor){
                                    cout<<"\n\n\t\t\t| HISOBINGIZDA YETARLI MABLAG' MAVJUD EMAS! |";
                                    Sleep(2000);
                                    system ("cls");
                                    goto kerakli; } // not enough money
                                else {
                                    system ("cls");

                                    cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                    Sleep(3000);
                                    system ("cls");
                                    balans = balans - (kmiqdor*1.01);
                                    cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                    cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                    Sleep(4000);

                                    cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                    cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                    if (yana) goto bow;
                                    else if (yana == 0) return 0;
                                    break;}} //CASE5 -- else
                            default : cout << "\n\t\t\t\t|QAYTADAN URINIB KO'RING!"; Sleep (2000); goto bow; break;
                            case 7: { goto bosh_menyu;
                                break;} // ortga qaytish

                        } //swith naqd pul yechish

                        break;} // 2. Naqd pul olish

                    case 3: { // HISOBNI TOLDIRISH MENYUSI ==> JAVOHIR
                        hb:
                        system ("cls");
                        int sum, balans = 1500000;
                        cout << "\t\t\t| HISOB TO'LDIRISH BO'LIMI! |\n\n";
                        cout << " | HISOBINGIZDA " << balans<< " MAVJUD!\n\n" ;
                        cout << " | SUMMANI KIRITING! HIZMAT XAQQI (1%):  " ;
                        cin >> sum;
                        balans = balans + sum * 0.995;
                        system ("cls");
                        cout << "\n\t\t\t| KIRITILGAN MABLAG' QO'SHILMOQDA...\n"<<endl;
                        cout << " | ILTIMOS BIR OZ KUTING!"<<endl;

                        Sleep (4000);

                        system("cls");
                        cout << " \t\t\t| KIRITILGAN MABLAG' HISOBINGIZGA QO'SHILDI! |";
                        cout <<"\n\n| HOZIRDA HISOBINGIZDA "<< balans<< " MAVJUD!" << endl;
                        Sleep (3000);
                        cout << "\n\n| YANA AMAL BAJARISHNI XOXLAYSIZMI?\n";
                        cout << "1. HA | 2. YO'Q | ";
                        int bbq;
                        cin >> bbq ;
                        cout <<  endl;
                        system("cls");
                        if (bbq == 1)
                        {goto bosh_menyu;}
                        else if (bbq == 2)
                        {system ("cls");
                            goto rahmat;}



                        break;} // 3. Hisobni to'ldirish

                    case 4: { // PUL OTKAZMALARI MENYUSI ==> ASLOMBEK
                        int otkazma, yana;

                        long long kartaraqam,o;
                        int pull;
                        bosh:

                        system("cls");

                        cout<<"\n"<<endl;
                        cout<<"\t\t                   | PUL O'TKAZMALARI BO'LIMI: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (1) UZCARD             | \t|        (2) HUMO               |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t                    _______________________________ "<<endl;
                        cout<<"\t\t                   |                               | "<<endl;
                        cout<<"\t\t                   |     (3) ORTGA QAYTISH         | "<<endl;
                        cout<<"\t\t                   |_______________________________| "<<endl;
                        cout<<"\n\n";
                        cout << "\n\n";
                        cout << "| PUL O'TKAZILAYOTGAN KARTANI TURINI TANLANG (XIZMAT HAQQI 1%):", cin >> pull;
                        system("cls");

                        switch(pull){
                            case 1: {
                                case1:
                                system("cls");
                                cout << " | PUL O'TKAZMOQCHI BO'LGAN KARTA RAQAMINI KIRITING: \n   8600", cin>>kartaraqam;
                                system("cls");
                                if (kartaraqam <= 99999999999 || kartaraqam> 999999999999) {
                                    system("cls");
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2000);
                                    goto case1;
                                }//xatolik
                                else {
                                    case1_1:
                                    system("cls");
                                    cout << "\n\n  | KARTA RAQAM EGASI: OCHILOV ASLOMBEK \n ";
                                    cout << " | ESLATIB O'TAMIZ, O'TKAZMALAR UCHUN BANK 1% XIZMAT HAQQI OLADI! \n ";
                                    cout << " | HOZIRDA SIZNING KARTANGIZDAGI PUL  MIQDORI "<<balans<<" UZS \n\n ";
                                    cout << " | O'TKAZMOQCHI BO'LGAN SUMMANI KIRITING: ", cin>>otkazma;
                                    if (balans < (otkazma * 1.01)) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ HISOBINGIZDA YETARLI MABLAG MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto case1_1;
                                    }//balans < otkazma
                                    else {
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH AMALGA OSHIRILMOQDA!|";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH MUVAFFAQIYATLI AMALGA OSHIRILDI!|"<<endl;
                                        balans = balans - (otkazma * 1.01);
                                        cout << "\n\n\t\t\t| HISOBINGIZDA "<<balans<<" UZS qoldi | \n\n"<<endl;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh;}
                                        else if (yana == 0) {return 0;}

                                    } //balans > otkazma

                                }// to'gribosa

                                break; }//case1 uzcard

                            case 2: {
                                case2:
                                system("cls");
                                cout << " | PUL O'TKAZMOQCHI BO'LGAN KARTA RAQAMINI KIRITING: \n   9860", cin>>kartaraqam;
                                system("cls");
                                if (kartaraqam <= 99999999999 || kartaraqam> 999999999999) {
                                    system("cls");
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2000);
                                    goto case2;
                                }//xatolik
                                else {
                                    case2_1:
                                    system("cls");
                                    cout << "\n\n  | KARTA RAQAM EGASI: OCHILOV ASLOMBEK \n ";
                                    cout << " | ESLATIB O'TAMIZ, O'TKAZMALAR UCHUN BANK 1% XIZMAT HAQQI OLADI! \n ";
                                    cout << " | HOZIRDA SIZNING KARTANGIZDAGI PUL  MIQDORI "<<balans<<" UZS \n\n ";
                                    cout << " | O'TKAZMOQCHI BO'LGAN SUMMANI KIRITING: ", cin>>otkazma;
                                    if (balans < (otkazma * 1.01)) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ HISOBINGIZDA YETARLI MABLAG MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto case2_1;
                                    }//balans < otkazma
                                    else {
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH AMALGA OSHIRILMOQDA!|";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH MUVAFFAQIYATLI AMALGA OSHIRILDI!|"<<endl;
                                        balans = balans - (otkazma * 1.01);
                                        cout << "\n\n\t\t\t| HISOBINGIZDA "<<balans<<" UZS qoldi | \n\n"<<endl;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh;}
                                        else if (yana == 0) {return 0;}

                                    } //balans > otkazma

                                }// to'gribosa

                                break; }//case2 humo

                            case 3: {goto bosh_menyu; break;}

                            default: {
                                system("cls");
                                cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                Sleep(2000);
                                goto bosh; break;}//default


                        }//SWITCH pul otkazma

                        break;} // 4. Kartaga pul otqazish

                    case 5: { //MOBIL ALOQA MENYUSI ==> UMIDJON

                        system("cls");
                        int a,b,c, yana;
                        mobil:
                        system("cls");
                        cout<<"\n"<<endl;
                        cout<<"\t\t                  | MOBIL ALOQA UCHUN TO'LOVLAR: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (1) UZMOBILE           | \t|        (2) BEELINE            |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (3) UCELL              | \t|        (4) MOBIUZ             |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (5) HUMANS             | \t|        (6) ORTGA QAYTISH      |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout << "\t\t\t| HOZIRDA KARTA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                        cout << "| MOBIL OPERATORNI TANLANG:", cin >> a;
                        system("cls");


                        switch (a){
                            case 1:{
                                raqam1:
                                system("cls");
                                cout << "\t\t\t| UZMOBILE OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(99)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto raqam1;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2500);
                                    goto raqam1;}
                                break; }//uzmobile case 1

                            case 2:{
                                raqam2:
                                system("cls");
                                cout << "\t\t\t| BEELINE OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(90)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto raqam2;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2500);
                                    goto raqam2;}
                                break; }//BEELINE case 2


                            case 3:{
                                raqam3:
                                system("cls");
                                cout << "\t\t\t| UCELL OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(93)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto raqam3;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2500);
                                    goto raqam3;}
                                break; }//UCELL case 3

                            case 4:{
                                raqam4:
                                system("cls");
                                cout << "\t\t\t| MOBIUZ OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(97)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto raqam4;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2500);
                                    goto raqam4;}
                                break; }//MOBIUZ case 4

                            case 5:{
                                raqam5:
                                system("cls");
                                cout << "\t\t\t| HUMANS OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(33)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto raqam5;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2500);
                                    goto raqam5;}
                                break; }//HUMANS case 5

                            case 6: { goto bosh_menyu; break;}

                            default: {
                                system("cls");
                                cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                Sleep(2000);
                                goto mobil; break;
                            }//default
                        }//switch mobil aloqa menu
                    } // case 5 mobil aloqa

                    case 6: { //KOMMUNAL TO'LOVLAR BO'LIMI ==> MUHAMMAD
                        int komunal;
                        int gazb = 50000, elektrb = 70000, issiqb = 60000, sovuqb = 80000, chiqindib = 20000;
                        int temirovhr = 1234567;
                        kmnl: // orqa qaytish
                        system("cls");
                        cout<<"\n"<<endl;
                        cout<<"\t\t                     | KOMMUNAL TO'LOVLAR BO'LIMI: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  1. ELEKTR ENERGIYASI         | \t|  2. ISSIQ SUV                 |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  3. SOVUQ SUV                 | \t|  4. CHIQINDI                  |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  5. TABIIY GAZ                | \t|  6. ORTGA QAYTISH             |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\n\n";

                        cout<<" |KERAKLI BO'LIMNI TANLANG: "; cin>>komunal;
                        system("cls");

                        //Komunal bo'lim.......

                        switch (komunal){
                            case 1 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                     | ELEKTR ENERGIYA BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI BO'LIMNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                Sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    Sleep (1000);
                                    system("cls");
                                    goto Hisobr;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<elektrb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1Kv= 2000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    Sleep (1000);
                                    elektrb = kv +elektrb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << elektrb << " so'm"<<endl<<endl;
                                    Sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}}
                                    default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;
                                } //hisob raqam to'gri kiritilsa
                            } //  case 1 elektr energiyasi

                            case 2 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | ISSIQ SUV BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr2 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                Sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    Sleep (1000);
                                    system("cls");
                                    goto Hisobr2;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<issiqb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1M Kub ISSIQ SUV = 3000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    Sleep (1000);
                                    issiqb = kv +issiqb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << issiqb << " so'm"<<endl<<endl;
                                    Sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 2 Issiq suv

                            case 3 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | SOVUQ SUV BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr3 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                Sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    Sleep (1000);
                                    system("cls");
                                    goto Hisobr3;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<sovuqb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1M Kub SOVUQ SUV = 1000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    Sleep (1000);
                                    sovuqb = kv +sovuqb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << sovuqb << " so'm"<<endl<<endl;
                                    Sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 3 SOVUQ suv

                            case 4 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | CHIQINDI BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr4 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                Sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    Sleep (1000);
                                    system("cls");
                                    goto Hisobr4;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<issiqb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz chiqindiga 1 oylik to'lov  = 30000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    Sleep (1000);
                                    chiqindib = kv +chiqindib;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << chiqindib << " so'm"<<endl<<endl;
                                    Sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 4  chiqindi

                            case 5 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | TABIIY GAZ BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr5 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                Sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    Sleep (1000);
                                    system("cls");
                                    goto Hisobr5;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<gazb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1 Kub m Tabiiy gaz = 1500 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    Sleep (1000);
                                    gazb = kv +gazb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << gazb << " so'm"<<endl<<endl;
                                    Sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 6 TABBIY GAZ
                            case 6: { goto bosh_menyu; break;}


                        } // kommunal menyu

                        break;} // 6. Kommnal to'lovlar

                    case 7: { // SMS XABARNOMA ==> ASLOMBEK
                        int k,p,telraqam,m, smskod = 7777, kod_check, yana;
                        bosh1:
                        system("cls");

                        cout<<"\n"<<endl;
                        cout<<"\t\t                   | PUL O'TKAZMALARI BO'LIMI: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  (1) SMS XABARNOMA O'CHIRISH  | \t|  (2) SMS XABARNOMA YOQISH     |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t                    _______________________________ "<<endl;
                        cout<<"\t\t                   |                               | "<<endl;
                        cout<<"\t\t                   |     (3) ORTGA QAYTISH         | "<<endl;
                        cout<<"\t\t                   |_______________________________| "<<endl;
                        cout<<"\n\n";
                        cout << "\n\n";
                        cout << "| KERAKLI AMALIYOTNI TANLANG:", cin >> k;
                        system("cls");

                        switch (k){
                            case 1:{
                                Case1_:
                                system("cls");
                                cout << "\n\t\t\t| SMS XABARNOMA O'CHIRILADIGAN TELEFON RAQAMINI KIRITING!|"<<endl<<endl;
                                cout << "  | TELEFON RAQAM: +998";cin >>telraqam;
                                system("cls");


                                if(telraqam>99999999 && telraqam<1000000000){
                                    cout << "\n\t\t\t| ILTIMOS KUTING..|"<<endl<<endl;
                                    Sleep(2000);
                                    system("cls");
                                    CAse1_1:
                                    cout << "\n\t\t\t| SIZGA SMS ORQALI 4 XONALI TASDIQLASH KODI YUBORILDI!|"<<endl<<endl;
                                    cout << "  | ILTIMOS YUBORILGAN KODNI KIRITING: ";cin >>kod_check;
                                    if (kod_check == smskod) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| SMS XABARNOMA MUVAFFAQIYATLI O'CHIRILDI!|";
                                        Sleep(2000);
                                        cout<<"\n\n | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh1;}
                                        else if (yana == 0) {return 0;}
                                    }//kod togri
                                    else if (kod_check != smskod) {
                                        cout << "\n\n XATOLIK, KODNI QAYTADAN KIRITING!|";
                                        Sleep(2000);
                                        system("cls");
                                        goto CAse1_1;
                                    }//kodcheck xato
                                }//TEL RAQAM TOGRI
                                else {
                                    cout << "\n\n XATOLIK, TELEFON RAQAMNI QAYTADAN KIRITING!|";
                                    Sleep(2000);
                                    system("cls");
                                    goto Case1_;
                                }//xato raqam
                                break;} //CASE 1 OCHIRISH

                            case 2:{
                                Case2:
                                system("cls");
                                cout << "\n\t\t\t| SMS XABARNOMA YOQISH UCHUN TELEFON RAQAMINI KIRITING!|"<<endl<<endl;
                                cout << "  | TELEFON RAQAM: +998";cin >>telraqam;
                                system("cls");


                                if(telraqam>99999999 && telraqam<1000000000){
                                    cout << "\n\t\t\t| ILTIMOS KUTING..|"<<endl<<endl;
                                    Sleep(2000);
                                    system("cls");
                                    CAse2_1:
                                    cout << "\n\t\t\t| SIZGA SMS ORQALI 4 XONALI TASDIQLASH KODI YUBORILDI!|"<<endl<<endl;
                                    cout << "  | ILTIMOS YUBORILGAN KODNI KIRITING: ";cin >>kod_check;
                                    if (kod_check == smskod) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| SMS XABARNOMA MUVAFFAQIYATLI YOQILDI!|";
                                        Sleep(2000);
                                        cout<<"\n\n | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh1;}
                                        else if (yana == 0) {return 0;}
                                    }//kod togri
                                    else if (kod_check != smskod) {
                                        cout << "\n\n XATOLIK, KODNI QAYTADAN KIRITING!|";
                                        Sleep(2000);
                                        system("cls");
                                        goto CAse2_1;
                                    }//kodcheck xato
                                }//TEL RAQAM TOGRI
                                else {
                                    cout << "\n\n XATOLIK, TELEFON RAQAMNI QAYTADAN KIRITING!|";
                                    Sleep(2000);
                                    system("cls");
                                    goto Case2;
                                }//xato raqam
                                break;} //CASE 2 YOQISH

                            case 3: { goto bosh_menyu; break;}
                            default: {
                                cout<<"\n\n\t\t\t| HURMATLI MIJOZ, ILTIMOS RAQAMNI QAYTADAN KIRITING! |";
                                Sleep(2000);
                                goto bosh1; break;
                            }

                        }// SWITC SMS XABARNOMA

                        break;} // 7. SMS xabarnoma

                    case 8: { // PIN KODNI O'ZGARTIRISH
                        pin_ozg:
                        int pincheck;
                        system("cls");
                        cout << "\n\t\t\t| PLASTIK KARTA PIN KODINI O'ZGARTIRISH MENYUSI|";
                        cout << "\n\n\n  | PLASTIK KARTANING HOZIRGI PIN KODINI KIRITING: ", cin>>pincheck;
                        cout << "\n\n  | YANGI 4 XONALI PIN KODNI KIRITING: ", cin>>pinchange_1;
                        cout << "\n  | YANGI PIN KODNI QAYTA KIRITING: ", cin>>pinchange_2;
                        if ( Parol == pincheck && pinchange_1 == pinchange_2 && pinchange_1 >999 && pinchange_1<10000 ) {
                            Parol = pinchange_1;
                            cout <<"\n\n\n\t\t\t   | PIN KOD MUVAFFAQIYATLI O'ZGARTIRILDI!|";
                            Sleep(1500);
                            cout<<"\n\n | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana_b;
                            if (yana_b) {goto bosh_menyu;}
                            else if (yana_b == 0){ goto rahmat;}
                        }else{
                            cout << "\n\n  | XATOLIK QAYTADAN URINIB KO'RING!|";
                            Sleep(2000);
                            goto pin_ozg;
                        }

                        break;} // 7. Pin kodni ozgartirish

                    default: { //BOSH MENYU XATOLIK
                        cout << "\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                        Sleep(2500);
                        goto bosh_menyu; break;}
                }//o'zbek tili bosh menyu switch

            } // parol togri kirilsa

            break;}
        case 2: { break;} // English
        case 3: { break;} // Russian
        default: { cout << "\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
            Sleep(2500);
            goto Language; break;}
    } //switch TIL uchun

    rahmat:
    system("cls");
    cout<<"\n\n\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________________________ "<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|         KAPITALBANK XIZMATLARIDAN          |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|       FOYDALANGANINGIZ UCHUN RAHMAT!       |"<<endl;
    cout<<"\t\t\t\t\t|____________________________________________| \n\n\n\n\n\n\n\n\n\n"<<endl;

    return 0;
}
#include <iostream>

#include <windows.h>



using namespace std;

int main()
{
    system("color F1");
    Start:

    cout<<"\n\n\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________________________ "<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|   KAPITALBANK BANKOMATIGA HUSH KELIBSIZ!   |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|        WELCOME TO KAPITALBANK ATM!         |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|____________________________________________|"<<endl;
    cout<<"\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________________________ "<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|     ILTIMOS PLASTIK KARTANI KIRITING!      |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|         PLEASE INSERT YOUR CARD!           |"<<endl;
    cout<<"\t\t\t\t\t|____________________________________________|"<<endl;
    int next;
    cin>>next;
    if (next) {
        system("cls");
        cout<<"\n\n\n"<<endl;
        cout<<"\t\t\t\t\t | Ma'lumotlar yuklanmoqda... |"<<endl;
        Sleep(2000);
        system("cls");}
    // Bismillah. Tilni tanlash
    Language:
    int balans = 1500000,Parol = 7777, Enter_Parol, pinchange_1, pinchange_2, limit = 3, yana_b;
    system("cls");
    cout<<"\t\t\t\t\t ____________________________ "<<endl;
    cout<<"\t\t\t\t\t|                            |"<<endl;
    cout<<"\t\t\t\t\t|       1. O'ZBEKCHA         |"<<endl;
    cout<<"\t\t\t\t\t|____________________________|"<<endl;
    cout<<"\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________ "<<endl;
    cout<<"\t\t\t\t\t|                            |"<<endl;
    cout<<"\t\t\t\t\t|        2. ENGLISH          |"<<endl;
    cout<<"\t\t\t\t\t|____________________________|"<<endl;
    cout<<"\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________ "<<endl;
    cout<<"\t\t\t\t\t|                            |"<<endl;
    cout<<"\t\t\t\t\t|        3. RUSCHA           |"<<endl;
    cout<<"\t\t\t\t\t|____________________________|"<<endl;
    cout<<"\n"<<endl;
    int til;
    cout<<"  Tilni tanlang | Choose language : ";
    cin>>til;
    switch (til) {
        Case1:
        case 1: { // UZBEK TILI
            system("cls");
            cout<<"\n\n\n"<<endl;
            cout<<" "<<endl;
            cout<<"\t\t\t\t\t |4 RAQAMLI PIN KODNI KIRITING|"<<endl;
            cout<<"\t\t\t\t\t            >>>| ", cin >> Enter_Parol;

            if(Enter_Parol != Parol){
                cout<<"\t\t\t\t\t        NOTO'GRI PIN KOD!";
                limit--;
                Sleep (2000);
                system("cls");
                if (limit > 0) { goto Case1;}
                else {  cout<<"\n\n\n"<<endl;
                    cout<<"\t\t|KARTANGIZ BLOCKLANDI. O'ZINGIZ UCHUN YAQIN BO'LGAN BANK FILIALIGA MUROJAAT QILING!|";
                    cout<<"\n\n\n"<<endl;
                    return 0;}

            } //xato parol uchun
            else {
                bosh_menyu:
                Sleep (1000);
                system("cls");
                cout<<"\n"<<endl;
                cout<<"\t\t                             | BOSH MENYU: | " <<endl<<endl;
                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  1. BALANSNI TEKSHIRISH       | \t|  5. MOBIL ALOQA UCHUN TO'LOV  |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n";
                cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  2. NAQD PUL OLISH            | \t|  6. KOMMUNAL TO'LOVLAR        |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n";
                cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  3. HISOBNI TOLDIRISH         | \t|  7. SMS HABARNOMA YOQISH      |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n";
                cout<<"\t\t _______________________________  \t _______________________________"<<endl;
                cout<<"\t\t|                               | \t|                               |"<<endl;
                cout<<"\t\t|  4. KARTAGA PUL O'TKAZISH     | \t|  8. PIN KODNI O'ZGARTIRISH    |"<<endl;
                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                cout<<"\n\n";
                int amaliyot;
                cout<<" |BOSH MENYUDAN AMALIYOTNI TANGLANG: "; cin>>amaliyot;
                switch (amaliyot){

                    case 1: { // HISOBNI TEKSHIRISH MENYUSI
                        system("cls");
                        cout << "\n\n\t\t\t| HOZIRDA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                        Sleep(3000);
                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana_b;
                        if (yana_b) {goto bosh_menyu;}
                        else if (yana_b == 0){ goto rahmat;}
                        break;}//balansni tekshirish case 1

                    case 2: { // NAQD PUL OLISH MENYUSI ==> JAVOHIR
                        int npo, s, summa, yana;
                        int kmiqdor;
                        bow:
                        system("cls");

                        cout<<"\n"<<endl;
                        cout<<"\t\t                 | NAQD PUL MABLAGLARINI YECHIB OLISH: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (1) 100 000            | \t|        (2) 200 000            |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (3) 400 000            | \t|        (4) 800 000            |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (5) 1000 000           | \t|        (6) BOSHQA MIQDOR      |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t                    _______________________________ " <<endl;
                        cout<<"\t\t                   |                               | "<<endl;
                        cout<<"\t\t                   |     (7) ORTGA QAYTISH         | "<<endl;
                        cout<<"\t\t                   |_______________________________| "<<endl;
                        cout<<"\n\n";
                        cout << "\t\t\t| HOZIRDA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                        cout << "| KERAKLI MIQDORNI TANLANG (XIZMAT HAQQI 1%):", cin >> summa;

                        system ("cls");
                        nn:
                        switch (summa){
                            case 1: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                Sleep(3000);
                                system ("cls");
                                balans = balans - (100000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                Sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE1
                            case 2: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                Sleep(3000);
                                system ("cls");
                                balans = balans - (200000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                Sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE2
                            case 3: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                Sleep(3000);
                                system ("cls");
                                balans = balans - (400000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                Sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE3
                            case 4: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                Sleep(3000);
                                system ("cls");
                                balans = balans - (800000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                Sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE4
                            case 5: {
                                cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                Sleep(3000);
                                system ("cls");
                                balans = balans - (1000000.0*1.01);
                                cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                Sleep(2000);

                                cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                if (yana) goto bow;
                                else if (yana == 0) return 0;
                                break;} //CASE5
                            case 6: {
                                kerakli:
                                cout << "\n\n\n | HOZIRDA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                                cout<<"\n | KERAKLI MIQDORNI KIRITING: ", cin>>kmiqdor;
                                if (balans < kmiqdor){
                                    cout<<"\n\n\t\t\t| HISOBINGIZDA YETARLI MABLAG' MAVJUD EMAS! |";
                                    Sleep(2000);
                                    system ("cls");
                                    goto kerakli; } // not enough money
                                else {
                                    system ("cls");

                                    cout<<"\n\n\t\t\t| NAQD PUL MABLAG'LARI HISOBLANMOQDA... |";
                                    Sleep(3000);
                                    system ("cls");
                                    balans = balans - (kmiqdor*1.01);
                                    cout<<"\n\n\n\t\t\t| ILTIMOS PULNI BANKOMATDAN UZOQLASHMASDAN PULNI SANAB OLING! |";
                                    cout<<"\n\n\t\t\t           | HISOBINGIZDA QOLGAN MABLAG':" <<balans<<" |";
                                    Sleep(4000);

                                    cout<<"\n\n\n----------------------------------------------------------------------------------------------------------\n\n";
                                    cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                    if (yana) goto bow;
                                    else if (yana == 0) return 0;
                                    break;}} //CASE5 -- else
                            default : cout << "\n\t\t\t\t|QAYTADAN URINIB KO'RING!"; Sleep (2000); goto bow; break;
                            case 7: { goto bosh_menyu;
                                break;} // ortga qaytish

                        } //swith naqd pul yechish

                        break;} // 2. Naqd pul olish

                    case 3: { // HISOBNI TOLDIRISH MENYUSI ==> JAVOHIR
                        hb:
                        system ("cls");
                        int sum, balans = 1500000;
                        cout << "\t\t\t| HISOB TO'LDIRISH BO'LIMI! |\n\n";
                        cout << " | HISOBINGIZDA " << balans<< " MAVJUD!\n\n" ;
                        cout << " | SUMMANI KIRITING! HIZMAT XAQQI (1%):  " ;
                        cin >> sum;
                        balans = balans + sum * 0.995;
                        system ("cls");
                        cout << "\n\t\t\t| KIRITILGAN MABLAG' QO'SHILMOQDA...\n"<<endl;
                        cout << " | ILTIMOS BIR OZ KUTING!"<<endl;

                        Sleep (4000);

                        system("cls");
                        cout << " \t\t\t| KIRITILGAN MABLAG' HISOBINGIZGA QO'SHILDI! |";
                        cout <<"\n\n| HOZIRDA HISOBINGIZDA "<< balans<< " MAVJUD!" << endl;
                        Sleep (3000);
                        cout << "\n\n| YANA AMAL BAJARISHNI XOXLAYSIZMI?\n";
                        cout << "1. HA | 2. YO'Q | ";
                        int bbq;
                        cin >> bbq ;
                        cout <<  endl;
                        system("cls");
                        if (bbq == 1)
                        {goto bosh_menyu;}
                        else if (bbq == 2)
                        {system ("cls");
                            goto rahmat;}



                        break;} // 3. Hisobni to'ldirish

                    case 4: { // PUL OTKAZMALARI MENYUSI ==> ASLOMBEK
                        int otkazma, yana;

                        long long kartaraqam,o;
                        int pull;
                        bosh:

                        system("cls");

                        cout<<"\n"<<endl;
                        cout<<"\t\t                   | PUL O'TKAZMALARI BO'LIMI: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (1) UZCARD             | \t|        (2) HUMO               |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t                    _______________________________ "<<endl;
                        cout<<"\t\t                   |                               | "<<endl;
                        cout<<"\t\t                   |     (3) ORTGA QAYTISH         | "<<endl;
                        cout<<"\t\t                   |_______________________________| "<<endl;
                        cout<<"\n\n";
                        cout << "\n\n";
                        cout << "| PUL O'TKAZILAYOTGAN KARTANI TURINI TANLANG (XIZMAT HAQQI 1%):", cin >> pull;
                        system("cls");

                        switch(pull){
                            case 1: {
                                case1:
                                system("cls");
                                cout << " | PUL O'TKAZMOQCHI BO'LGAN KARTA RAQAMINI KIRITING: \n   8600", cin>>kartaraqam;
                                system("cls");
                                if (kartaraqam <= 99999999999 || kartaraqam> 999999999999) {
                                    system("cls");
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2000);
                                    goto case1;
                                }//xatolik
                                else {
                                    case1_1:
                                    system("cls");
                                    cout << "\n\n  | KARTA RAQAM EGASI: OCHILOV ASLOMBEK \n ";
                                    cout << " | ESLATIB O'TAMIZ, O'TKAZMALAR UCHUN BANK 1% XIZMAT HAQQI OLADI! \n ";
                                    cout << " | HOZIRDA SIZNING KARTANGIZDAGI PUL  MIQDORI "<<balans<<" UZS \n\n ";
                                    cout << " | O'TKAZMOQCHI BO'LGAN SUMMANI KIRITING: ", cin>>otkazma;
                                    if (balans < (otkazma * 1.01)) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ HISOBINGIZDA YETARLI MABLAG MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto case1_1;
                                    }//balans < otkazma
                                    else {
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH AMALGA OSHIRILMOQDA!|";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH MUVAFFAQIYATLI AMALGA OSHIRILDI!|"<<endl;
                                        balans = balans - (otkazma * 1.01);
                                        cout << "\n\n\t\t\t| HISOBINGIZDA "<<balans<<" UZS qoldi | \n\n"<<endl;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh;}
                                        else if (yana == 0) {return 0;}

                                    } //balans > otkazma

                                }// to'gribosa

                                break; }//case1 uzcard

                            case 2: {
                                case2:
                                system("cls");
                                cout << " | PUL O'TKAZMOQCHI BO'LGAN KARTA RAQAMINI KIRITING: \n   9860", cin>>kartaraqam;
                                system("cls");
                                if (kartaraqam <= 99999999999 || kartaraqam> 999999999999) {
                                    system("cls");
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2000);
                                    goto case2;
                                }//xatolik
                                else {
                                    case2_1:
                                    system("cls");
                                    cout << "\n\n  | KARTA RAQAM EGASI: OCHILOV ASLOMBEK \n ";
                                    cout << " | ESLATIB O'TAMIZ, O'TKAZMALAR UCHUN BANK 1% XIZMAT HAQQI OLADI! \n ";
                                    cout << " | HOZIRDA SIZNING KARTANGIZDAGI PUL  MIQDORI "<<balans<<" UZS \n\n ";
                                    cout << " | O'TKAZMOQCHI BO'LGAN SUMMANI KIRITING: ", cin>>otkazma;
                                    if (balans < (otkazma * 1.01)) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ HISOBINGIZDA YETARLI MABLAG MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto case2_1;
                                    }//balans < otkazma
                                    else {
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH AMALGA OSHIRILMOQDA!|";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| O'TKAZISH MUVAFFAQIYATLI AMALGA OSHIRILDI!|"<<endl;
                                        balans = balans - (otkazma * 1.01);
                                        cout << "\n\n\t\t\t| HISOBINGIZDA "<<balans<<" UZS qoldi | \n\n"<<endl;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh;}
                                        else if (yana == 0) {return 0;}

                                    } //balans > otkazma

                                }// to'gribosa

                                break; }//case2 humo

                            case 3: {goto bosh_menyu; break;}

                            default: {
                                system("cls");
                                cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                Sleep(2000);
                                goto bosh; break;}//default


                        }//SWITCH pul otkazma

                        break;} // 4. Kartaga pul otqazish

                    case 5: { //MOBIL ALOQA MENYUSI ==> UMIDJON

                        system("cls");
                        int a,b,c, yana;
                        mobil:
                        system("cls");
                        cout<<"\n"<<endl;
                        cout<<"\t\t                  | MOBIL ALOQA UCHUN TO'LOVLAR: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (1) UZMOBILE           | \t|        (2) BEELINE            |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (3) UCELL              | \t|        (4) MOBIUZ             |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|        (5) HUMANS             | \t|        (6) ORTGA QAYTISH      |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout << "\t\t\t| HOZIRDA KARTA HISOBINGIZDAGI MABLAG':"<<balans<<" UZS |\n\n";
                        cout << "| MOBIL OPERATORNI TANLANG:", cin >> a;
                        system("cls");


                        switch (a){
                            case 1:{
                                raqam1:
                                system("cls");
                                cout << "\t\t\t| UZMOBILE OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(99)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto raqam1;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2500);
                                    goto raqam1;}
                                break; }//uzmobile case 1

                            case 2:{
                                raqam2:
                                system("cls");
                                cout << "\t\t\t| BEELINE OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(90)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto raqam2;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2500);
                                    goto raqam2;}
                                break; }//BEELINE case 2


                            case 3:{
                                raqam3:
                                system("cls");
                                cout << "\t\t\t| UCELL OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(93)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto raqam3;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2500);
                                    goto raqam3;}
                                break; }//UCELL case 3

                            case 4:{
                                raqam4:
                                system("cls");
                                cout << "\t\t\t| MOBIUZ OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(97)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto raqam4;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2500);
                                    goto raqam4;}
                                break; }//MOBIUZ case 4

                            case 5:{
                                raqam5:
                                system("cls");
                                cout << "\t\t\t| HUMANS OPERATORI UCHUN TO'LOV:|\n\n";
                                cout << "\n  | TELEFON RAQAM: +998(33)", cin >> b;

                                if(b>999999 && b<10000000){
                                    cout << "  | TO'LOV SUMMASINI KIRITING : ", cin >> c;
                                    if (c>balans) {
                                        cout << "\n\n\t\t\t| HURMATLI MIJOZ KARTANGIZDA YETARLI MABLAG' MAVJUD EMAS!|";
                                        Sleep(2000);
                                        goto raqam5;
                                    }else if (c<=balans) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV AMALGA OSHIRILMOQDA...|\n\n";
                                        Sleep(2000);
                                        system("cls");
                                        cout << "\n\n\t\t\t| TO'LOV MUVAFFAQIYATLI AMALGA OSHIRILDI!|\n\n";
                                        balans = balans - c;
                                        Sleep(2000);
                                        cout<<" | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) goto mobil;
                                        else if (yana == 0) return 0;}
                                }else{
                                    cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                    Sleep(2500);
                                    goto raqam5;}
                                break; }//HUMANS case 5

                            case 6: { goto bosh_menyu; break;}

                            default: {
                                system("cls");
                                cout << "\n\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                                Sleep(2000);
                                goto mobil; break;
                            }//default
                        }//switch mobil aloqa menu
                    } // case 5 mobil aloqa

                    case 6: { //KOMMUNAL TO'LOVLAR BO'LIMI ==> MUHAMMAD
                        int komunal;
                        int gazb = 50000, elektrb = 70000, issiqb = 60000, sovuqb = 80000, chiqindib = 20000;
                        int temirovhr = 1234567;
                        kmnl: // orqa qaytish
                        system("cls");
                        cout<<"\n"<<endl;
                        cout<<"\t\t                     | KOMMUNAL TO'LOVLAR BO'LIMI: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  1. ELEKTR ENERGIYASI         | \t|  2. ISSIQ SUV                 |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  3. SOVUQ SUV                 | \t|  4. CHIQINDI                  |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t _______________________________  \t _______________________________ "<<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  5. TABIIY GAZ                | \t|  6. ORTGA QAYTISH             |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\n\n";

                        cout<<" |KERAKLI BO'LIMNI TANLANG: "; cin>>komunal;
                        system("cls");

                        //Komunal bo'lim.......

                        switch (komunal){
                            case 1 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                     | ELEKTR ENERGIYA BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI BO'LIMNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                Sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    Sleep (1000);
                                    system("cls");
                                    goto Hisobr;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<elektrb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1Kv= 2000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    Sleep (1000);
                                    elektrb = kv +elektrb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << elektrb << " so'm"<<endl<<endl;
                                    Sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}}
                                    default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;
                                } //hisob raqam to'gri kiritilsa
                            } //  case 1 elektr energiyasi

                            case 2 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | ISSIQ SUV BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr2 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                Sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    Sleep (1000);
                                    system("cls");
                                    goto Hisobr2;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<issiqb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1M Kub ISSIQ SUV = 3000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    Sleep (1000);
                                    issiqb = kv +issiqb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << issiqb << " so'm"<<endl<<endl;
                                    Sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 2 Issiq suv

                            case 3 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | SOVUQ SUV BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr3 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                Sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    Sleep (1000);
                                    system("cls");
                                    goto Hisobr3;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<sovuqb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1M Kub SOVUQ SUV = 1000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    Sleep (1000);
                                    sovuqb = kv +sovuqb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << sovuqb << " so'm"<<endl<<endl;
                                    Sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 3 SOVUQ suv

                            case 4 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | CHIQINDI BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr4 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                Sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    Sleep (1000);
                                    system("cls");
                                    goto Hisobr4;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<issiqb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz chiqindiga 1 oylik to'lov  = 30000 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    Sleep (1000);
                                    chiqindib = kv +chiqindib;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << chiqindib << " so'm"<<endl<<endl;
                                    Sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 4  chiqindi

                            case 5 : {int viloyat;
                                cout<<"\n"<<endl;
                                cout<<"\t\t                        | TABIIY GAZ BO'LIMI: | " <<endl<<endl;
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        1. ANDIJON             | \t|       2. BUXORO               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        3. FARG'ONA            | \t|       4. JIZZAX               |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        5. XORAZM              | \t|       6. NAMANGAN             |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        7. NAVOIY              | \t|       8. QASHQADARYO          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        9. QORAQALPOQ R.       | \t|       10. SAMARQAND           |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        11. SIRDAYRO           | \t|       12. SURXANDARYO         |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        13. TASHKENT V.        | \t|       14. TASHKENT SH.        |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n";
                                cout<<"\t\t _______________________________ \t _______________________________ " <<endl;
                                cout<<"\t\t|                               | \t|                               |"<<endl;
                                cout<<"\t\t|        15. ORQAGA             | \t|       16. BOSH MENYU          |"<<endl;
                                cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                                cout<<"\n\n";
                                cout<<" |KERAKLI VILOYATNI TANLANG: "; cin>>viloyat;

                                system("cls");
                                int hisob_raqam, kv, summa, qaytaU;
                                cout<<endl;
                                switch (viloyat){
                                    case 1 : {cout << "\t\t\t| SIZ ANDIJON VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 2 : {cout << "\t\t\t| SIZ BUXORO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 3 : {cout << "\t\t\t| SIZ FARG'ONA VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 4 : {cout << "\t\t\t| SIZ JIZZAX VILOYATINI TANLADINGIZ!| \n\n"; break;}
                                    case 5 : {cout << "\t\t\t| SIZ XORAZM VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 6 : {cout << "\t\t\t| SIZ NAMANGAN VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 7 : {cout << "\t\t\t| SIZ NAVOIY VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 8 : {cout << "\t\t\t| SIZ QASHQADARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 9 : {cout << "\t\t\t| SIZ QORAQALPOG'ISTON RESPUBLIKASINI TANLADINGIZ!|\n\n"; break;}
                                    case 10 : {cout << "\t\t\t| SIZ SAMARQAND VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 11 : {cout << "\t\t\t| SIZ SIRDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 12 : {cout << "\t\t\t| SIZ SURXONDARYO VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 13 : {cout << "\t\t\t| SIZ TOSHKENT VILOYATINI TANLADINGIZ!|\n\n"; break;}
                                    case 14 : {cout << "\t\t\t| SIZ TOSHKENT SHAHRINI TANLADINGIZ!|\n\n"; break;}
                                    case 15 : {
                                        system("cls");
                                        goto kmnl;}

                                }
                                Hisobr5 :
                                cout<<" |HISOB RAQAMINI KIRITING: ", cin >> hisob_raqam;
                                Sleep (1000);
                                if (hisob_raqam != temirovhr ) {
                                    cout<<"|HISOB RAQAMINI NOTO'GRI KIRITDINGIZ!|";
                                    Sleep (1000);
                                    system("cls");
                                    goto Hisobr5;
                                }//hisob raqam tekshirish
                                else if (hisob_raqam == temirovhr) {
                                    cout << "\n| Hisob Raqam egasi: Temirov M."<<endl;
                                    cout << "| Hozir hisobingizdagi mablag': "<<gazb<<" so'm\n";
                                    cout << "| Eslatib o'tamiz 1 Kub m Tabiiy gaz = 1500 so'm.\n\n";
                                    cout << "| To'lov miqdorini kiriting: "; cin >> kv;
                                    Sleep (1000);
                                    gazb = kv +gazb;
                                    system("cls");
                                    cout << "\n\n\n| Hisob raqamangizga:" << kv << " so'm muvaffaqiyatli tushirildi.";
                                    cout << "\n| Hisobingizdagi mablag':" << gazb << " so'm"<<endl<<endl;
                                    Sleep(3000);
                                    cout << "\t\t\t| Boshqa so'rovnomani amalga oshirasizmi?\n";
                                    cout << "| 1.Xa.";
                                    cout << "| 2.Yo'q.\n";
                                    cin >> qaytaU;

                                    switch (qaytaU){
                                        case 1 : {system("cls"); goto kmnl;
                                            break;}
                                        default : cout << "ETIBORINGIZ UCHUN RAHMAT"; break;}
                                } //hisob raqam to'gri kiritilsa
                            } //  case 6 TABBIY GAZ
                            case 6: { goto bosh_menyu; break;}


                        } // kommunal menyu

                        break;} // 6. Kommnal to'lovlar

                    case 7: { // SMS XABARNOMA ==> ASLOMBEK
                        int k,p,telraqam,m, smskod = 7777, kod_check, yana;
                        bosh1:
                        system("cls");

                        cout<<"\n"<<endl;
                        cout<<"\t\t                   | PUL O'TKAZMALARI BO'LIMI: | " <<endl<<endl;
                        cout<<"\t\t _______________________________ \t  _______________________________ " <<endl;
                        cout<<"\t\t|                               | \t|                               |"<<endl;
                        cout<<"\t\t|  (1) SMS XABARNOMA O'CHIRISH  | \t|  (2) SMS XABARNOMA YOQISH     |"<<endl;
                        cout<<"\t\t|_______________________________| \t|_______________________________|"<<endl;
                        cout<<"\n";
                        cout<<"\t\t                    _______________________________ "<<endl;
                        cout<<"\t\t                   |                               | "<<endl;
                        cout<<"\t\t                   |     (3) ORTGA QAYTISH         | "<<endl;
                        cout<<"\t\t                   |_______________________________| "<<endl;
                        cout<<"\n\n";
                        cout << "\n\n";
                        cout << "| KERAKLI AMALIYOTNI TANLANG:", cin >> k;
                        system("cls");

                        switch (k){
                            case 1:{
                                Case1_:
                                system("cls");
                                cout << "\n\t\t\t| SMS XABARNOMA O'CHIRILADIGAN TELEFON RAQAMINI KIRITING!|"<<endl<<endl;
                                cout << "  | TELEFON RAQAM: +998";cin >>telraqam;
                                system("cls");


                                if(telraqam>99999999 && telraqam<1000000000){
                                    cout << "\n\t\t\t| ILTIMOS KUTING..|"<<endl<<endl;
                                    Sleep(2000);
                                    system("cls");
                                    CAse1_1:
                                    cout << "\n\t\t\t| SIZGA SMS ORQALI 4 XONALI TASDIQLASH KODI YUBORILDI!|"<<endl<<endl;
                                    cout << "  | ILTIMOS YUBORILGAN KODNI KIRITING: ";cin >>kod_check;
                                    if (kod_check == smskod) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| SMS XABARNOMA MUVAFFAQIYATLI O'CHIRILDI!|";
                                        Sleep(2000);
                                        cout<<"\n\n | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh1;}
                                        else if (yana == 0) {return 0;}
                                    }//kod togri
                                    else if (kod_check != smskod) {
                                        cout << "\n\n XATOLIK, KODNI QAYTADAN KIRITING!|";
                                        Sleep(2000);
                                        system("cls");
                                        goto CAse1_1;
                                    }//kodcheck xato
                                }//TEL RAQAM TOGRI
                                else {
                                    cout << "\n\n XATOLIK, TELEFON RAQAMNI QAYTADAN KIRITING!|";
                                    Sleep(2000);
                                    system("cls");
                                    goto Case1_;
                                }//xato raqam
                                break;} //CASE 1 OCHIRISH

                            case 2:{
                                Case2:
                                system("cls");
                                cout << "\n\t\t\t| SMS XABARNOMA YOQISH UCHUN TELEFON RAQAMINI KIRITING!|"<<endl<<endl;
                                cout << "  | TELEFON RAQAM: +998";cin >>telraqam;
                                system("cls");


                                if(telraqam>99999999 && telraqam<1000000000){
                                    cout << "\n\t\t\t| ILTIMOS KUTING..|"<<endl<<endl;
                                    Sleep(2000);
                                    system("cls");
                                    CAse2_1:
                                    cout << "\n\t\t\t| SIZGA SMS ORQALI 4 XONALI TASDIQLASH KODI YUBORILDI!|"<<endl<<endl;
                                    cout << "  | ILTIMOS YUBORILGAN KODNI KIRITING: ";cin >>kod_check;
                                    if (kod_check == smskod) {
                                        system("cls");
                                        cout << "\n\n\t\t\t| SMS XABARNOMA MUVAFFAQIYATLI YOQILDI!|";
                                        Sleep(2000);
                                        cout<<"\n\n | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana;
                                        if (yana) {goto bosh1;}
                                        else if (yana == 0) {return 0;}
                                    }//kod togri
                                    else if (kod_check != smskod) {
                                        cout << "\n\n XATOLIK, KODNI QAYTADAN KIRITING!|";
                                        Sleep(2000);
                                        system("cls");
                                        goto CAse2_1;
                                    }//kodcheck xato
                                }//TEL RAQAM TOGRI
                                else {
                                    cout << "\n\n XATOLIK, TELEFON RAQAMNI QAYTADAN KIRITING!|";
                                    Sleep(2000);
                                    system("cls");
                                    goto Case2;
                                }//xato raqam
                                break;} //CASE 2 YOQISH

                            case 3: { goto bosh_menyu; break;}
                            default: {
                                cout<<"\n\n\t\t\t| HURMATLI MIJOZ, ILTIMOS RAQAMNI QAYTADAN KIRITING! |";
                                Sleep(2000);
                                goto bosh1; break;
                            }

                        }// SWITC SMS XABARNOMA

                        break;} // 7. SMS xabarnoma

                    case 8: { // PIN KODNI O'ZGARTIRISH
                        pin_ozg:
                        int pincheck;
                        system("cls");
                        cout << "\n\t\t\t| PLASTIK KARTA PIN KODINI O'ZGARTIRISH MENYUSI|";
                        cout << "\n\n\n  | PLASTIK KARTANING HOZIRGI PIN KODINI KIRITING: ", cin>>pincheck;
                        cout << "\n\n  | YANGI 4 XONALI PIN KODNI KIRITING: ", cin>>pinchange_1;
                        cout << "\n  | YANGI PIN KODNI QAYTA KIRITING: ", cin>>pinchange_2;
                        if ( Parol == pincheck && pinchange_1 == pinchange_2 && pinchange_1 >999 && pinchange_1<10000 ) {
                            Parol = pinchange_1;
                            cout <<"\n\n\n\t\t\t   | PIN KOD MUVAFFAQIYATLI O'ZGARTIRILDI!|";
                            Sleep(1500);
                            cout<<"\n\n | YANA AMAL BAJARMOQCHIMISIZ? XA:1| YO'Q:0 |"; cin>>yana_b;
                            if (yana_b) {goto bosh_menyu;}
                            else if (yana_b == 0){ goto rahmat;}
                        }else{
                            cout << "\n\n  | XATOLIK QAYTADAN URINIB KO'RING!|";
                            Sleep(2000);
                            goto pin_ozg;
                        }

                        break;} // 7. Pin kodni ozgartirish

                    default: { //BOSH MENYU XATOLIK
                        cout << "\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
                        Sleep(2500);
                        goto bosh_menyu; break;}
                }//o'zbek tili bosh menyu switch

            } // parol togri kirilsa

            break;}
        case 2: { break;} // English
        case 3: { break;} // Russian
        default: { cout << "\n\t\t\t| HURMATLI MIJOZ SIZ NOTOG'RI RAQAM KIRITDINGIZ!|";
            Sleep(2500);
            goto Language; break;}
    } //switch TIL uchun

    rahmat:
    system("cls");
    cout<<"\n\n\n"<<endl;
    cout<<"\t\t\t\t\t ____________________________________________ "<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|         KAPITALBANK XIZMATLARIDAN          |"<<endl;
    cout<<"\t\t\t\t\t|                                            |"<<endl;
    cout<<"\t\t\t\t\t|       FOYDALANGANINGIZ UCHUN RAHMAT!       |"<<endl;
    cout<<"\t\t\t\t\t|____________________________________________| \n\n\n\n\n\n\n\n\n\n"<<endl;

    return 0;
}
