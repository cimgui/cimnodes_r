//This file is automatically generated by generator.lua from https://github.com/cimgui/cimnodes_r
//based on ImNodes.h file version XXX from https://github.com/rokups/ImNodes
#ifndef CIMNODESR_INCLUDED
#define CIMNODESR_INCLUDED

#include "cimgui.h"

#ifdef CIMGUI_DEFINE_ENUMS_AND_STRUCTS
typedef struct SlotInfo SlotInfo;
typedef struct CanvasStyle CanvasStyle;
typedef struct CanvasState CanvasState;
typedef struct _CanvasStateImpl _CanvasStateImpl;

struct _CanvasStateImpl;
typedef enum {
    ColCanvasLines,
    ColNodeBg,
    ColNodeActiveBg,
    ColNodeBorder,
    ColConnection,
    ColConnectionActive,
    ColSelectBg,
    ColSelectBorder,
    ColMax
}StyleColor;
struct CanvasStyle
{
        float CurveThickness;
        float ConnectionIndent;
};
struct CanvasState
{
    float Zoom;
    ImVec2 Offset;
    ImColor Colors[ColMax];
    CanvasStyle Style;
    _CanvasStateImpl* _Impl;
};
struct SlotInfo
{
    const char* title;
    int kind;
};
#else
#endif // CIMGUI_DEFINE_ENUMS_AND_STRUCTS

#ifndef CIMGUI_DEFINE_ENUMS_AND_STRUCTS
typedef ImNodes::CanvasState CanvasState;
typedef ImNodes::CanvasState::CanvasStyle CanvasStyle;
typedef ImNodes::Ez::SlotInfo SlotInfo;
typedef ImNodes::_CanvasStateImpl _CanvasStateImpl;
typedef ImNodes::StyleColor StyleColor;
#endif //CIMGUI_DEFINE_ENUMS_AND_STRUCTS
CIMGUI_API CanvasState* CanvasState_CanvasState(void);
CIMGUI_API void CanvasState_destroy(CanvasState* self);
CIMGUI_API void ImNodes_BeginCanvas(CanvasState* canvas);
CIMGUI_API void ImNodes_EndCanvas(void);
CIMGUI_API bool ImNodes_BeginNode(void* node_id,ImVec2* pos,bool* selected);
CIMGUI_API void ImNodes_EndNode(void);
CIMGUI_API void ImNodes_AutoPositionNode(void* node_id);
CIMGUI_API bool ImNodes_GetNewConnection(void** input_node,const char** input_slot_title,void** output_node,const char** output_slot_title);
CIMGUI_API bool ImNodes_GetPendingConnection(void** node_id,const char** slot_title,int* slot_kind);
CIMGUI_API bool ImNodes_Connection(void* input_node,const char* input_slot,void* output_node,const char* output_slot);
CIMGUI_API CanvasState* ImNodes_GetCurrentCanvas(void);
CIMGUI_API int ImNodes_InputSlotKind(int kind);
CIMGUI_API int ImNodes_OutputSlotKind(int kind);
CIMGUI_API bool ImNodes_IsInputSlotKind(int kind);
CIMGUI_API bool ImNodes_IsOutputSlotKind(int kind);
CIMGUI_API bool ImNodes_BeginSlot(const char* title,int kind);
CIMGUI_API bool ImNodes_BeginInputSlot(const char* title,int kind);
CIMGUI_API bool ImNodes_BeginOutputSlot(const char* title,int kind);
CIMGUI_API void ImNodes_EndSlot(void);
CIMGUI_API bool ImNodes_IsSlotCurveHovered(void);
CIMGUI_API bool ImNodes_IsConnectingCompatibleSlot(void);
CIMGUI_API bool ImNodes_Ez_BeginNode(void* node_id,const char* title,ImVec2* pos,bool* selected);
CIMGUI_API void ImNodes_Ez_EndNode(void);
CIMGUI_API void ImNodes_Ez_InputSlots(const SlotInfo* slots,int snum);
CIMGUI_API void ImNodes_Ez_OutputSlots(const SlotInfo* slots,int snum);



#endif //CIMNODESR_INCLUDED




