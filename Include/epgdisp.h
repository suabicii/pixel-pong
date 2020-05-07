/* This header file machine-generated by mktyplib.exe */
/* Interface to type library: EPGDisp */

#ifndef _EPGDisp_H_
#pragma option push -b -a8 -pc -A- /*P_O_Push_S*/
#define _EPGDisp_H_

DEFINE_GUID(LIBID_EPGDisp,0xA74E7EF1L,0xC3D2,0x11CF,0x85,0x78,0x00,0x80,0x5F,0xE4,0x80,0x9B);
#ifndef BEGIN_INTERFACE
#define BEGIN_INTERFACE
#endif

typedef enum epgview {
    EPG_GRID_VIEW = 0,
    EPG_CATEGORY_VIEW = 1,
    EPG_DSS_VIEW = 2,
    EPG_MAX_VIEW = 3
} EPGVIEW;

typedef enum {
    TVX_CONTROL_GENERIC = 0,
    TVX_CONTROL_EPG = 1,
    TVX_CONTROL_FSVIDEO = 2,
    TVX_CONTROL_NUM_OF_TYPES = 3
} TVX_CONTROL_TYPES;

DEFINE_GUID(IID_ITVControlPrivate,0x621CA624L,0xF887,0x11D0,0x8B,0x90,0x00,0xC0,0x4F,0xBB,0xDE,0x88);

/* Definition of interface: ITVControlPrivate */
#undef INTERFACE
#define INTERFACE ITVControlPrivate

DECLARE_INTERFACE_(ITVControlPrivate, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

    /* ITVControlPrivate methods */
    STDMETHOD(Resume)(THIS) PURE;
    STDMETHOD(Suspend)(THIS) PURE;
    STDMETHOD(Identify)(THIS_ TVX_CONTROL_TYPES FAR* id) PURE;
    STDMETHOD(AccelCommand)(THIS_ int id) PURE;
};

DEFINE_GUID(IID_IEPG,0x3F8A2EA4L,0xC171,0x11CF,0x86,0x8C,0x00,0x80,0x5F,0x2C,0x11,0xCE);

/* Definition of interface: IEPG */
#undef INTERFACE
#define INTERFACE IEPG

DECLARE_INTERFACE_(IEPG, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

    /* IEPG methods */
    STDMETHOD(SetActiveView)(THIS_ int iView, IUnknown * punk) PURE;
    STDMETHOD(GetActiveView)(THIS_ int FAR* piView) PURE;
    STDMETHOD(JumpTo)(THIS_ DATE dt) PURE;
    STDMETHOD(TakeFocus)(THIS) PURE;
};

DEFINE_GUID(DIID__DEPG,0xA74E7EF2L,0xC3D2,0x11CF,0x85,0x78,0x00,0x80,0x5F,0xE4,0x80,0x9B);

/* Definition of dispatch interface: _DEPG */
#undef INTERFACE
#define INTERFACE _DEPG

DECLARE_INTERFACE_(_DEPG, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

    /* _DEPG properties:
    BSTR TabFontName;
    long TabFontSize;
    VARIANT_BOOL TabFontBold;
    VARIANT_BOOL TabFontItalic;
    VARIANT_BOOL TabFontUnderline;
    VARIANT_BOOL TabFontStrikethrough;
    OLE_COLOR TabFontColor;
    BSTR ButtonFontName;
    long ButtonFontSize;
    VARIANT_BOOL ButtonFontBold;
    VARIANT_BOOL ButtonFontItalic;
    VARIANT_BOOL ButtonFontUnderline;
    VARIANT_BOOL ButtonFontStrikethrough;
    OLE_COLOR ButtonFontColor;
    */

    /* _DEPG methods:
    void AboutBox(void);
    */
};

DEFINE_GUID(DIID__DEPGEvents,0xA74E7EF3L,0xC3D2,0x11CF,0x85,0x78,0x00,0x80,0x5F,0xE4,0x80,0x9B);

/* Definition of dispatch interface: _DEPGEvents */
#undef INTERFACE
#define INTERFACE _DEPGEvents

DECLARE_INTERFACE_(_DEPGEvents, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif
};

DEFINE_GUID(CLSID_EPG,0xA74E7EF4L,0xC3D2,0x11CF,0x85,0x78,0x00,0x80,0x5F,0xE4,0x80,0x9B);

#ifdef __cplusplus
class EPG;
#endif

DEFINE_GUID(IID_IEPGComponent,0x3F8A2EA5L,0xC171,0x11CF,0x86,0x8C,0x00,0x80,0x5F,0x2C,0x11,0xCE);

/* Definition of interface: IEPGComponent */
#undef INTERFACE
#define INTERFACE IEPGComponent

DECLARE_INTERFACE_(IEPGComponent, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

    /* IEPGComponent methods */
    STDMETHOD(SetItem)(THIS_ IUnknown * pItem) PURE;
    STDMETHOD(Clear)(THIS) PURE;
};

DEFINE_GUID(DIID__DPSP,0xA74E7EF6L,0xC3D2,0x11CF,0x85,0x78,0x00,0x80,0x5F,0xE4,0x80,0x9B);

/* Definition of dispatch interface: _DPSP */
#undef INTERFACE
#define INTERFACE _DPSP

DECLARE_INTERFACE_(_DPSP, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

    /* _DPSP properties:
    BSTR ProgramFontName;
    long ProgramFontSize;
    VARIANT_BOOL ProgramFontBold;
    VARIANT_BOOL ProgramFontItalic;
    VARIANT_BOOL ProgramFontUnderline;
    VARIANT_BOOL ProgramFontStrikethrough;
    OLE_COLOR ProgramFontColor;
    BSTR TitleFontName;
    long TitleFontSize;
    VARIANT_BOOL TitleFontBold;
    VARIANT_BOOL TitleFontItalic;
    VARIANT_BOOL TitleFontUnderline;
    VARIANT_BOOL TitleFontStrikethrough;
    OLE_COLOR TitleFontColor;
    */

    /* _DPSP methods:
    void AboutBox(void);
    */
};

DEFINE_GUID(DIID__DPSPEvents,0xA74E7EF7L,0xC3D2,0x11CF,0x85,0x78,0x00,0x80,0x5F,0xE4,0x80,0x9B);

/* Definition of dispatch interface: _DPSPEvents */
#undef INTERFACE
#define INTERFACE _DPSPEvents

DECLARE_INTERFACE_(_DPSPEvents, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif
};

DEFINE_GUID(CLSID_PSP,0xA74E7EF8L,0xC3D2,0x11CF,0x85,0x78,0x00,0x80,0x5F,0xE4,0x80,0x9B);

#ifdef __cplusplus
class PSP;
#endif

DEFINE_GUID(DIID__DPOP,0xA74E7EFAL,0xC3D2,0x11CF,0x85,0x78,0x00,0x80,0x5F,0xE4,0x80,0x9B);

/* Definition of dispatch interface: _DPOP */
#undef INTERFACE
#define INTERFACE _DPOP

DECLARE_INTERFACE_(_DPOP, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

    /* _DPOP properties:
    BSTR ButtonFontName;
    long ButtonFontSize;
    VARIANT_BOOL ButtonFontBold;
    VARIANT_BOOL ButtonFontItalic;
    VARIANT_BOOL ButtonFontUnderline;
    VARIANT_BOOL ButtonFontStrikethrough;
    OLE_COLOR ButtonFontColor;
    OLE_COLOR ButtonBackColor;
    OLE_COLOR ButtonFocusColor;
    OLE_COLOR ButtonDisabledColor;
    VARIANT_BOOL VerticalLayout;
    long ButtonHeight;
    long ButtonWidth;
    */

    /* _DPOP methods:
    void AboutBox(void);
    */
};

DEFINE_GUID(DIID__DPOPEvents,0xA74E7EFBL,0xC3D2,0x11CF,0x85,0x78,0x00,0x80,0x5F,0xE4,0x80,0x9B);

/* Definition of dispatch interface: _DPOPEvents */
#undef INTERFACE
#define INTERFACE _DPOPEvents

DECLARE_INTERFACE_(_DPOPEvents, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif
};

DEFINE_GUID(CLSID_POP,0xA74E7EFCL,0xC3D2,0x11CF,0x85,0x78,0x00,0x80,0x5F,0xE4,0x80,0x9B);

#ifdef __cplusplus
class POP;
#endif

DEFINE_GUID(DIID__DBan,0xA74E7F0EL,0xC3D2,0x11CF,0x85,0x78,0x00,0x80,0x5F,0xE4,0x80,0x9B);

/* Definition of dispatch interface: _DBan */
#undef INTERFACE
#define INTERFACE _DBan

DECLARE_INTERFACE_(_DBan, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

    /* _DBan properties:
    BSTR HourFontName;
    long HourFontSize;
    VARIANT_BOOL HourFontBold;
    VARIANT_BOOL HourFontItalic;
    VARIANT_BOOL HourFontUnderline;
    VARIANT_BOOL HourFontStrikethrough;
    OLE_COLOR HourFontColor;
    BSTR MinuteFontName;
    long MinuteFontSize;
    VARIANT_BOOL MinuteFontBold;
    VARIANT_BOOL MinuteFontItalic;
    VARIANT_BOOL MinuteFontUnderline;
    VARIANT_BOOL MinuteFontStrikethrough;
    OLE_COLOR MinuteFontColor;
    BSTR AMPMFontName;
    long AMPMFontSize;
    VARIANT_BOOL AMPMFontBold;
    VARIANT_BOOL AMPMFontItalic;
    VARIANT_BOOL AMPMFontUnderline;
    VARIANT_BOOL AMPMFontStrikethrough;
    OLE_COLOR AMPMFontColor;
    VARIANT_BOOL LeftClock;
    OLE_COLOR BackgroundColor;
    */

    /* _DBan methods:
    void AboutBox(void);
    */
};

DEFINE_GUID(DIID__DBanEvents,0xA74E7F10L,0xC3D2,0x11CF,0x85,0x78,0x00,0x80,0x5F,0xE4,0x80,0x9B);

/* Definition of dispatch interface: _DBanEvents */
#undef INTERFACE
#define INTERFACE _DBanEvents

DECLARE_INTERFACE_(_DBanEvents, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif
};

DEFINE_GUID(CLSID_Ban,0xA74E7F11L,0xC3D2,0x11CF,0x85,0x78,0x00,0x80,0x5F,0xE4,0x80,0x9B);

#ifdef __cplusplus
class Ban;
#endif

DEFINE_GUID(DIID__DMsepg4,0xA74E7EFEL,0xC3D2,0x11CF,0x85,0x78,0x00,0x80,0x5F,0xE4,0x80,0x9B);

/* Definition of dispatch interface: _DMsepg4 */
#undef INTERFACE
#define INTERFACE _DMsepg4

DECLARE_INTERFACE_(_DMsepg4, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

    /* _DMsepg4 methods:
    VARIANT_BOOL GetCC(void);
    void AboutBox(void);
    */
};

DEFINE_GUID(DIID__DMsepg4Events,0xA74E7EFFL,0xC3D2,0x11CF,0x85,0x78,0x00,0x80,0x5F,0xE4,0x80,0x9B);

/* Definition of dispatch interface: _DMsepg4Events */
#undef INTERFACE
#define INTERFACE _DMsepg4Events

DECLARE_INTERFACE_(_DMsepg4Events, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif
};

DEFINE_GUID(CLSID_Msepg4,0xA74E7F00L,0xC3D2,0x11CF,0x85,0x78,0x00,0x80,0x5F,0xE4,0x80,0x9B);

#ifdef __cplusplus
class Msepg4;
#endif

DEFINE_GUID(DIID__DPreview,0xA74E7F02L,0xC3D2,0x11CF,0x85,0x78,0x00,0x80,0x5F,0xE4,0x80,0x9B);

/* Definition of dispatch interface: _DPreview */
#undef INTERFACE
#define INTERFACE _DPreview

DECLARE_INTERFACE_(_DPreview, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

    /* _DPreview methods:
    void AboutBox(void);
    */
};

DEFINE_GUID(DIID__DPreviewEvents,0xA74E7F03L,0xC3D2,0x11CF,0x85,0x78,0x00,0x80,0x5F,0xE4,0x80,0x9B);

/* Definition of dispatch interface: _DPreviewEvents */
#undef INTERFACE
#define INTERFACE _DPreviewEvents

DECLARE_INTERFACE_(_DPreviewEvents, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif
};

DEFINE_GUID(CLSID_Preview,0xA74E7F04L,0xC3D2,0x11CF,0x85,0x78,0x00,0x80,0x5F,0xE4,0x80,0x9B);

#ifdef __cplusplus
class Preview;
#endif

DEFINE_GUID(DIID__DTUNE_TVX_CONTROL,0xA74E7F06L,0xC3D2,0x11CF,0x85,0x78,0x00,0x80,0x5F,0xE4,0x80,0x9B);

/* Definition of dispatch interface: _DTUNE_TVX_CONTROL */
#undef INTERFACE
#define INTERFACE _DTUNE_TVX_CONTROL

DECLARE_INTERFACE_(_DTUNE_TVX_CONTROL, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

    /* _DTUNE_TVX_CONTROL properties:
    BSTR BackgroundImage;
    */

    /* _DTUNE_TVX_CONTROL methods:
    void AboutBox(void);
    */
};

DEFINE_GUID(DIID__DTUNE_TVX_CONTROLEvents,0xA74E7F07L,0xC3D2,0x11CF,0x85,0x78,0x00,0x80,0x5F,0xE4,0x80,0x9B);

/* Definition of dispatch interface: _DTUNE_TVX_CONTROLEvents */
#undef INTERFACE
#define INTERFACE _DTUNE_TVX_CONTROLEvents

DECLARE_INTERFACE_(_DTUNE_TVX_CONTROLEvents, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif
};

DEFINE_GUID(CLSID_TUNE_TVX_CONTROL,0xA74E7F08L,0xC3D2,0x11CF,0x85,0x78,0x00,0x80,0x5F,0xE4,0x80,0x9B);

#ifdef __cplusplus
class TUNE_TVX_CONTROL;
#endif

DEFINE_GUID(DIID__DADV_CONTROL,0xA74E7F0AL,0xC3D2,0x11CF,0x85,0x78,0x00,0x80,0x5F,0xE4,0x80,0x9B);

/* Definition of dispatch interface: _DADV_CONTROL */
#undef INTERFACE
#define INTERFACE _DADV_CONTROL

DECLARE_INTERFACE_(_DADV_CONTROL, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

    /* _DADV_CONTROL properties:
    BSTR BackgroundImage;
    */

    /* _DADV_CONTROL methods:
    void AboutBox(void);
    */
};

DEFINE_GUID(DIID__DADV_CONTROLEvents,0xA74E7F0BL,0xC3D2,0x11CF,0x85,0x78,0x00,0x80,0x5F,0xE4,0x80,0x9B);

/* Definition of dispatch interface: _DADV_CONTROLEvents */
#undef INTERFACE
#define INTERFACE _DADV_CONTROLEvents

DECLARE_INTERFACE_(_DADV_CONTROLEvents, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif
};

DEFINE_GUID(CLSID_ADV_CONTROL,0xA74E7F0CL,0xC3D2,0x11CF,0x85,0x78,0x00,0x80,0x5F,0xE4,0x80,0x9B);

#ifdef __cplusplus
class ADV_CONTROL;
#endif

#pragma option pop /*P_O_Pop*/
#endif
