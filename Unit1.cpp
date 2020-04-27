//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

int x = -8;
int y = -8;

void moveUp(TImage *paddle)
{
        if (paddle->Top > 10) paddle->Top -= 10;
}

void moveDown(TImage *paddle)
{
        if (paddle->Top + paddle->Height < Form1->background->Height - 10) paddle->Top += 10;
}

void bounceBall(TImage *paddle)
{
        if (Form1->ball->Left >= paddle->Left + paddle->Width)
        {
                ;
        }
        else if (Form1->ball->Left > paddle->Left - paddle->Width / 2 && Form1->ball->Left < paddle->Left + paddle->Width)
        {
            x = -x;
            if (Form1->moveUpLeftPaddle->Enabled && Form1->moveUpRightPaddle->Enabled) y = -y;
        }
        else if (Form1->ball->Top > paddle->Top - paddle->Height && Form1->ball->Top < paddle->Left + paddle->Height)
        {
                y = -y;
        }
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
        if (Key == VK_UP) moveUpRightPaddle->Enabled = true;
        if (Key == VK_DOWN) moveDownRightPaddle->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        if (Key == 'w' || Key == 'W') moveUpLeftPaddle->Enabled = false;
        if (Key == 's' || Key == 'S') moveDownLeftPaddle->Enabled = false;
        if (Key == VK_UP) moveUpRightPaddle->Enabled = false;
        if (Key == VK_DOWN) moveDownRightPaddle->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::moveUpRightPaddleTimer(TObject *Sender)
{
        moveUp(rightPaddle);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::moveDownRightPaddleTimer(TObject *Sender)
{
        moveDown(rightPaddle);        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::moveBallTimer(TObject *Sender)
{
        ball->Left += x;
        ball->Top += y;
        // odbij od gornej sciany
        if (ball->Top - 5 <= background->Top) y = -y;
        // odbij od dolnej sciany
        if (ball->Top + ball->Height < background->Height - 10) y = -y;

        // odbij pileczke
        bounceBall(leftPaddle);
        bounceBall(rightPaddle);
}
//---------------------------------------------------------------------------

