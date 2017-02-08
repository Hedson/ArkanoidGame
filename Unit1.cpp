//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "mmsystem.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "trayicon"
#pragma resource "*.dfm"
TForm1 *Form1;

        int x =0;
        int y =0;

        int do_wygranej=12;

        bool kolizja( TImage * pilka, TImage * cegla)
        {

            if( pilka->Left >= cegla->Left - pilka->Width &&
                pilka->Left <= cegla->Left + cegla->Width &&
                pilka->Top >= cegla->Top - pilka->Height &&
                pilka->Top <= cegla->Top + cegla->Height)
                {
                        return true;
                }
                else
                {
                        return false;
                }

        }




//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------



void __fastcall TForm1::TimerpilkaTimer(TObject *Sender)
{

        b->Left+=x;
        b->Top+=y;

        //odbij od lewej sciany
        if(b->Left-5 <= tlo->Left) x = -x;

        //odbij od gornej sciany
        if(b->Top-5 <= tlo->Top-50)
        {
                //y = -y;
                Timerpilka->Enabled = false;
                b->Visible=false;
        }

          //odbij od prawej sciany
        if(b->Left+b->Width+5 >= tlo->Width) x = -x;

        //  PRZEGRANA === sprawdzenie czy pilka nie jest nizej niz paletka

        if(b->Top >= p->Top + p->Height + 15)
        {
         Timerpilka->Enabled=false;
         b->Visible=false;
         Button1->Caption = "Pora�ka! Jeszcze raz?";
         Button1->Visible=true;
        }

        else if (b->Left > p->Left - b->Width/2 && b->Left < p->Left+p->Width  &&
        b->Top+b->Height > p->Top)
        {
                 if (y>0) y = -y;
        }



        //blok1 (gdy pilka ich dotknie to znikaja i wydaja dzwiek krzyku)
        if ((kolizja(b,Image1)==true) && Image1->Visible == true)
        {

            Image1->Visible=false;
            do_wygranej--;
            Timerpilka->Enabled = false;
            b->Visible=false;
            Image1->Enabled = false;
            sndPlaySound("snd/krzyk.wav",SND_ASYNC);
        }


         //blok2 (gdy pilka ich dotknie to znikaja i wydaja dzwiek krzyku)
        if ((kolizja(b,Image2)==true) && Image2->Visible == true)
        {

            Image2->Visible=false;
            do_wygranej--;
            Timerpilka->Enabled = false;
            b->Visible=false;
            Image2->Enabled = false;
            sndPlaySound("snd/krzyk.wav",SND_ASYNC);
        }

        //blok3 (gdy pilka ich dotknie to znikaja i wydaja dzwiek krzyku)
        if ((kolizja(b,Image3)==true) && Image3->Visible == true)
        {

            Image3->Visible=false;
            do_wygranej--;
            Timerpilka->Enabled = false;
            b->Visible=false;

            Image3->Enabled = false;
            sndPlaySound("snd/krzyk.wav",SND_ASYNC);
        }

         //blok4 (gdy pilka ich dotknie to znikaja i wydaja dzwiek krzyku)
        if ((kolizja(b,Image4)==true) && Image4->Visible == true)
        {

            Image4->Visible=false;
            do_wygranej--;
            Timerpilka->Enabled = false;
            b->Visible=false;

            Image4->Enabled = false;
            sndPlaySound("snd/krzyk.wav",SND_ASYNC);
        }

        //blok5 (gdy pilka ich dotknie to znikaja i wydaja dzwiek krzyku)
        if ((kolizja(b,Image5)==true) && Image5->Visible == true)
        {

            Image5->Visible=false;
            do_wygranej--;
            Timerpilka->Enabled = false;
            b->Visible=false;

            Image5->Enabled = false;
            sndPlaySound("snd/krzyk.wav",SND_ASYNC);
        }

        //blok6 (gdy pilka ich dotknie to znikaja i wydaja dzwiek krzyku)
        if ((kolizja(b,Image6)==true) && Image6->Visible == true)
        {

            Image6->Visible=false;
            do_wygranej--;
            Timerpilka->Enabled = false;
            b->Visible=false;

            Image6->Enabled = false;
            sndPlaySound("snd/krzyk.wav",SND_ASYNC);
        }

        //blok7 (gdy pilka ich dotknie to znikaja i wydaja dzwiek krzyku)
        if ((kolizja(b,Image7)==true) && Image7->Visible == true)
        {

            Image7->Visible=false;
            do_wygranej--;
            Timerpilka->Enabled = false;
            b->Visible=false;

            Image7->Enabled = false;
            sndPlaySound("snd/krzyk.wav",SND_ASYNC);
        }

        //blok8 (gdy pilka ich dotknie to znikaja i wydaja dzwiek krzyku)
        if ((kolizja(b,Image8)==true) && Image8->Visible == true)
        {

            Image8->Visible=false;
            do_wygranej--;
            Timerpilka->Enabled = false;
            b->Visible=false;

            Image8->Enabled = false;
            sndPlaySound("snd/krzyk.wav",SND_ASYNC);
        }

        //blok9 (gdy pilka ich dotknie to znikaja i wydaja dzwiek krzyku)
        if ((kolizja(b,Image9)==true) && Image9->Visible == true)
        {

            Image9->Visible=false;
            do_wygranej--;
            Timerpilka->Enabled = false;
            b->Visible=false;

            Image9->Enabled = false;
            sndPlaySound("snd/krzyk.wav",SND_ASYNC);
        }

        //blok10 (gdy pilka ich dotknie to znikaja i wydaja dzwiek krzyku)
        if ((kolizja(b,Image10)==true) && Image10->Visible == true)
        {

            Image10->Visible=false;
            do_wygranej--;
            Timerpilka->Enabled = false;
            b->Visible=false;

            Image10->Enabled = false;
            sndPlaySound("snd/krzyk.wav",SND_ASYNC);
        }

         //blok11 (gdy pilka ich dotknie to znikaja i wydaja dzwiek krzyku)
        if ((kolizja(b,Image11)==true) && Image11->Visible == true)
        {

            Image11->Visible=false;

            do_wygranej--;
            Timerpilka->Enabled = false;
            b->Visible=false;

            Image11->Enabled = false;
            sndPlaySound("snd/krzyk.wav",SND_ASYNC);

        }

        //blok12 (gdy pilka ich dotknie to znikaja i wydaja dzwiek krzyku)
        if ((kolizja(b,Image12)==true) && Image12->Visible == true)
        {

            Image12->Visible=false;

            do_wygranej--;
            Timerpilka->Enabled = false;
            b->Visible=false;
            //Image12->Top=5; Image12->Left=280;
            Image12->Enabled = false;
            sndPlaySound("snd/krzyk.wav",SND_ASYNC);

        }



          if (do_wygranej <=0)  // instrukcja wygranej, daje ja po kolizjach aby po
          //  ostatniej zaliczylo wygrana bez koniecznosci naciskania spacji jeszcze raz
        {
                Timerpilka->Enabled=false;
                b->Visible=false;
                sndPlaySound("snd/winner.wav",SND_ASYNC);  // dzwiek wygranej
                Button1->Caption = "Wygrana! Jeszcze raz? - niski poziom trudnosci";
                Button1->Visible=true;
                Button2->Visible=true;

                          Sleep(300);
                         enemy_left->Enabled = false;
                         enemy_right->Enabled = false;
                         enemy_left_hard->Enabled = false;
                         enemy_right_hard->Enabled = false;
                         Sleep(100);

        }

  }
//----------------------------------------------------

//---------------------------------------------------------------------------


void __fastcall TForm1::lewoTimer(TObject *Sender)
{
      if(p->Left >10)  p->Left  -= 10;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::prawoTimer(TObject *Sender)
{
      if(p->Left+p->Width < tlo->Width - 6)  p->Left += 10;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        if(Key == VK_LEFT)      lewo->Enabled = true;
        if(Key == VK_RIGHT)     prawo->Enabled = true;

        if(Key == VK_SPACE)       // shoot when press space
                {
                        if(Button1->Visible==false)      // zabraniamy strzelac,
                        //gdy przycisk jest widoczy(uniemozliwi strzelanie po przegranej i wygranie gry :D)
                        {
                                if(Timerpilka->Enabled==false)    // gdy pilka nie ma na ekranie to mozna strzelac
                                {
                                 b->Left = p->Left+(p->Width/2)-10;
                                 b->Top = p->Top;

                                b->Visible = true;
                                x=0; y=-18;
                                Timerpilka->Enabled = true;
                                sndPlaySound("snd/laser.wav", SND_ASYNC);
                                }  //end if
                        } //end if button
                } // end if Key
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormKeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        if(Key == VK_LEFT)      lewo->Enabled = false;
        if(Key == VK_RIGHT)      prawo->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
        /*b->Left = 50;
        b->Top = 60;

        b->Visible = true;
        x=0; y=-8;      */
        //Timerpilka->Enabled = true;

        Image1->Enabled = true; Image2->Enabled = true;  Image3->Enabled = true;
        Image4->Enabled = true; Image5->Enabled = true;  Image6->Enabled = true;
        Image7->Enabled = true; Image8->Enabled = true;  Image9->Enabled = true;
        Image10->Enabled = true; Image11->Enabled = true;  Image12->Enabled = true;




        enemy_move->Enabled = true;
        Button1->Visible = false;
        Button2->Visible = false;
        do_wygranej = 12;
        Image1->Visible = true; Image2->Visible = true; Image2->Visible = true;
        Image3->Visible = true; Image4->Visible = true; Image5->Visible = true;
        Image6->Visible = true; Image7->Visible = true; Image8->Visible = true;
        Image9->Visible = true; Image10->Visible = true; Image11->Visible = true;
        Image12->Visible = true;


        //ustawienie pozycji wrog�w po restarcie planszy:
        Image1->Top=16; Image1->Left=176;
        Image2->Top=16; Image2->Left=280;
        Image3->Top=16; Image3->Left=384;
        Image4->Top=16; Image4->Left=488;
        Image5->Top=16; Image5->Left=592;
        Image6->Top=16; Image6->Left=696;
        Image7->Top=120; Image7->Left=280;
        Image8->Top=120; Image8->Left=384;
        Image9->Top=120; Image9->Left=488;
        Image10->Top=120; Image10->Left=592;
        Image11->Top=224; Image11->Left=384;
        Image12->Top=224; Image12->Left=488;

        enemy_right->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{

        /*b->Left = 50;
        b->Top = 60;

        b->Visible = true;
        x=0; y=-8;      */
        //Timerpilka->Enabled = true;

         // Enabled wszystkie obrazki na start, bo wczesniej dalem false aby dac warunki
         // kiedy przeciwnik dotyka skraju planszy
        Image1->Enabled = true; Image2->Enabled = true;  Image3->Enabled = true;
        Image4->Enabled = true; Image5->Enabled = true;  Image6->Enabled = true;
        Image7->Enabled = true; Image8->Enabled = true;  Image9->Enabled = true;
        Image10->Enabled = true; Image11->Enabled = true;  Image12->Enabled = true;


        enemy_move->Enabled = true;
        Button1->Visible = false;
        Button2->Visible = false;
        do_wygranej = 12;
        Image1->Visible = true; Image2->Visible = true; Image2->Visible = true;
        Image3->Visible = true; Image4->Visible = true; Image5->Visible = true;
        Image6->Visible = true; Image7->Visible = true; Image8->Visible = true;
        Image9->Visible = true; Image10->Visible = true; Image11->Visible = true;
        Image12->Visible = true;


        //ustawienie pozycji wrog�w po restarcie planszy:
        Image1->Top=16; Image1->Left=176;
        Image2->Top=16; Image2->Left=280;
        Image3->Top=16; Image3->Left=384;
        Image4->Top=16; Image4->Left=488;
        Image5->Top=16; Image5->Left=592;
        Image6->Top=16; Image6->Left=696;
        Image7->Top=120; Image7->Left=280;
        Image8->Top=120; Image8->Left=384;
        Image9->Top=120; Image9->Left=488;
        Image10->Top=120; Image10->Left=592;
        Image11->Top=224; Image11->Left=384;
        Image12->Top=224; Image12->Left=488;

        enemy_right_hard->Enabled = true;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::enemy_moveTimer(TObject *Sender)
{
        //  PRZEGRANA === sprawdzenie czy ikony nie sa nizej niz ty

        if((Image1->Top >= p->Top - p->Height +10  && Image1->Enabled == true)||
           (Image2->Top >= p->Top - p->Height +10  && Image2->Enabled == true)||
           (Image3->Top >= p->Top - p->Height +10  && Image3->Enabled == true)||
           (Image4->Top >= p->Top - p->Height +10  && Image4->Enabled == true)||
           (Image5->Top >= p->Top - p->Height +10  && Image5->Enabled == true)||
           (Image6->Top >= p->Top - p->Height +10  && Image6->Enabled == true)||
           (Image7->Top >= p->Top - p->Height +10  && Image7->Enabled == true)||
           (Image8->Top >= p->Top - p->Height +10  && Image8->Enabled == true)||
           (Image9->Top >= p->Top - p->Height +10 && Image9->Enabled == true) ||
           (Image10->Top >= p->Top - p->Height +10 && Image10->Enabled == true) ||
           (Image11->Top >= p->Top - p->Height +10 && Image11->Enabled == true)||
           (Image12->Top >= p->Top - p->Height +10 && Image12->Enabled == true)
        )
        {
         sndPlaySound("snd/die2", SND_ASYNC);
         Sleep(100);

         Timerpilka->Enabled=false;
         enemy_move->Enabled=false;
         Sleep(100);
         b->Visible=false;
         Button1->Caption = "Pora�ka! Jeszcze raz? - niski poziom trudnosci";
         Button1->Visible=true;
         Button2->Visible=true;




           Sleep(300);
         enemy_left->Enabled = false;
         enemy_right->Enabled = false;
         enemy_left_hard->Enabled = false;
         enemy_right_hard->Enabled = false;
         prawo->Enabled=false;
         lewo->Enabled=false;

         Sleep(100);
        }




}
//---------------------------------------------------------------------------

void __fastcall TForm1::enemy_rightTimer(TObject *Sender)
{
                 Image1->Left += 3; Image1->Top += 1;
                Image2->Left += 3; Image2->Top += 1;
                Image3->Left += 3; Image3->Top += 1;
                Image4->Left += 3; Image4->Top += 1;
                Image5->Left += 3; Image5->Top += 1;
                Image6->Left += 3; Image6->Top += 1;
                Image7->Left += 3; Image7->Top += 1;
                Image8->Left += 3; Image8->Top += 1;
                Image9->Left += 3; Image9->Top += 1;
                Image10->Left += 3; Image10->Top += 1;
                Image11->Left += 3; Image11->Top += 1;
                Image12->Left += 3; Image12->Top += 1;

                if( (Image1->Left >= tlo->Width-100 && Image1->Enabled == true) ||
                    (Image2->Left >= tlo->Width-100 && Image2->Enabled == true) ||
                    (Image3->Left >= tlo->Width-100 && Image3->Enabled == true) ||
                    (Image4->Left >= tlo->Width-100 && Image4->Enabled == true) ||
                    (Image5->Left >= tlo->Width-100 && Image5->Enabled == true) ||
                    (Image6->Left >= tlo->Width-100 && Image6->Enabled == true) ||
                    (Image7->Left >= tlo->Width-100 && Image7->Enabled == true) ||
                    (Image8->Left >= tlo->Width-100 && Image8->Enabled == true) ||
                    (Image9->Left >= tlo->Width-100 && Image9->Enabled == true) ||
                    (Image10->Left >= tlo->Width-100 && Image10->Enabled == true) ||
                    (Image11->Left >= tlo->Width-100 && Image11->Enabled == true) ||
                    (Image12->Left >= tlo->Width-100 && Image12->Enabled == true)
                )
                {
                 enemy_left->Enabled = true;
                 enemy_right->Enabled = false;
                }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::enemy_leftTimer(TObject *Sender)
{
                Image1->Left -= 3; Image1->Top += 1;
                Image2->Left -= 3; Image2->Top += 1;
                Image3->Left -= 3; Image3->Top += 1;
                Image4->Left -= 3; Image4->Top += 1;
                Image5->Left -= 3; Image5->Top += 1;
                Image6->Left -= 3; Image6->Top += 1;
                Image7->Left -= 3; Image7->Top += 1;
                Image8->Left -= 3; Image8->Top += 1;
                Image9->Left -= 3; Image9->Top += 1;
                Image10->Left -= 3; Image10->Top += 1;
                Image11->Left -= 3; Image11->Top += 1;
                Image12->Left -= 3; Image12->Top += 1;

                  if(
                  (Image1->Left <= tlo->Left && Image1->Enabled == true) ||
                  (Image2->Left <= tlo->Left && Image2->Enabled == true) ||
                  (Image3->Left <= tlo->Left && Image3->Enabled == true) ||
                  (Image4->Left <= tlo->Left && Image4->Enabled == true) ||
                  (Image5->Left <= tlo->Left && Image5->Enabled == true) ||
                  (Image6->Left <= tlo->Left && Image6->Enabled == true) ||
                  (Image7->Left <= tlo->Left && Image7->Enabled == true) ||
                  (Image8->Left <= tlo->Left && Image8->Enabled == true) ||
                  (Image9->Left <= tlo->Left && Image9->Enabled == true) ||
                  (Image10->Left <= tlo->Left && Image10->Enabled == true) ||
                  (Image11->Left <= tlo->Left && Image11->Enabled == true) ||
                  (Image12->Left <= tlo->Left && Image12->Enabled == true)
                   )
                {
                  enemy_right->Enabled = true;
                  enemy_left->Enabled = false;

                }
}
//---------------------------------------------------------------------------







void __fastcall TForm1::enemy_right_hardTimer(TObject *Sender)
{
                Image1->Left += 5; Image1->Top += 12;
                Image2->Left += 5; Image2->Top += 6;
                Image3->Left += 5; Image3->Top += 6;
                Image4->Left += 5; Image4->Top += 6;
                Image5->Left += 5; Image5->Top += 6;
                Image6->Left += 5; Image6->Top += 12;
                Image7->Left += 5; Image7->Top += 3;
                Image8->Left += 5; Image8->Top += 3;
                Image9->Left += 5; Image9->Top += 3;
                Image10->Left += 5; Image10->Top += 3;
                Image11->Left += 5; Image11->Top += 3;
                Image12->Left += 5; Image12->Top += 3;

                if( (Image1->Left >= tlo->Width-100 && Image1->Enabled == true) ||
                    (Image2->Left >= tlo->Width-100 && Image2->Enabled == true) ||
                    (Image3->Left >= tlo->Width-100 && Image3->Enabled == true) ||
                    (Image4->Left >= tlo->Width-100 && Image4->Enabled == true) ||
                    (Image5->Left >= tlo->Width-100 && Image5->Enabled == true) ||
                    (Image6->Left >= tlo->Width-100 && Image6->Enabled == true) ||
                    (Image7->Left >= tlo->Width-100 && Image7->Enabled == true) ||
                    (Image8->Left >= tlo->Width-100 && Image8->Enabled == true) ||
                    (Image9->Left >= tlo->Width-100 && Image9->Enabled == true) ||
                    (Image10->Left >= tlo->Width-100 && Image10->Enabled == true) ||
                    (Image11->Left >= tlo->Width-100 && Image11->Enabled == true) ||
                    (Image12->Left >= tlo->Width-100 && Image12->Enabled == true)
                )
                {
                 enemy_left_hard->Enabled = true;
                 enemy_right_hard->Enabled = false;
                }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::enemy_left_hardTimer(TObject *Sender)
{
                Image1->Left -= 5; Image1->Top += 12;
                Image2->Left -= 5; Image2->Top += 6;
                Image3->Left -= 5; Image3->Top += 6;
                Image4->Left -= 5; Image4->Top += 6;
                Image5->Left -= 5; Image5->Top += 6;
                Image6->Left -= 5; Image6->Top += 12;
                Image7->Left -= 5; Image7->Top += 3;
                Image8->Left -= 5; Image8->Top += 3;
                Image9->Left -= 5; Image9->Top += 3;
                Image10->Left -= 5; Image10->Top += 3;
                Image11->Left -= 5; Image11->Top += 3;
                Image12->Left -= 5; Image12->Top += 3;

                  if(
                  (Image1->Left <= tlo->Left && Image1->Enabled == true) ||
                  (Image2->Left <= tlo->Left && Image2->Enabled == true) ||
                  (Image3->Left <= tlo->Left && Image3->Enabled == true) ||
                  (Image4->Left <= tlo->Left && Image4->Enabled == true) ||
                  (Image5->Left <= tlo->Left && Image5->Enabled == true) ||
                  (Image6->Left <= tlo->Left && Image6->Enabled == true) ||
                  (Image7->Left <= tlo->Left && Image7->Enabled == true) ||
                  (Image8->Left <= tlo->Left && Image8->Enabled == true) ||
                  (Image9->Left <= tlo->Left && Image9->Enabled == true) ||
                  (Image10->Left <= tlo->Left && Image10->Enabled == true) ||
                  (Image11->Left <= tlo->Left && Image11->Enabled == true) ||
                  (Image12->Left <= tlo->Left && Image12->Enabled == true)
                   )
                {
                  enemy_right_hard->Enabled = true;
                  enemy_left_hard->Enabled = false;

                }
}
//---------------------------------------------------------------------------


