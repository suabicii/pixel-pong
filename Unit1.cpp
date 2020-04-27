//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

void moveUp(TImage *paddle)
{
        if (paddle->Top > 10) paddle->Top -= 10;
}

void moveDown(TImage *paddle)
{
        if (paddle->Top + paddle->Height < Form1->background->Height - 10) paddle->Top += 10;
}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::moveUpLeftPaddleTimer(TObject *Sender)
{
        moveUp(leftPaddle);        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::moveDownLeftPaddleTimer(TObject *Sender)
{
        moveDown(leftPaddle);        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        if (Key == 'w' || Key == 'W') moveUpLeftPaddle->Enabled = true;
        if (Key == 's' || Key == 'S') moveDownLeftPaddle->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        if (Key == 'w' || Key == 'W') moveUpLeftPaddle->Enabled = false;
        if (Key == 's' || Key == 'S') moveDownLeftPaddle->Enabled = false;
}
//---------------------------------------------------------------------------
