// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Units_SequenceNodeOfQtsSequence_HeaderFile
#define _Units_SequenceNodeOfQtsSequence_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Units_SequenceNodeOfQtsSequence.hxx>

#include <Handle_Units_Quantity.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_SeqNodePtr.hxx>
class Units_Quantity;
class Units_QtsSequence;



class Units_SequenceNodeOfQtsSequence : public TCollection_SeqNode
{

public:

  
    Units_SequenceNodeOfQtsSequence(const Handle(Units_Quantity)& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Handle(Units_Quantity)& Value()  const;




  DEFINE_STANDARD_RTTI(Units_SequenceNodeOfQtsSequence)

protected:




private: 


  Handle(Units_Quantity) myValue;


};

#define SeqItem Handle(Units_Quantity)
#define SeqItem_hxx <Units_Quantity.hxx>
#define TCollection_SequenceNode Units_SequenceNodeOfQtsSequence
#define TCollection_SequenceNode_hxx <Units_SequenceNodeOfQtsSequence.hxx>
#define Handle_TCollection_SequenceNode Handle_Units_SequenceNodeOfQtsSequence
#define TCollection_SequenceNode_Type_() Units_SequenceNodeOfQtsSequence_Type_()
#define TCollection_Sequence Units_QtsSequence
#define TCollection_Sequence_hxx <Units_QtsSequence.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _Units_SequenceNodeOfQtsSequence_HeaderFile
