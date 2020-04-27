//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *background;
        TImage *leftPaddle;
        TImage *rightPaddle;
        TImage *Image1;
        TTimer *moveUpLeftPaddle;
        TTimer *moveDownLeftPaddle;
        TTimer *moveDownRightPaddle;
        TTimer *moveUpRightPaddle;
        TTimer *moveBall;
        void __fastcall moveUpLeftPaddleTimer(TObject *Sender);
        void __fastcall moveDownLeftPaddleTimer(TObject *Sender);
        void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall FormKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall moveUpRightPaddleTimer(TObject *Sender);
        void __fastcall moveDownRightPaddleTimer(TObject *Sender);
        void __fastcall moveBallTimer(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
