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
#include <ComCtrls.hpp>
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
        TTimer *tracksDuration;
        TProgressBar *ProgressBar1;
        TTimer *playlist;
        TTimer *AI;
        TButton *singlePlayerMode;
        TButton *multiPlayerMode;
        TButton *leftChoice;
        TButton *rightChoice;
        TLabel *choiceInfo;
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
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall tracksDurationTimer(TObject *Sender);
        void __fastcall playlistTimer(TObject *Sender);
        void __fastcall AITimer(TObject *Sender);
        void __fastcall singlePlayerModeClick(TObject *Sender);
        void __fastcall multiPlayerModeClick(TObject *Sender);
        void __fastcall leftChoiceClick(TObject *Sender);
        void __fastcall rightChoiceClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
