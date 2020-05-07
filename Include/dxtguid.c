//
//  This .CPP file should be included once in your project.  It defines all GUIDs
//  used by DXTransforms as well as the Pixel formats for DX Surfaces
//

#include <dxtransguid.h>    // MIDL generated GUID definitions

#define DX_DECLARE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        EXTERN_C const GUID name \
                = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }
//
//  Pixel format definitions
//
// {e436eb78-524f-11ce-9f53-0020af0ba770}
DX_DECLARE_GUID(DDPF_RGB1, 
0xe436eb78, 0x524f, 0x11ce, 0x9f, 0x53, 0x00, 0x20, 0xaf, 0x0b, 0xa7, 0x70);
// {BBF7D3F3-143F-11d1-B50A-0000F8756A10}
DX_DECLARE_GUID(DDPF_RGB2, 
0xbbf7d3f3, 0x143f, 0x11d1, 0xb5, 0xa, 0x0, 0x0, 0xf8, 0x75, 0x6a, 0x10);
// {e436eb79-524f-11ce-9f53-0020af0ba770}
DX_DECLARE_GUID(DDPF_RGB4, 
0xe436eb79, 0x524f, 0x11ce, 0x9f, 0x53, 0x00, 0x20, 0xaf, 0x0b, 0xa7, 0x70);
// {e436eb7a-524f-11ce-9f53-0020af0ba770}
DX_DECLARE_GUID(DDPF_RGB8, 
0xe436eb7a, 0x524f, 0x11ce, 0x9f, 0x53, 0x00, 0x20, 0xaf, 0x0b, 0xa7, 0x70);
// {BBF7D3F6-143F-11d1-B50A-0000F8756A10}
DX_DECLARE_GUID(DDPF_RGB332, 
0xbbf7d3f6, 0x143f, 0x11d1, 0xb5, 0xa, 0x0, 0x0, 0xf8, 0x75, 0x6a, 0x10);
// {BBF7D3F7-143F-11d1-B50A-0000F8756A10}
DX_DECLARE_GUID(DDPF_ARGB4444, 
0xbbf7d3f7, 0x143f, 0x11d1, 0xb5, 0xa, 0x0, 0x0, 0xf8, 0x75, 0x6a, 0x10);
// {e436eb7b-524f-11ce-9f53-0020af0ba770}
DX_DECLARE_GUID(DDPF_RGB565, 
0xe436eb7b, 0x524f, 0x11ce, 0x9f, 0x53, 0x00, 0x20, 0xaf, 0x0b, 0xa7, 0x70);
// {BBF7D3F9-143F-11d1-B50A-0000F8756A10}
DX_DECLARE_GUID(DDPF_BGR565, 
0xbbf7d3f9, 0x143f, 0x11d1, 0xb5, 0xa, 0x0, 0x0, 0xf8, 0x75, 0x6a, 0x10);
// {e436eb7c-524f-11ce-9f53-0020af0ba770}
DX_DECLARE_GUID(DDPF_RGB555, 
0xe436eb7c, 0x524f, 0x11ce, 0x9f, 0x53, 0x00, 0x20, 0xaf, 0x0b, 0xa7, 0x70);
// {BBF7D3FB-143F-11d1-B50A-0000F8756A10}
DX_DECLARE_GUID(DDPF_ARGB1555, 
0xbbf7d3fb, 0x143f, 0x11d1, 0xb5, 0xa, 0x0, 0x0, 0xf8, 0x75, 0x6a, 0x10);
// {e436eb7d-524f-11ce-9f53-0020af0ba770}
DX_DECLARE_GUID(DDPF_RGB24, 
0xe436eb7d, 0x524f, 0x11ce, 0x9f, 0x53, 0x00, 0x20, 0xaf, 0x0b, 0xa7, 0x70);
// {BBF7D3FD-143F-11d1-B50A-0000F8756A10}
DX_DECLARE_GUID(DDPF_BGR24, 
0xbbf7d3fd, 0x143f, 0x11d1, 0xb5, 0xa, 0x0, 0x0, 0xf8, 0x75, 0x6a, 0x10);
// {e436eb7e-524f-11ce-9f53-0020af0ba770}
DX_DECLARE_GUID(DDPF_RGB32, 
0xe436eb7e, 0x524f, 0x11ce, 0x9f, 0x53, 0x00, 0x20, 0xaf, 0x0b, 0xa7, 0x70);
// {BBF7D3FF-143F-11d1-B50A-0000F8756A10}
DX_DECLARE_GUID(DDPF_BGR32, 
0xbbf7d3ff, 0x143f, 0x11d1, 0xb5, 0xa, 0x0, 0x0, 0xf8, 0x75, 0x6a, 0x10);
// {BBF7D401-143F-11d1-B50A-0000F8756A10}
DX_DECLARE_GUID(DDPF_ABGR32, 
0xbbf7d401, 0x143f, 0x11d1, 0xb5, 0xa, 0x0, 0x0, 0xf8, 0x75, 0x6a, 0x10);
// {773c9ac0-3274-11d0-B724-00aa006c1A01}
DX_DECLARE_GUID(DDPF_ARGB32, 
0x773c9ac0, 0x3274, 0x11d0, 0xb7, 0x24, 0x0, 0xaa, 0x0, 0x6c, 0x1a, 0x1 );
// {BBF7D403-143F-11d1-B50A-0000F8756A10}
DX_DECLARE_GUID(DDPF_PMARGB32, 
0xbbf7d403, 0x143f, 0x11d1, 0xb5, 0xa, 0x0, 0x0, 0xf8, 0x75, 0x6a, 0x10);
// {7846F94E-3915-11d1-99AA-0000F8756A10}
DX_DECLARE_GUID(DDPF_A1, 
0x7846f94e, 0x3915, 0x11d1, 0x99, 0xaa, 0x0, 0x0, 0xf8, 0x75, 0x6a, 0x10);
// {7846F94F-3915-11d1-99AA-0000F8756A10}
DX_DECLARE_GUID(DDPF_A2, 
0x7846f94f, 0x3915, 0x11d1, 0x99, 0xaa, 0x0, 0x0, 0xf8, 0x75, 0x6a, 0x10);
// {7846F950-3915-11d1-99AA-0000F8756A10}
DX_DECLARE_GUID(DDPF_A4, 
0x7846f950, 0x3915, 0x11d1, 0x99, 0xaa, 0x0, 0x0, 0xf8, 0x75, 0x6a, 0x10);
// {7846F951-3915-11d1-99AA-0000F8756A10}
DX_DECLARE_GUID(DDPF_A8, 
0x7846f951, 0x3915, 0x11d1, 0x99, 0xaa, 0x0, 0x0, 0xf8, 0x75, 0x6a, 0x10);
// {7846F952-3915-11d1-99AA-0000F8756A10}
DX_DECLARE_GUID(DDPF_Z8, 
0x7846f952, 0x3915, 0x11d1, 0x99, 0xaa, 0x0, 0x0, 0xf8, 0x75, 0x6a, 0x10);
// {7846F953-3915-11d1-99AA-0000F8756A10}
DX_DECLARE_GUID(DDPF_Z16, 
0x7846f953, 0x3915, 0x11d1, 0x99, 0xaa, 0x0, 0x0, 0xf8, 0x75, 0x6a, 0x10);
// {7846F954-3915-11d1-99AA-0000F8756A10}
DX_DECLARE_GUID(DDPF_Z24, 
0x7846f954, 0x3915, 0x11d1, 0x99, 0xaa, 0x0, 0x0, 0xf8, 0x75, 0x6a, 0x10);
// {7846F955-3915-11d1-99AA-0000F8756A10}
DX_DECLARE_GUID(DDPF_Z32, 
0x7846f955, 0x3915, 0x11d1, 0x99, 0xaa, 0x0, 0x0, 0xf8, 0x75, 0x6a, 0x10);
//
//  Component categories
//
// {C501EDBE-9E70-11d1-9053-00C04FD9189D}
DX_DECLARE_GUID(CATID_DXImageTransform, 
0xc501edbe, 0x9e70, 0x11d1, 0x90, 0x53, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0x9d);

// {C501EDBF-9E70-11d1-9053-00C04FD9189D}
DX_DECLARE_GUID(CATID_DX3DTransform, 
0xc501edbf, 0x9e70, 0x11d1, 0x90, 0x53, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0x9d);

// {ACAC94FC-E5CF-11d1-9066-00C04FD9189D}
DX_DECLARE_GUID(CATID_DXAuthoringTransform,
0xacac94fc, 0xe5cf, 0x11d1, 0x90, 0x66, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0x9d);

// {52BA7097-B52C-11d1-81CB-0000F87557DB}
DX_DECLARE_GUID(CATID_DXSurface, 
0x52ba7097, 0xb52c, 0x11d1, 0x81, 0xcb, 0x0, 0x0, 0xf8, 0x75, 0x57, 0xdb);

//
//  Service IDs.  
//
//  NOTE:  The service ID for direct draw is == IID_IDirectDraw3 for compatibility
//         with trident service ID's.  This should be the service ID for DirectDraw
//         no matter what version.
//
//  BUGBUG -- Should we use this service provider ID for direct draw?
//
DX_DECLARE_GUID(SID_SDirectDraw,
0x618f8ad4, 0x8b7a, 0x11d0, 0x8f, 0xcc, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0x9d);
//
//  The service ID for Direct 3D Retain Mode is the same as IID_IDirect3DRM
//  
DX_DECLARE_GUID(SID_SDirect3DRM,
0x2bc49361, 0x8327, 0x11cf, 0xac, 0x4a, 0x0, 0x0, 0xc0, 0x38, 0x25, 0xa1);

//
//  The service ID for DirectDraw3 is the same as IID_IDirectDraw3
//  
DX_DECLARE_GUID(SID_SDirectDraw3,
0x618f8ad4, 0x8b7a, 0x11d0, 0x8f, 0xcc, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0x9d);

    
