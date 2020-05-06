//---------------------------------------------------------------------------

#include <vcl.h>
#include <vector.h>
#include <string>
#include "mmsystem.h"
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

int x = 0;
int y = 0;
int leftPlayerPoints = 0;
int rightPlayerPoints = 0;
int seconds = 1;
int trackIndex = 1;
const int POSITION_IN_X_AXIS_OUT_OF_TABLE = 850;

bool leftPlayerEnabled = false;
bool rightPlayerEnabled = false;
bool isGameStarted = false;
bool advantageGameEnabled = false;

void startGame()
{
        Form1->moveBall->Enabled = true;
        isGameStarted = true;
}

void disableMainMenuButtons()
{
        Form1->singlePlayerMode->Enabled = false;
        Form1->singlePlayerMode->Visible = false;
        Form1->multiPlayerMode->Enabled = false;
        Form1->multiPlayerMode->Visible = false;
}

void disableChoiceButtonsAndInfo()
{
        Form1->leftChoice->Enabled = false;
        Form1->leftChoice->Visible = false;
        Form1->rightChoice->Enabled = false;
        Form1->rightChoice->Visible = false;
        Form1->choiceInfo->Visible = false;
}

void setInitialPositionsOfPaddles()
{
        Form1->leftPaddle->Top = 232;
        Form1->leftPaddle->Left = 24;
        Form1->rightPaddle->Top = 232;
        Form1->rightPaddle->Left = 744;
}

void playTrack(TMediaPlayer *MediaPlayer, AnsiString fileName, TTimer *playlist, TTimer *tracksDuration)
{
        MediaPlayer->FileName = fileName;
        MediaPlayer->Open();
        MediaPlayer->Play();
        tracksDuration->Enabled = true;
        playlist->Enabled = false;
}

bool collision(TImage *ball, TImage *paddle)
{
    if (ball->Left >= paddle->Left - ball->Width &&
        ball->Left <= paddle->Left + paddle->Width &&
        ball->Top >= paddle->Top - ball->Height &&
        ball->Top <= paddle->Top + paddle->Height)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void moveUp(TImage *paddle)
{
        if (paddle->Top > 10) paddle->Top -= 10;
}

void moveDown(TImage *paddle)
{
        if (paddle->Top + paddle->Height < Form1->background->Height - 10) paddle->Top += 10;
}

void bounceBall(TImage *ball, TImage *paddle)
{

        x = -x;
        if (ball->Top <= paddle->Height / 2) y -=2;
        else y += 4;
        if (y >= 50 || y <= -50)
        {
                // wyrzuc pilke poza stol, gdy sie "zatnie" kompletnie
                // tzn. gdy gracz przydusi pileczke do gornej lub
                // dolnej sciany
                if (ball->Left >= paddle->Width) ball->Left += 100;
                else ball->Left -= 100;
        }
        PlaySound("snd/fx1.wav", NULL, SND_ASYNC);
}

void endGame()
{
        isGameStarted = false;
        if (Form1->AI->Enabled) Form1->AI->Enabled = false;
        if (leftPlayerEnabled) leftPlayerEnabled = false;
        if (rightPlayerEnabled) rightPlayerEnabled = false;
        Form1->moveUpLeftPaddle->Enabled = false;
        Form1->moveDownLeftPaddle->Enabled = false;
        Form1->moveUpRightPaddle->Enabled = false;
        Form1->moveDownRightPaddle->Enabled = false;
        setInitialPositionsOfPaddles();
}

bool isGameEnded()
{
        if (!advantageGameEnabled)
        {
            if (leftPlayerPoints == 6 || rightPlayerPoints == 6)
            {
                endGame();
                return true;
            }
        }
        else
        {
            if (leftPlayerPoints - rightPlayerPoints == 2 ||
                rightPlayerPoints - leftPlayerPoints == 2)
            {
                endGame();
                return true;
            }
        }
        return false;
}

void pauseBallAfterScoring()
{
        PlaySound("snd/fx3.wav", NULL, SND_ASYNC);
        Form1->moveBall->Enabled = false;
        if (!isGameEnded()) Form1->pause->Enabled = true;
}

void countPoints(TImage *ball)
{
        if (ball->Left < Form1->leftPaddle->Left &&
            ball->Left + ball->Width < Form1->background->Left)
        {
            rightPlayerPoints++;
            pauseBallAfterScoring();
        }
        else if (ball->Left > Form1->rightPaddle->Left + Form1->rightPaddle->Width &&
            ball->Left + ball->Width > POSITION_IN_X_AXIS_OUT_OF_TABLE)
        {
            leftPlayerPoints++;
            pauseBallAfterScoring();
        }

        if (leftPlayerPoints == 5 && rightPlayerPoints == 5 &&
            leftPlayerPoints == rightPlayerPoints) advantageGameEnabled = true;
}

AnsiString whoWon()
{
        if (leftPlayerPoints > rightPlayerPoints) return "lewy";
        else return "prawy";
}

void randomizeBallPosition(TImage *ball)
{
        int position = 0;
        randomize();
        position = random(2);

        if (position == 0)
        {
            ball->Left = 600;
            ball->Top = 380;
            x = -8;
        }
        else
        {
            ball->Left = 160;
            ball->Top = 440;
            x = 8;
        }
        y = -8;
}

void playAgain()
{
        seconds = 1;
        leftPlayerPoints = 0;
        rightPlayerPoints = 0;
        Form1->singlePlayerMode->Enabled = true;
        Form1->singlePlayerMode->Visible = true;
        Form1->multiPlayerMode->Enabled = true;
        Form1->multiPlayerMode->Visible = true;
        randomizeBallPosition(Form1->ball);
}

void showFullResult()
{
        if (isGameEnded())
        {
                if (advantageGameEnabled) advantageGameEnabled = false;

                if(MessageDlg("KONIEC GRY! Wygra³ gracz " + whoWon()
                        + "\nCzy chcesz zagraæ jeszcze raz?", mtConfirmation,
                        TMsgDlgButtons() << mbYes << mbNo, 0) == ID_YES)
                {
                    playAgain();
                }
                else
                {
                    Application->Terminate();    
                }
        }
}

void AIactivity(TImage *ball, TImage *paddle)
{
        if (ball->Top + ball->Height < paddle->Top + paddle->Height) moveUp(paddle);
        else moveDown(paddle);
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
        if(leftPlayerEnabled)
        {
            if (Key == 'w' || Key == 'W') moveUpLeftPaddle->Enabled = true;
            if (Key == 's' || Key == 'S') moveDownLeftPaddle->Enabled = true;
        }

        if (rightPlayerEnabled)
        {
            if (Key == VK_UP) moveUpRightPaddle->Enabled = true;
            if (Key == VK_DOWN) moveDownRightPaddle->Enabled = true;
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        if (leftPlayerEnabled)
        {
            if (Key == 'w' || Key == 'W') moveUpLeftPaddle->Enabled = false;
            if (Key == 's' || Key == 'S') moveDownLeftPaddle->Enabled = false;
        }

        if (rightPlayerEnabled)
        {
            if (Key == VK_UP) moveUpRightPaddle->Enabled = false;
            if (Key == VK_DOWN) moveDownRightPaddle->Enabled = false;
        }
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
        if (ball->Top - 5 <= background->Top)
        {
            y = -y;
            PlaySound("snd/fx2.wav", NULL, SND_ASYNC);
        }
        // odbij od dolnej sciany
        if (ball->Top + ball->Height > background->Height - 5)
        {
            y = -y;
            PlaySound("snd/fx2.wav", NULL, SND_ASYNC);
        }

        // odbij pileczke od paletki
        if (collision(ball, leftPaddle)) bounceBall(ball, leftPaddle);
        if (collision(ball, rightPaddle)) bounceBall(ball, rightPaddle);

        Label1->Caption = "x = " + IntToStr(x);
        Label2->Caption = "y = " + IntToStr(y);

        countPoints(ball);
        leftPlayerResult->Caption = IntToStr(leftPlayerPoints);
        rightPlayerResult->Caption = IntToStr(rightPlayerPoints);
        showFullResult();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::pauseTimer(TObject *Sender)
{
        seconds++;
        if (seconds == 3)
        {
            if (isGameStarted)
            {
                randomizeBallPosition(ball);
                moveBall->Enabled = true;
                seconds = 1;
                pause->Enabled = false;
            }
            else
                seconds = 2;
        }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
        isGameStarted = false;
        moveBall->Enabled = false;

        if (Application->MessageBox(
        "Czy na pewno chcesz wyjœæ z gry?", "PotwierdŸ",
        MB_YESNO | MB_ICONQUESTION) == IDNO)
        {
            isGameStarted = true;
            moveBall->Enabled = true;
            Action = caNone;
        }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormCreate(TObject *Sender)
{
        playlist->Enabled = true;
        randomizeBallPosition(ball);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::tracksDurationTimer(TObject *Sender)
{
        ProgressBar1->Max = MediaPlayer1->Length;
        ProgressBar1->Position = MediaPlayer1->Position;

        if (ProgressBar1->Position == MediaPlayer1->Length)
        {
            MediaPlayer1->Close();
            tracksDuration->Enabled = false;
            playlist->Enabled = true;
            trackIndex++;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::playlistTimer(TObject *Sender)
{
        switch (trackIndex)
        {
            // pliki mp3 zawieszaja gre :(, dlatego uzylem formatu wav
            case 1:
                playTrack(MediaPlayer1, "snd/music1.wav", playlist, tracksDuration);
                break;
            case 2:
                playTrack(MediaPlayer1, "snd/music2.wav", playlist, tracksDuration);
                break;
            case 3:
                playTrack(MediaPlayer1, "snd/music3.wav", playlist, tracksDuration);
                break;
            case 4:
                // moj utwor w wersji 8bit :), a dokladniej: Suabicii - Humans :)
                playTrack(MediaPlayer1, "snd/music4.wav", playlist, tracksDuration);
                break;
            case 5:
                playTrack(MediaPlayer1, "snd/music5.wav", playlist, tracksDuration);
                break;
            case 6:
                playTrack(MediaPlayer1, "snd/music6.wav", playlist, tracksDuration);
                trackIndex = 1;
                break;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AITimer(TObject *Sender)
{
        if (!leftPlayerEnabled) AIactivity(ball, leftPaddle);
        else if (!rightPlayerEnabled) AIactivity(ball, rightPaddle);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::singlePlayerModeClick(TObject *Sender)
{
        leftChoice->Enabled = true;
        leftChoice->Visible = true;
        rightChoice->Enabled = true;
        rightChoice->Visible = true;
        choiceInfo->Visible = true;
        disableMainMenuButtons();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::multiPlayerModeClick(TObject *Sender)
{
        if (!leftPlayerEnabled) leftPlayerEnabled = true;
        if (!rightPlayerEnabled) rightPlayerEnabled = true;
        disableMainMenuButtons();
        startGame();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::leftChoiceClick(TObject *Sender)
{
        leftPlayerEnabled = true;
        if (rightPlayerEnabled) rightPlayerEnabled = false;
        disableChoiceButtonsAndInfo();
        AI->Enabled = true;
        startGame();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::rightChoiceClick(TObject *Sender)
{
        rightPlayerEnabled = true;
        if (leftPlayerEnabled) leftPlayerEnabled = false;
        disableChoiceButtonsAndInfo();
        AI->Enabled = true;
        startGame();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormKeyPress(TObject *Sender, char &Key)
{
        // nie wiem dlaczego to nie dziala :(
        if (Key == VK_ESCAPE)
        {
            if (Application->MessageBox(
                "Czy na pewno chcesz wyjœæ z gry?", "PotwierdŸ",
              MB_YESNO | MB_ICONQUESTION) == IDYES)
           {
               Application->Terminate();
           }
        }
}
//---------------------------------------------------------------------------

