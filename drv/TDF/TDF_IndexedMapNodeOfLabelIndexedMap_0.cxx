// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <TDF_IndexedMapNodeOfLabelIndexedMap.hxx>

#include <Standard_Type.hxx>

#include <TDF_Label.hxx>
#include <TDF_LabelMapHasher.hxx>
#include <TDF_LabelIndexedMap.hxx>

 


IMPLEMENT_STANDARD_TYPE(TDF_IndexedMapNodeOfLabelIndexedMap)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(TDF_IndexedMapNodeOfLabelIndexedMap)


IMPLEMENT_DOWNCAST(TDF_IndexedMapNodeOfLabelIndexedMap,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(TDF_IndexedMapNodeOfLabelIndexedMap)


#define TheKey TDF_Label
#define TheKey_hxx <TDF_Label.hxx>
#define Hasher TDF_LabelMapHasher
#define Hasher_hxx <TDF_LabelMapHasher.hxx>
#define TCollection_IndexedMapNode TDF_IndexedMapNodeOfLabelIndexedMap
#define TCollection_IndexedMapNode_hxx <TDF_IndexedMapNodeOfLabelIndexedMap.hxx>
#define Handle_TCollection_IndexedMapNode Handle_TDF_IndexedMapNodeOfLabelIndexedMap
#define TCollection_IndexedMapNode_Type_() TDF_IndexedMapNodeOfLabelIndexedMap_Type_()
#define TCollection_IndexedMap TDF_LabelIndexedMap
#define TCollection_IndexedMap_hxx <TDF_LabelIndexedMap.hxx>
#include <TCollection_IndexedMapNode.gxx>

