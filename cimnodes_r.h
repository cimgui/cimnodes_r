//This file is automatically generated by generator.lua from https://github.com/cimgui/cimnodes_r
//based on ImNodes.h file version XXX from https://github.com/rokups/ImNodes
#ifndef CIMNODESR_INCLUDED
#define CIMNODESR_INCLUDED

#include "cimgui.h"

#ifdef CIMGUI_DEFINE_ENUMS_AND_STRUCTS

typedef struct _CanvasStateImpl _CanvasStateImpl;
typedef struct Context Context;
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
struct _CanvasStateImpl;
typedef struct CanvasState CanvasState;
struct CanvasStyle
{
        float CurveThickness;
        float ConnectionIndent;
        float GridSpacing;
        float CurveStrength;
        float NodeRounding;
        ImVec2 NodeSpacing;
};
typedef struct CanvasStyle CanvasStyle;

struct CanvasState
{
    float Zoom;
    ImVec2 Offset;
    ImColor Colors[ColMax];
    CanvasStyle Style;
    _CanvasStateImpl* _Impl;
};
typedef struct CanvasStyle CanvasStyle;
typedef enum {
    ImNodesStyleVar_GridSpacing_r,
    ImNodesStyleVar_CurveThickness,
    ImNodesStyleVar_CurveStrength,
    ImNodesStyleVar_SlotRadius,
    ImNodesStyleVar_NodeRounding,
    ImNodesStyleVar_NodeSpacing,
    ImNodesStyleVar_ItemSpacing,
    ImNodesStyleVar_COUNT_r,
}ImNodesStyleVar;
typedef enum {
    ImNodesStyleCol_GridLines,
    ImNodesStyleCol_NodeBodyBg,
    ImNodesStyleCol_NodeBodyBgHovered,
    ImNodesStyleCol_NodeBodyBgActive,
    ImNodesStyleCol_NodeBorder,
    ImNodesStyleCol_Connection,
    ImNodesStyleCol_ConnectionActive,
    ImNodesStyleCol_SelectBg,
    ImNodesStyleCol_SelectBorder,
    ImNodesStyleCol_NodeTitleBarBg,
    ImNodesStyleCol_NodeTitleBarBgHovered,
    ImNodesStyleCol_NodeTitleBarBgActive,
    ImNodesStyleCol_COUNT,
}ImNodesStyleCol;
typedef struct SlotInfo SlotInfo;
struct SlotInfo
{
    const char* title;
    int kind;
};
typedef struct StyleVars StyleVars;
struct StyleVars
{
    float SlotRadius;
    ImVec2 ItemSpacing;
struct 
{
        ImVec4 NodeBodyBg;
        ImVec4 NodeBodyBgHovered;
        ImVec4 NodeBodyBgActive;
        ImVec4 NodeBorder;
        ImVec4 NodeTitleBarBg;
        ImVec4 NodeTitleBarBgHovered;
        ImVec4 NodeTitleBarBgActive;
} Colors;
};
struct Context;
#else
#endif // CIMGUI_DEFINE_ENUMS_AND_STRUCTS

#ifndef CIMGUI_DEFINE_ENUMS_AND_STRUCTS
typedef ImNodes::CanvasState CanvasState;
typedef struct ImNodes::CanvasState::CanvasStyle CanvasStyle;
typedef ImNodes::Ez::Context Context;
typedef ImNodes::Ez::SlotInfo SlotInfo;
typedef ImNodes::Ez::StyleVars StyleVars;
typedef ImNodes::_CanvasStateImpl _CanvasStateImpl;
typedef ImNodes::StyleColor StyleColor;
#endif //CIMGUI_DEFINE_ENUMS_AND_STRUCTS
CIMGUI_API CanvasState* CanvasState_CanvasState(void);
CIMGUI_API void CanvasState_destroy(CanvasState* self);
CIMGUI_API void ImNodes_BeginCanvas(CanvasState* canvas);
CIMGUI_API void ImNodes_EndCanvas(void);
CIMGUI_API bool ImNodes_BeginNode(void* node_id,ImVec2* pos,bool* selected);
CIMGUI_API void ImNodes_EndNode(void);
CIMGUI_API bool ImNodes_IsNodeHovered(void);
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
CIMGUI_API Context* ImNodes_Ez_CreateContext(void);
CIMGUI_API void ImNodes_Ez_FreeContext(Context* ctx);
CIMGUI_API void ImNodes_Ez_SetContext(Context* ctx);
CIMGUI_API CanvasState* ImNodes_Ez_GetState(void);
CIMGUI_API void ImNodes_Ez_BeginCanvas(void);
CIMGUI_API void ImNodes_Ez_EndCanvas(void);
CIMGUI_API bool ImNodes_Ez_BeginNode(void* node_id,const char* title,ImVec2* pos,bool* selected);
CIMGUI_API void ImNodes_Ez_EndNode(void);
CIMGUI_API void ImNodes_Ez_InputSlots(const SlotInfo* slots,int snum);
CIMGUI_API void ImNodes_Ez_OutputSlots(const SlotInfo* slots,int snum);
CIMGUI_API bool ImNodes_Ez_Connection(void* input_node,const char* input_slot,void* output_node,const char* output_slot);
CIMGUI_API void ImNodes_Ez_PushStyleVar_Float(ImNodesStyleVar idx,float val);
CIMGUI_API void ImNodes_Ez_PushStyleVar_Vec2(ImNodesStyleVar idx,const ImVec2 val);
CIMGUI_API void ImNodes_Ez_PopStyleVar(int count);
CIMGUI_API void ImNodes_Ez_PushStyleColor_U32(ImNodesStyleCol idx,ImU32 col);
CIMGUI_API void ImNodes_Ez_PushStyleColor_Vec4(ImNodesStyleCol idx,const ImVec4 col);
CIMGUI_API void ImNodes_Ez_PopStyleColor(int count);



#endif //CIMNODESR_INCLUDED




