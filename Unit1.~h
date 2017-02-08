//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include "trayicon.h"
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TShape *tlo;
        TImage *b;
        TTimer *Timerpilka;
        TImage *p;
        TTimer *lewo;
        TTimer *prawo;
        TImage *Image1;
        TImage *Image2;
        TImage *Image3;
        TImage *Image4;
        TImage *Image5;
        TImage *Image6;
        TImage *Image7;
        TImage *Image8;
        TImage *Image9;
        TImage *Image10;
        TImage *Image11;
        TImage *Image12;
        TButton *Button1;
        TImage *b2;
        TImage *b3;
        TTimer *enemy_move;
        TTimer *enemy_left;
        TTimer *enemy_right;
        TButton *Button2;
        TTimer *enemy_left_hard;
        TTimer *enemy_right_hard;


        void __fastcall TimerpilkaTimer(TObject *Sender);
        void __fastcall lewoTimer(TObject *Sender);
        void __fastcall prawoTimer(TObject *Sender);
        void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall FormKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall enemy_moveTimer(TObject *Sender);
        void __fastcall enemy_rightTimer(TObject *Sender);
        void __fastcall enemy_leftTimer(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall enemy_right_hardTimer(TObject *Sender);
        void __fastcall enemy_left_hardTimer(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
