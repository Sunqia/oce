// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_SelectDeduct_HeaderFile
#define _IFSelect_SelectDeduct_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IFSelect_SelectDeduct_HeaderFile
#include <Handle_IFSelect_SelectDeduct.hxx>
#endif

#ifndef _Handle_IFSelect_Selection_HeaderFile
#include <Handle_IFSelect_Selection.hxx>
#endif
#ifndef _Handle_IFSelect_SelectPointed_HeaderFile
#include <Handle_IFSelect_SelectPointed.hxx>
#endif
#ifndef _IFSelect_Selection_HeaderFile
#include <IFSelect_Selection.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class IFSelect_Selection;
class IFSelect_SelectPointed;
class Interface_InterfaceError;
class Interface_EntityIterator;
class Interface_Graph;
class IFSelect_SelectionIterator;


//! A SelectDeduct determines a list of Entities from an Input <br>
//!           Selection, by a computation : Output list is not obliged to be <br>
//!           a sub-list of Input list <br>
//!           (for more specific, see SelectExtract for filtered sub-lists, <br>
//!            and SelectExplore for recurcive exploration) <br>
//! <br>
//!           A SelectDeduct may use an alternate input for one shot <br>
//!           This allows to use an already existing definition, by <br>
//!           overloading the input selection by an alternate list, <br>
//!           already defined, for one use : <br>
//!           If this alternate list is set, InputResult queries it instead <br>
//!           of calling the input selection, then clears it immediately <br>
class IFSelect_SelectDeduct : public IFSelect_Selection {

public:

  //! Defines or Changes the Input Selection <br>
  Standard_EXPORT     void SetInput(const Handle(IFSelect_Selection)& sel) ;
  //! Returns the Input Selection <br>
  Standard_EXPORT     Handle_IFSelect_Selection Input() const;
  //! Returns True if the Input Selection is defined, False else <br>
  Standard_EXPORT     Standard_Boolean HasInput() const;
  //! Tells if an Alternate List has been set, i.e. : the Alternate <br>
//!           Definition is present and set <br>
  Standard_EXPORT     Standard_Boolean HasAlternate() const;
  //! Returns the Alternate Definition <br>
//!           It is returned modifiable, hence an already defined <br>
//!           SelectPointed can be used <br>
//!           But if it was not yet defined, it is created the first time <br>
//! <br>
//!           It is exploited by InputResult <br>
  Standard_EXPORT     Handle_IFSelect_SelectPointed& Alternate() ;
  //! Returns the Result determined by Input Selection, as Unique <br>
//!           if Input Selection is not defined, returns an empty list. <br>
//! <br>
//!           If Alternate is set, InputResult takes its definition instead <br>
//!           of calling the Input Selection, then clears it <br>
  Standard_EXPORT     Interface_EntityIterator InputResult(const Interface_Graph& G) const;
  //! Puts in an Iterator the Selections from which "me" depends <br>
//!           This list contains one Selection : the InputSelection <br>
  Standard_EXPORT     void FillIterator(IFSelect_SelectionIterator& iter) const;




  DEFINE_STANDARD_RTTI(IFSelect_SelectDeduct)

protected:




private: 


Handle_IFSelect_Selection thesel;
Handle_IFSelect_SelectPointed thealt;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif