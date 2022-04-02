#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<conio.h>
#include<time.h>
using namespace std;

class vip
{
public:
    void intro();
    void story();
    void asif_story();
    void poems();
    void delay(int);
    void credit();
    void devo();

};


void vip::intro() {
     int i;
     char choice, name[20];
     system("cls");
     printf("\n\t\t\t Shahitto Bilash!!!\n");
     printf("\n\t\t________________________________________");
     printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t      TO ");
     printf("\n\t\t\t   THE APP ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t   READ AND ENLIGHTEN YOURSELF!!!!!!!!!!!    ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to Read Stories              ");
     printf("\n\t\t > Press P to read Poems                ");
     printf("\n\t\t > Press A to read stories of Asif      ");
     printf("\n\t\t > Press D to see who developed this app!");
     printf("\n\t\t > Press Q to quit                   ");
     printf("\n\t\t________________________________________\n\n");



    choice = getch();
    if(choice == 'S' || choice == 's')
    {
       system("cls");
       story();
    }
    else if(choice == 'P' || choice == 'p')
    {
      poems();
    }
    else if(choice == 'A' || choice == 'a')
    {
      system("cls");
      asif_story();
    }
    else if(choice == 'D' || choice == 'd')
    {
      system("cls");
      devo();
    }
    else if(choice == 'Q' || choice == 'q')
    {
      system("cls");
      credit();
      //return 0;
    }
    else
    {
        printf("INVALID KEYWORD!!!!\a");
        for (i = 0; i < 2; i++) {
        delay(1);

    }
        intro();
    }

     }
void vip::story()
{

        system("cls");
        int i;
        char author,rabi,nazrul,sharat,humayun,zafar;
        printf("\t\t\t_______________Select Category________________\n");
        printf("\n\t\t\t 1.Rabindranath Tagore\n");
        printf("\n\t\t\t 2.Sharat Chandra Chattopaddhay\n");
        printf("\n\t\t\t 3.Humayun Ahmed\n");
        printf("\n\t\t\t 4.Zafar Iqbal\n");
        printf("\n\t\t\t 5.Return main menu.\n");

        author = getch();
        if(author == '1')
        {
           system("cls");
           printf("\t\t\t_________Select one__________\n");
           printf("\n\t\t\t a.Cokher Bali\n");
           printf("\n\t\t\t b.Char oddhay\n");
           printf("\n\t\t\t c.Roktokorobi\n");
           printf("\n\t\t\t d.Gora\n");
           printf("\n\t\t\t e.Golpoguccho\n");
           printf("\n\t\t\t f.Sesher kobita\n");
           printf("\n\t\t\t g.Bou Thakuranir Hat\n");
           printf("\n\t\t\t h.Dakghor\n");
           printf("\n\t\t\t i.Master Moshai\n");
           printf("\n\t\t\t j.Nouka Dubi\n");
           printf("\n\t\t\t k.Return to previous page.\n");

           rabi = getch();
           if(rabi == 'a' || rabi == 'A')
           {
             system("start https://drive.google.com/open?id=1x-MZPihB_S1heb4RKuUTJi0me4jo9b5y");
             story();
           }
           else if(rabi == 'b' || rabi == 'B')
           {
             system("start https://drive.google.com/open?id=1ZqmmRig3fZVVlUdAEUMMPzkzHtm7nkQZ");
             story();
           }
           else if(rabi == 'c' || rabi == 'C')
           {
             system("start https://drive.google.com/open?id=1w1XlPxszQsLZ6_UQNFa80vG8pX-sn3OU");
             story();
           }
           else if(rabi == 'd' || rabi == 'D')
           {
             system("start https://drive.google.com/open?id=1-2Uz12wxgd2bBT-fgGZ2iY7mxOXMTZng");
             story();
           }
           else if(rabi == 'e' || rabi == 'E')
           {
             system("start https://drive.google.com/open?id=1QBdTt3Ftmi-IZDetga51XbrbQhJ4Te_b");
             story();
           }
           else if(rabi == 'f' || rabi == 'F')
           {
             system("start https://drive.google.com/open?id=1biLWn4OPdTztwZ6SiUu-PY_6vrckREwp");
             story();
           }
           else if(rabi == 'g' || rabi == 'G')
           {
             system("start https://drive.google.com/open?id=1kfn6Jpqqsw_LvgOgBRcvJdX-gaD9mkX6");
             story();
           }
          else if(rabi == 'h' || rabi == 'H')
           {
             system("start https://drive.google.com/open?id=1lOs4BdEwAUyU0klG1vhtnOU_JnF-K9OG");
             story();
           }
           else if(rabi == 'i' || rabi == 'I')
           {
             system("start https://drive.google.com/open?id=1iC54_c-8tqSE8QEbCS2zcFar_akanBxc");
             story();
           }
           else if(rabi == 'j' || rabi == 'J')
           {
             system("start https://drive.google.com/open?id=1AjQSVlhnOvw29CI1vhbbZKsdm2TcNd1n");
             story();
           }
           else if(rabi == 'k' || rabi == 'K')
           {
               system("cls");
               story();
           }
           else
    {
        printf("INVALID KEYWORD!!!\a");
        for (i = 0; i < 2; i++) {
        delay(1);
    }
        story();
    }
        }
else if(author == '2')
        {
           system("cls");
           printf("\t\t\t_________Select one__________\n");
           printf("\n\t\t\t a.Sharat Rachanaboli\n");
           printf("\n\t\t\t b.Parinita\n");
           printf("\n\t\t\t c.Grihodaho\n");
           printf("\n\t\t\t d.Bindur chele\n");
           printf("\n\t\t\t e.Boikunther will\n");
           printf("\n\t\t\t f.Boro Didi\n");
           printf("\n\t\t\t g.Biraj bou\n");
           printf("\n\t\t\t h.Devdas\n");
           printf("\n\t\t\t i.Nishkriti\n");
           printf("\n\t\t\t j.Bamuner Meye\n");
           printf("\n\t\t\t k.Return to previous page.\n");

           sharat = getch();
           if(sharat == 'a' || sharat == 'A')
           {
             system("start https://drive.google.com/open?id=1QOLCySgWnm3AvNSaL10hUr2yq2XMIMWm");
             story();
           }
           else if(sharat == 'b' || sharat == 'B')
           {
             system("start https://drive.google.com/open?id=1TK1fQhYT5anMnYeXCOsmoxbAxmNFXG1k");
             story();
           }
           else if(sharat == 'c' || sharat == 'C')
           {
            system("start https://drive.google.com/open?id=1cVNZjQ13lsD3Xbt8zLv5BB_x2RrXL185");
             story();
           }
           else if(sharat == 'd' || sharat == 'D')
           {
             system("start https://drive.google.com/open?id=10OOnt33RSyF_pOU65qj2TggWPV7Q5Id_");
             story();
           }
           else if(sharat == 'e' || sharat == 'E')
           {
             system("start https://drive.google.com/open?id=1xl1TfEJlqHEH90lWFfRjk_lfh9M8V-ls");
             story();
           }
           else if(sharat == 'f' || sharat == 'F')
           {
             system("start https://drive.google.com/open?id=1W_m_LQlYhPTFi4aCb7ML5DOmA6YVG8p-");
             story();
           }
           else if(sharat == 'g' || sharat == 'G')
           {
             system("start https://drive.google.com/open?id=1BHQJHOO7u6LJGTJ_Z28qvfyh9WJBFN-C");
             story();
           }
           else if(sharat == 'h' || sharat == 'H')
           {
             system("start https://drive.google.com/open?id=1xsHY6yqI99wXVhgnAi_6g5pM6ZYYmdSO");
             story();
           }
           else if(sharat == 'i' || sharat == 'I')
           {
             system("start https://drive.google.com/open?id=1rMwUmSxO_PVZmawONhEAnajJCZteXfeE");
             story();
           }
           else if(sharat == 'j' || sharat == 'J')
           {
             system("start https://drive.google.com/open?id=17QgAFiuzq3uEMxxPicBm31VoawsXbGyN");
             story();
           }
           else if(sharat == 'k' || sharat == 'K')
           {
               system("cls");
               story();
           }
           else
    {
        printf("INVALID KEYWORD!!!\a");

        for (i = 0; i < 2; i++) {
        delay(1);
    }
        story();
    }

        }

        else if(author == '3')
        {
            system("cls");
           printf("\t\t\t_________Select one__________\n");
           printf("\n\t\t\t a.Himur hate koyekti nil poddo\n");
           printf("\n\t\t\t b.Onish\n");
           printf("\n\t\t\t c.Ami ee Misir Ali\n");
           printf("\n\t\t\t d.Ekjon Himu o koyekti jhijhi poka\n");
           printf("\n\t\t\t e.Manobi\n");
           printf("\n\t\t\t f.Himur ditiyo Prohor\n");
           printf("\n\t\t\t g.Golpo somogro\n");
           printf("\n\t\t\t h.Himur Rupali raat\n");
           printf("\n\t\t\t i.Tondrabilash\n");
           printf("\n\t\t\t j.Misir Alir Omimangshito rohosso\n");
           printf("\n\t\t\t k.Achinpur\n");
           printf("\n\t\t\t l.Aaj Himur biye\n");
           printf("\n\t\t\t m.Ayna ghor\n");
           printf("\n\t\t\t n.Return to previous page.\n");

           humayun = getch();
           if(humayun == 'a' || humayun == 'A')
           {
             system("start https://drive.google.com/open?id=1iavXiIuIPXo74HhJL88FbCoPCWmzZYqA");
             story();
           }
           else if(humayun == 'b' || humayun == 'B')
           {
             system("start https://drive.google.com/open?id=1ccejzNxSm5D5dEj0aFdBLYBxTN_qXLsC");
           }
           else if(humayun == 'c' || humayun == 'C')
           {
             system("start https://drive.google.com/open?id=1h63YIMVIMXHxNaqq_eFNjpv9zFW0aQxR");
           }
           else if(humayun == 'd' ||  humayun == 'D')
           {
             system("start https://drive.google.com/open?id=1l5sHfOyfD5pIawxi8Cz7oH21ohInv6q4");
           }
           else if(humayun == 'e' || humayun == 'E')
           {
             system("start https://drive.google.com/open?id=1u-CexY6FzqFQSERjgo82yS6ZFngfRwtm");
           }
           else if(humayun == 'f' || humayun == 'F')
           {
             system("start https://drive.google.com/open?id=14s4gLAa_BtUrcuzcH5rYKnxrbSJcfY-j");
           }
           else if(humayun == 'g' || humayun == 'G')
           {
             system("start https://drive.google.com/open?id=1_A_VoBWdd7nP2eCFWDDfa62e4xNLSQKG");
           }
           else if(humayun == 'h' || humayun == 'H')
           {
             system("start https://drive.google.com/open?id=1BXO7V7SUVxQX6GreGzI-LCoTokNicomu");
           }
           else if(humayun == 'i' || humayun == 'I')
           {
             system("start https://drive.google.com/open?id=1dWlZ_2ZP7TGyqn_e9fxFUPBnaVyVWGhT");
           }
           else if(humayun == 'j' || humayun == 'J')
           {
             system("start https://drive.google.com/open?id=1lywH38kzzQQcmt3FVVvQuAL7teOvOOCi");
           }
           else if(humayun == 'k' || humayun == 'K')
           {
             system("start https://drive.google.com/open?id=1-dahbltt-eGXTkOkvVVO_nPGYAfJtgx5");
           }
           else if(humayun == 'l' || humayun == 'L')
           {
             system("start https://drive.google.com/open?id=1wALIsH_kTXifHpBsMJgVj8FZnwsAzSly");
           }
           else if(humayun == 'm' || humayun == 'M')
           {
             system("start https://drive.google.com/open?id=1vGjZ0dA0nd7OaQ8Gc4TLaWMUHm6NyE2j");
           }
           else if(humayun == 'n' || humayun == 'N')
           {
               system("cls");
               story();
           }
           else
    {
        printf("INVALID KEYWORD!!!\a");

        for (i = 0; i < 2; i++) {
        delay(1);
    }
        story();
    }


        }

        else if(author == '4')
        {
            system("cls");
           printf("\t\t\t_________Select one__________\n");
           printf("\n\t\t\t a.Fobianer Jatri\n");
           printf("\n\t\t\t b.Abhijan\n");
           printf("\n\t\t\t c.Ami Topu\n");
           printf("\n\t\t\t d.Amar bondhu Rashed\n");
           printf("\n\t\t\t e.Dipu no. 2\n");
           printf("\n\t\t\t f.Brishtir Thikana\n");
           printf("\n\t\t\t g.Abonil\n");
           printf("\n\t\t\t h.Chelemanushi\n");
           printf("\n\t\t\t i.Rasha\n");
           printf("\n\t\t\t j.Titron ekti groher naam\n");
           printf("\n\t\t\t k.Shopno\n");
           printf("\n\t\t\t l.Phoenix\n");
           printf("\n\t\t\t m.Kajoler dinratri\n");
           printf("\n\t\t\t n.Hat kata Robin\n");
           printf("\n\t\t\t o.Baishakher Hahakar\n");
           printf("\n\t\t\t p.Return to previous page.");

           zafar = getch();
           if(zafar == 'a' || zafar == 'A')
           {
             system("start https://drive.google.com/open?id=1MfZCMf55czBtndXclfYyfl-Gvaw2zNdg");
             story();
           }
           else if(zafar == 'b' || zafar == 'B')
           {
             system("start https://drive.google.com/open?id=1RbGiOcpmq_Op2BFLZHJelCr8keekKRWH");
             story();
           }
           else if(zafar == 'c' || zafar == 'C')
           {
             system("start https://drive.google.com/open?id=1Alu1YMFwsNdJMnW6W8Xe8X13m68Vao9l");
             story();
           }
           else if(zafar == 'd' || zafar == 'D')
           {
             system("start https://drive.google.com/open?id=1GzbRDXHn5Y-vZJTewoysBQw3NDWcCfKr");
             story();
           }
           else if(zafar == 'e' || zafar == 'E')
           {
             system("start https://drive.google.com/open?id=1ilt3ZSYHHsEHh2UCq9n5C4-JKwAFZOiS");
             story();
           }
           else if(zafar == 'f' || zafar == 'F')
           {
             system("start https://drive.google.com/open?id=1O6MjeDKcs8P6KAt1nga0jrIwNliipTVr");
             story();
           }
           else if(zafar == 'g' || zafar == 'G')
           {
             system("start https://drive.google.com/open?id=1O3rhpcHuhVPDRxlLB-jcGRz0GiB27Cfi");
             story();
           }
           else if(zafar == 'h' || zafar == 'H')
           {
             system("start https://drive.google.com/open?id=1VznV3-Nq37fX17MvrH57PVQSuXU5cXLh");
             story();
           }
           else if(zafar == 'i'|| zafar == 'I')
           {
             system("start https://drive.google.com/open?id=17TgncVX3YgkmE7A7jmGVZco9G4wuCOG1");
             story();
           }
           else if(zafar == 'j' || zafar == 'J')
           {
             system("start https://drive.google.com/open?id=1UWOHbgKK3UakJ04GJJMDXkUb1Jg06f7f");
             story();

           }
           else if(zafar == 'k' || zafar == 'K')
           {
             system("start https://drive.google.com/open?id=1AMzhlfLtd2xaSVA1oalREYU_a-OZPjWz");
             story();
           }
           else if(zafar == 'l' || zafar == 'L')
           {
             system("start https://drive.google.com/open?id=1rc2567Q9bHqQN-KNRIP13h3m9WV4zsnl");
             story();
           }
           else if(zafar == 'm' || zafar == 'M')
           {
             system("start https://drive.google.com/open?id=1EVQiJXHNTRi1g64yOWN4qVAqOal2c1Eg");
             story();
           }
           else if(zafar == 'n' || zafar == 'N')
           {
             system("start https://drive.google.com/open?id=1aSNGipuAWCf17WMrULawjdQV4F15SvKz");
             story();
           }
           else if(zafar == 'o' || zafar == 'O')
           {
             system("start https://drive.google.com/open?id=1rznYq3GPzanMSI8rb_tz_bfyxRNG7i5J");
             story();
           }

           else if(zafar == 'p' || zafar == 'P')
           {
               system("cls");
               story();
           }
           else
    {
        printf("INVALID KEYWORD!!!\a");

        for (i = 0; i < 2; i++) {
        delay(1);
    }
        story();
    }

        }
        else if(author == '5')
        {
            system("cls");
            intro();
        }
        else
    {
        printf("INVALID KEYWORD!!!\a");
        for (i = 0; i < 2; i++) {
        delay(1);
    }
        story();
    }

    }
void vip::asif_story()
    {
        int i;
        char story;
        system("cls");
        printf("\t\t\t_________________Choose a story___________________\n");
        printf("\n\t\t\t 1. Biyenama\n");
        printf("\n\t\t\t 2. Hotta Rohossho\n");
        printf("\n\t\t\t 3. Jainpur gram o ekti rohossho\n");
        printf("\n\t\t\t 4. Oboyob\n");
        printf("\n\t\t\t 5. Nilchuri\n");
        printf("\n\t\t\t 6. Rohossho\n");
        printf("\n\t\t\t 7. Return to main menu\n");

        story = getch();

        if(story == '1')
        {
           system("start https://drive.google.com/open?id=1lOS9vE9hFMOpNCUIX_DJRqqUMXXRLhWB");
           asif_story();
        }
        else if(story == '2')
        {
            system("start https://drive.google.com/open?id=0B4kA9B5EuPjdOHZBR2ZFMGpfWVk");
            asif_story();
        }
        else if(story == '3')
        {
            system("start https://drive.google.com/open?id=0B4kA9B5EuPjdM1dHZDhqVW00MWs");
            asif_story();
        }
        else if(story == '4')
        {
            system("start https://drive.google.com/open?id=0B4kA9B5EuPjddTgySTRfQnRraUE");
            asif_story();
        }
        else if(story == '5')
        {
            system("start https://drive.google.com/open?id=0B4kA9B5EuPjdMW1xVHRPZktHZUk");
            asif_story();
        }
        else if(story == '6')
        {
            system("start https://drive.google.com/open?id=0B4kA9B5EuPjdM0FSMUtiWVZ1VXM");
        }

        else if(story == '7')
        {
            system("cls");
            intro();
        }
        else
    {
        printf("INVALID KEYWORD!!!\a");
        for (i = 0; i < 2; i++) {
        delay(1);
    }
        asif_story();
    }
    }
void vip::poems()
     {
         int i;
         char poem,naz,rav,jib,sun;
         system("cls");
         printf("\n\t\t\t____________SELECT AUTHOR_____________\n");
         printf("\n\t\t\t 1. Kaji Nazrul Islam\n");
         printf("\n\t\t\t 2. Rabindranath Tagore\n");
         printf("\n\t\t\t 3. Jibanananda Das\n");
         printf("\n\t\t\t 4. Sunil Gongopaddhay\n");
         printf("\n\t\t\t 5. Return main menu\n");

         poem = getch();

         if(poem == '1')
         {
           system("cls");
           printf("\n\t\t\t_______Poems of Nazrul________\n");
           printf("\n\t\t\t a.Sorbohara\n");
           printf("\n\t\t\t b.Sindu hindol\n");
           printf("\n\t\t\t c.Sandha\n");
           printf("\n\t\t\t d.Mrittukhuda\n");
           printf("\n\t\t\t e.Sanchita\n");
           printf("\n\t\t\t f.Jinjir\n");
           printf("\n\t\t\t g.Bethar dan\n");
           printf("\n\t\t\t h.Maru Bhaskar\n");
           printf("\n\t\t\t i.Jhar\n");
           printf("\n\t\t\t j.Return to previous page.\n");

           naz = getch();
           if(naz == 'a' || naz == 'A')
           {
               system("start https://drive.google.com/open?id=1zDW-0Xfesalxf80IX_woXsJM2VF8t8eY");
               poems();
           }
           else if(naz == 'b' || naz == 'B')
           {
              system("start https://drive.google.com/open?id=1g8iyG7XW2c1pIC7ZtJB4Usax0KLo6ZAb");
               poems();
           }
           else if(naz == 'c' || naz == 'C')
           {
               system("start https://drive.google.com/open?id=1kkWwfkYBgxpjFZfi6CRJh-S21T-C2Gcl");
               poems();
           }
           else if(naz == 'd' || naz == 'D')
           {
               system("start https://drive.google.com/open?id=19xeIqJYF7aHC-WYXIo9pLKRMPaWPfSyO");
               poems();
           }
           else if(naz == 'e' || naz == 'E')
           {
               system("start https://drive.google.com/open?id=18cG1zlZEwLRfE6rXPrueI3E0pGKMLtPY");
               poems();
           }
           else if(naz == 'f' || naz == 'F')
           {
               system("start https://drive.google.com/open?id=1WG5c87R23Sl6RRMPY2y6rzJCXIFKl9i6");
               poems();
           }
           else if(naz == 'g' || naz == 'G')
           {
               system("start https://drive.google.com/open?id=1DVsljx2QKJPse3Wy7vLH9nn_lPQ4B3Zb");
               poems();
           }
           else if(naz == 'h' || naz == 'H')
           {
               system("start https://drive.google.com/open?id=1gl2AKFxFx9JZWk5Stra_vpKTIxkIxU_b");
               poems();
           }
           else if(naz == 'i' || naz == 'I')
           {
               system("start https://drive.google.com/open?id=1QkKaTuQ54SY7XWF2IY1Q50b31Vy6n5vS");
               poems();
           }
           else if(naz == 'j' || naz == 'J')
           {
               system("cls");
               poems();
           }
           else
            {
            printf("INVALID KEYWORD!!!\a");
            for (i = 0; i < 2; i++) {
            delay(1);
            }
            poems();
            }
         }
         else if(poem == '2')
         {
           system("cls");
           printf("\n\t\t\t_______Poems of Rabindranath________\n");
           printf("\n\t\t\t a.Gitanjoli\n");
           printf("\n\t\t\t b.Bhanusingher podaboli\n");
           printf("\n\t\t\t c.Manashi\n");
           printf("\n\t\t\t d.Sanchayita\n");
           printf("\n\t\t\t e.Return to previous page.\n");
           rav = getch();
           if(rav == 'a' || rav == 'A')
           {
               system("start https://drive.google.com/open?id=1DMhqgYGj90sN7PXEJCOg7QEusvUWEXe2");
               poems();
           }
           else if(rav == 'b' || rav == 'B')
           {
               system("start https://drive.google.com/open?id=1Yc1rBtke4LN9HBdXPLCZmg0eYgbRqei3");
               poems();
           }
           else if(rav == 'c' || rav == 'C')
           {
               system("start ");
               poems();
           }
           else if(rav == 'd' || rav == 'D')
           {
               system("start ");
               poems();
           }
           else if(rav == 'e' || rav == 'E')
           {
               system("cls");
               poems();
           }
           else
            {
            printf("INVALID KEYWORD!!!\a");
            for (i = 0; i < 2; i++) {
            delay(1);
            }
            poems();
            }
         }
          else if(poem == '3')
         {
           system("cls");
           printf("\n\t\t\t_______Poems of Jibananando________\n");
           printf("\n\t\t\t a.Ruposhi Bangla\n");
           printf("\n\t\t\t b.Satti Tarar Timir\n");
           printf("\n\t\t\t c.Banolota Sen\n");
           printf("\n\t\t\t d.Jhora Palok\n");
           printf("\n\t\t\t e.Shrestho kobita\n");
           printf("\n\t\t\t f.Return to previous page.\n");

           jib = getch();
           if(jib == 'a' || jib == 'A')
           {
               system("start https://drive.google.com/open?id=1wKrUdgAzVQiy3t68ANGm6i96pE4VwstR");
               poems();
           }
           else if(jib == 'b' || jib == 'B')
           {
               system("start https://drive.google.com/open?id=157ic6gy-zFErRKT5Q7tia_n0knXyw8iV");
               poems();
           }
           else if(jib == 'c' || jib == 'C')
           {
               system("start https://drive.google.com/open?id=1gQpMphV7hPterzhSpUO4r89X4bhn-_8P");
               poems();
           }
           else if(jib == 'd' || jib == 'D')
           {
               system("start https://drive.google.com/open?id=1M86j9AsJA8JOWw3O3CbMK1l7OXYazKiR");
               poems();
           }
           else if(jib == 'e' || jib == 'E')
           {
               system("start https://drive.google.com/open?id=1kDlS1Y71X4OgbbfTHTD3OCCAKYQ6WUV9");
               poems();
           }
           else if(jib == 'f' || jib == 'F')
           {
               system("cls");
               poems();
           }
           else
            {
            printf("INVALID KEYWORD!!!\a");
            for (i = 0; i < 2; i++) {
            delay(1);
            }
            poems();
            }
         }

         else if(poem == '4')
         {
           system("cls");
           printf("\n\t\t\t_______Poems of Sunil________\n");
           printf("\n\t\t\t a.Shunil er srestho kobita\n");
           printf("\n\t\t\t b.Sundorer Mon kharap\n");
           printf("\n\t\t\t c.Nira Hariye jeo na\n");
           printf("\n\t\t\t d.Sritir Sohor\n");
           printf("\n\t\t\t e.Mon valo nei\n");
           printf("\n\t\t\t f.Return to previous page.\n");
           sun = getch();
           if(sun == 'a' || sun == 'A')
           {
               system("start https://drive.google.com/open?id=1H2y9MezKtIUO191zgp72foLMDxKTuCRb");
               poems();
           }
           else if(sun == 'b' || sun == 'B')
           {
               system("start https://drive.google.com/open?id=1-8jyMYWxJdiaLBZGWkfCIJbdKqVWNBaU");
               poems();
           }
           else if(sun == 'c' || sun == 'C')
           {
               system("start https://drive.google.com/open?id=18qcGDpqp13i9Jgh3A2XUVeXDVK151Pmy");
               poems();
           }
           else if(sun == 'd' || sun == 'D')
           {
               system("start https://drive.google.com/open?id=1qOikkD2qxM-82M33SalnbsjxY_4Sg0KG");
               poems();
           }
           else if(sun == 'e' || sun == 'E')
           {
               system("start https://drive.google.com/open?id=16jroxA4mJ7qhhwBKdmUtp0WPxxbbvFEB");
               poems();
           }
           else if(sun == 'f' || sun == 'F')
           {
               system("cls");
               poems();
           }
           else
            {
            printf("INVALID KEYWORD!!!\a");
            for (i = 0; i < 2; i++) {
            delay(1);
            }
            poems();
            }
         }
         else if(poem == '5')
         {
            intro();
         }
         else
        {
        printf("INVALID KEYWORD!!!\a");
        for (i = 0; i < 2; i++) {
            delay(1);
                }
        poems();
            }
        }

 void vip::devo()
    {
        char ret;
        system("cls");
        printf("\t\t\t____________People who developed this app____________\n");
        printf("\n\t\t\t 1. Asif Mahmud\n");
        printf("\n\t\t\t 2. Akif Zaman\n");
        printf("\n\t\t\t 3. Sreekanto Pal\n");
        printf("\n\t\t\t 4. Jahangir Alam\n");
        printf("\npress any key to return main menu...");
        ret = getch();

        if(ret >=0 && ret <=255)
           {
             system("cls");
             intro();
           }
    }


 int main()
 {

     vip obj;
     obj.intro();

     return 0;
 }

void vip::delay(int number_of_seconds)
{
    int milli_seconds = 1000 * number_of_seconds;
    clock_t start_time = clock();
    while (clock() < start_time + milli_seconds);
}
 void vip::credit()
 {
    int i;
    printf("\n\t\t\t\t________________________________________\n");
    printf("\t\t\t\t_____________Developed_______________\n");
    printf("\t\t\t\t________________By_______________\n");
    printf("\t\t\t\t___________THE DEBUGGERS___________\n");
    printf("\n\t\t\t\t_______________________________________\n");
    for (i = 0; i < 3; i++) {
    delay(1);
    }
    system("cls");
    //return 0;
 }
