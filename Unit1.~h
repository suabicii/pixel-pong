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
#include <MPlayer.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *background;
        TImage *leftPaddle;
        TImage *rightPaddle;
        TImage *ball;
        TTimer *moveUpLeftPaddle;
        TTimer *moveDownLeftPaddle;
        TTimer *moveDownRightPaddle;
        TTimer *moveUpRightPaddle;
        TTimer *moveBall;
        TLabel *leftPlayerResult;
        TLabel *rightPlayerResult;
        TTimer *pause;
        TMediaPlayer *MediaPlayer1;
        void __fastcall moveUpLeftPaddleTimer(TObject *Sender);
        void __fastcall moveDownLeftPaddleTimer(TObject *Sender);
        void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall FormKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall moveUpRightPaddleTimer(TObject *Sender);
        void __fastcall moveDownRightPaddleTimer(TObject *Sender);
        void __fastcall moveBallTimer(TObject *Sender);
        void __fastcall pauseTimer(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
