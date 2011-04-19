// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTColStd_ListNodeOfListOfListOfShape_HeaderFile
#define _BOPTColStd_ListNodeOfListOfListOfShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BOPTColStd_ListNodeOfListOfListOfShape_HeaderFile
#include <Handle_BOPTColStd_ListNodeOfListOfListOfShape.hxx>
#endif

#ifndef _TopTools_ListOfShape_HeaderFile
#include <TopTools_ListOfShape.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class TopTools_ListOfShape;
class BOPTColStd_ListOfListOfShape;
class BOPTColStd_ListIteratorOfListOfListOfShape;



class BOPTColStd_ListNodeOfListOfListOfShape : public TCollection_MapNode {

public:

  
      BOPTColStd_ListNodeOfListOfListOfShape(const TopTools_ListOfShape& I,const TCollection_MapNodePtr& n);
  
        TopTools_ListOfShape& Value() const;




  DEFINE_STANDARD_RTTI(BOPTColStd_ListNodeOfListOfListOfShape)

protected:




private: 


TopTools_ListOfShape myValue;


};

#define Item TopTools_ListOfShape
#define Item_hxx <TopTools_ListOfShape.hxx>
#define TCollection_ListNode BOPTColStd_ListNodeOfListOfListOfShape
#define TCollection_ListNode_hxx <BOPTColStd_ListNodeOfListOfListOfShape.hxx>
#define TCollection_ListIterator BOPTColStd_ListIteratorOfListOfListOfShape
#define TCollection_ListIterator_hxx <BOPTColStd_ListIteratorOfListOfListOfShape.hxx>
#define Handle_TCollection_ListNode Handle_BOPTColStd_ListNodeOfListOfListOfShape
#define TCollection_ListNode_Type_() BOPTColStd_ListNodeOfListOfListOfShape_Type_()
#define TCollection_List BOPTColStd_ListOfListOfShape
#define TCollection_List_hxx <BOPTColStd_ListOfListOfShape.hxx>

#include <TCollection_ListNode.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif