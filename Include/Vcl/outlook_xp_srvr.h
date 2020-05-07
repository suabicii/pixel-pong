// ************************************************************************ //
// WARNING                                                                    
// -------                                                                    
// The types declared in this file were generated from data read from a       
// Type Library. If this type library is explicitly or indirectly (via        
// another type library referring to this type library) re-imported, or the   
// 'Refresh' command of the Type Library Editor activated while editing the   
// Type Library, the contents of this file will be regenerated and all        
// manual modifications will be lost.                                         
// ************************************************************************ //

// C++ TLBWRTR : $Revision:   1.0.1.0.1.2  $
// File generated on 1/29/2002 1:28:06 PM from Type Library described below.

// ************************************************************************  //
// Type Lib: c:\program files\microsoft office\office10\msoutl.olb (1)
// LIBID: {00062FFF-0000-0000-C000-000000000046}
// LCID: 0
// Helpfile: c:\program files\microsoft office\office10\VBAOL10.CHM
// HelpString: Microsoft Outlook 10.0 Object Library
// DepndLst: 
//   (1) v2.0 stdole, (C:\WINNT\System32\stdole2.tlb)
//   (2) v2.2 Office, (C:\Program Files\Common Files\Microsoft Shared\Office10\MSO.DLL)
// ************************************************************************ //
#ifndef   Outlook_XP_srvrH
#define   Outlook_XP_srvrH

#pragma option push -b -w-inl

#include <oleserver.hpp>
#include <dbolectl.hpp>
#include <utilcls.h>
#if !defined(__UTILCLS_H_VERSION) || (__UTILCLS_H_VERSION < 0x0600)
//
// The code generated by the TLIBIMP utility or the Import|TypeLibrary 
// and Import|ActiveX feature of C++Builder rely on specific versions of
// the header file UTILCLS.H found in the INCLUDE\VCL directory. If an 
// older version of the file is detected, you probably need an update/patch.
//
#error "This file requires a newer version of the header UTILCLS.H" \
       "You need to apply an update/patch to your copy of C++Builder"
#endif
#include <olectl.h>
#include <ocidl.h>
#if !defined(_NO_VCL)
#include <stdvcl.hpp>
#endif  //   _NO_VCL
#include <ocxproxy.h>
#include "Office_XP.h"

#include "Outlook_XP.h"
namespace Outlook_xp
{

// *********************************************************************//
// HelpString: Microsoft Outlook 10.0 Object Library
// Version:    9.1
// *********************************************************************//


// *********************************************************************//
// COM Component Proxy Class Declaration
// Component Name   : TOutlookApplication
// Help String      : 
// Default Interface: _Application
// Def. Intf. Object: _ApplicationPtr
// Def. Intf. DISP? : No
// Event   Interface: ApplicationEvents_10
// TypeFlags        : (11) AppObject CanCreate Predeclid
// *********************************************************************//
typedef void __fastcall (__closure * TOutlookApplicationItemSend)(System::TObject * Sender, 
                                                                  LPDISPATCH Item/*[in]*/, 
                                                                  VARIANT_BOOL* Cancel/*[in]*/);
typedef void __fastcall (__closure * TOutlookApplicationReminder)(System::TObject * Sender, 
                                                                  LPDISPATCH Item/*[in]*/);
typedef void __fastcall (__closure * TOutlookApplicationOptionsPagesAdd)(System::TObject * Sender, 
                                                                         Outlook_xp::PropertyPages* Pages/*[in]*/);
typedef void __fastcall (__closure * TOutlookApplicationAdvancedSearchComplete)(System::TObject * Sender, 
                                                                                Outlook_xp::Search* SearchObject/*[in]*/);
typedef void __fastcall (__closure * TOutlookApplicationAdvancedSearchStopped)(System::TObject * Sender, 
                                                                               Outlook_xp::Search* SearchObject/*[in]*/);

class PACKAGE TOutlookApplication : public Oleserver::TOleServer
{
  _ApplicationPtr m_DefaultIntf;
  _di_IUnknown __fastcall GetDunk();
public:
  __fastcall TOutlookApplication(TComponent* owner) : Oleserver::TOleServer(owner)
  {}

  _ApplicationPtr& GetDefaultInterface();
  void __fastcall InitServerData();
  void __fastcall Connect();
  void __fastcall Disconnect();
  void __fastcall BeforeDestruction();
  void __fastcall ConnectTo(_ApplicationPtr intf);

  virtual void __fastcall InvokeEvent(int DispID, Oleserver::TVariantArray& params);

  /*CoClassWriteArrayPropMethods*/
// StdProp:
  Outlook_xp::_ApplicationPtr __fastcall get_Application(void)
  {
    return GetDefaultInterface()->get_Application();
  }

// StdProp:TOleEnum
  Outlook_xp::OlObjectClass __fastcall get_Class(void)
  {
    return GetDefaultInterface()->get_Class();
  }

// StdProp:
  Outlook_xp::_NameSpacePtr __fastcall get_Session(void)
  {
    return GetDefaultInterface()->get_Session();
  }

// StdProp:IDispatch
  LPDISPATCH __fastcall get_Parent(void)
  {
    return GetDefaultInterface()->get_Parent();
  }

// StdProp:
  Office_xp::AssistantPtr __fastcall get_Assistant(void)
  {
    return GetDefaultInterface()->get_Assistant();
  }

// StdProp:WideString
  BSTR __fastcall get_Name(void)
  {
    return GetDefaultInterface()->get_Name();
  }

// StdProp:WideString
  BSTR __fastcall get_Version(void)
  {
    return GetDefaultInterface()->get_Version();
  }

// StdProp:
  Office_xp::COMAddInsPtr __fastcall get_COMAddIns(void)
  {
    return GetDefaultInterface()->get_COMAddIns();
  }

// StdProp:
  Outlook_xp::_ExplorersPtr __fastcall get_Explorers(void)
  {
    return GetDefaultInterface()->get_Explorers();
  }

// StdProp:
  Outlook_xp::_InspectorsPtr __fastcall get_Inspectors(void)
  {
    return GetDefaultInterface()->get_Inspectors();
  }

// StdProp:
  Office_xp::LanguageSettingsPtr __fastcall get_LanguageSettings(void)
  {
    return GetDefaultInterface()->get_LanguageSettings();
  }

// StdProp:WideString
  BSTR __fastcall get_ProductCode(void)
  {
    return GetDefaultInterface()->get_ProductCode();
  }

// StdProp:
  Office_xp::AnswerWizardPtr __fastcall get_AnswerWizard(void)
  {
    return GetDefaultInterface()->get_AnswerWizard();
  }

// StdProp:TOleEnum
  Office_xp::MsoFeatureInstall __fastcall get_FeatureInstall(void)
  {
    return GetDefaultInterface()->get_FeatureInstall();
  }

// StdProp:TOleEnum
  void __fastcall set_FeatureInstall(Office_xp::MsoFeatureInstall FeatureInstall/*[in]*/)
  {
    GetDefaultInterface()->set_FeatureInstall(FeatureInstall/*[in]*/);
  }

// StdProp:
  Outlook_xp::_RemindersPtr __fastcall get_Reminders(void)
  {
    return GetDefaultInterface()->get_Reminders();
  }

  /*CoClassWriteMethods*/
  Outlook_xp::_ExplorerPtr __fastcall ActiveExplorer(void)
  {
    return GetDefaultInterface()->ActiveExplorer();
  }

  Outlook_xp::_InspectorPtr __fastcall ActiveInspector(void)
  {
    return GetDefaultInterface()->ActiveInspector();
  }

  LPDISPATCH __fastcall CreateItem(Outlook_xp::OlItemType ItemType/*[in]*/)
  {
    return GetDefaultInterface()->CreateItem(ItemType/*[in]*/);
  }

  LPDISPATCH __fastcall CreateItemFromTemplate(BSTR TemplatePath/*[in]*/, 
                                               VARIANT InFolder/*[in,opt]*/)
  {
    return GetDefaultInterface()->CreateItemFromTemplate(TemplatePath/*[in]*/, InFolder/*[in,opt]*/);
  }

  LPDISPATCH __fastcall CreateObject(BSTR ObjectName/*[in]*/)
  {
    return GetDefaultInterface()->CreateObject(ObjectName/*[in]*/);
  }

  Outlook_xp::_NameSpacePtr __fastcall GetNamespace(BSTR Type/*[in]*/)
  {
    return GetDefaultInterface()->GetNamespace(Type/*[in]*/);
  }

  void __fastcall Quit(void)
  {
    GetDefaultInterface()->Quit();
  }

  LPDISPATCH __fastcall ActiveWindow(void)
  {
    return GetDefaultInterface()->ActiveWindow();
  }

  LPDISPATCH __fastcall CopyFile(BSTR FilePath/*[in]*/, BSTR DestFolderPath/*[in]*/)
  {
    return GetDefaultInterface()->CopyFile(FilePath/*[in]*/, DestFolderPath/*[in]*/);
  }

  Outlook_xp::SearchPtr __fastcall AdvancedSearch(BSTR Scope/*[in]*/, VARIANT Filter/*[in,opt]*/, 
                                                  VARIANT SearchSubFolders/*[in,opt]*/, 
                                                  VARIANT Tag/*[in,opt]*/)
  {
    return GetDefaultInterface()->AdvancedSearch(Scope/*[in]*/, Filter/*[in,opt]*/, 
                                                 SearchSubFolders/*[in,opt]*/, Tag/*[in,opt]*/);
  }

  TOLEBOOL __fastcall IsSearchSynchronous(BSTR LookInFolders/*[in]*/)
  {
    return GetDefaultInterface()->IsSearchSynchronous(LookInFolders/*[in]*/);
  }

  void __fastcall GetNewNickNames(VARIANT* pvar/*[in]*/)
  {
    GetDefaultInterface()->GetNewNickNames(pvar/*[in]*/);
  }

  /*CoClassWriteProperties*/
  __property Outlook_xp::_ApplicationPtr Application={ read=get_Application }; // 0, Yes
  __property Outlook_xp::OlObjectClass Class={ read=get_Class }; // 0, No
  __property Outlook_xp::_NameSpacePtr Session={ read=get_Session }; // 0, Yes
  __property LPDISPATCH Parent={ read=get_Parent }; // 0, No
  __property Office_xp::AssistantPtr Assistant={ read=get_Assistant }; // 0, Yes
  __property BSTR Name={ read=get_Name }; // 0, No
  __property BSTR Version={ read=get_Version }; // 0, No
  __property Office_xp::COMAddInsPtr COMAddIns={ read=get_COMAddIns }; // 0, Yes
  __property Outlook_xp::_ExplorersPtr Explorers={ read=get_Explorers }; // 0, Yes
  __property Outlook_xp::_InspectorsPtr Inspectors={ read=get_Inspectors }; // 0, Yes
  __property Office_xp::LanguageSettingsPtr LanguageSettings={ read=get_LanguageSettings }; // 0, Yes
  __property BSTR ProductCode={ read=get_ProductCode }; // 0, No
  __property Office_xp::AnswerWizardPtr AnswerWizard={ read=get_AnswerWizard }; // 0, Yes
  __property Office_xp::MsoFeatureInstall FeatureInstall={ read=get_FeatureInstall }; // 0, No
  __property Outlook_xp::_RemindersPtr Reminders={ read=get_Reminders }; // 0, Yes
  /*CoClassWriteProperties*/
  /*CoClassWriteEventDecls*/
private:
  TOutlookApplicationItemSend    FOnItemSend;
  TNotifyEvent                   FOnNewMail;
  TOutlookApplicationReminder    FOnReminder;
  TOutlookApplicationOptionsPagesAdd FOnOptionsPagesAdd;
  TNotifyEvent                   FOnStartup;
  TNotifyEvent                   FOnQuit;
  TOutlookApplicationAdvancedSearchComplete FOnAdvancedSearchComplete;
  TOutlookApplicationAdvancedSearchStopped FOnAdvancedSearchStopped;
  TNotifyEvent                   FOnMAPILogonComplete;
__published:
  __property TOutlookApplicationItemSend OnItemSend={ read=FOnItemSend, write=FOnItemSend };
  __property TNotifyEvent OnNewMail={ read=FOnNewMail, write=FOnNewMail };
  __property TOutlookApplicationReminder OnReminder={ read=FOnReminder, write=FOnReminder };
  __property TOutlookApplicationOptionsPagesAdd OnOptionsPagesAdd={ read=FOnOptionsPagesAdd, write=FOnOptionsPagesAdd };
  __property TNotifyEvent OnStartup={ read=FOnStartup, write=FOnStartup };
  __property TNotifyEvent OnQuit={ read=FOnQuit, write=FOnQuit };
  __property TOutlookApplicationAdvancedSearchComplete OnAdvancedSearchComplete={ read=FOnAdvancedSearchComplete, write=FOnAdvancedSearchComplete };
  __property TOutlookApplicationAdvancedSearchStopped OnAdvancedSearchStopped={ read=FOnAdvancedSearchStopped, write=FOnAdvancedSearchStopped };
  __property TNotifyEvent OnMAPILogonComplete={ read=FOnMAPILogonComplete, write=FOnMAPILogonComplete };
private:
  bool     FAutoQuit;
__published:
  __property bool AutoQuit = {read=FAutoQuit, write=FAutoQuit};
};

};     // namespace Outlook_xp

#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using  namespace Outlook_xp;
#endif

#pragma option pop

#endif // Outlook_XP_srvrH
