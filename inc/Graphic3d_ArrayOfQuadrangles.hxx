// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_ArrayOfQuadrangles_HeaderFile
#define _Graphic3d_ArrayOfQuadrangles_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Graphic3d_ArrayOfQuadrangles_HeaderFile
#include <Handle_Graphic3d_ArrayOfQuadrangles.hxx>
#endif

#ifndef _Graphic3d_ArrayOfPrimitives_HeaderFile
#include <Graphic3d_ArrayOfPrimitives.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_OutOfRange;



class Graphic3d_ArrayOfQuadrangles : public Graphic3d_ArrayOfPrimitives {

public:

  //! Creates an array of quadrangles, <br>
//! a quadrangle can be filled as: <br>
//! 1) creating a set of quadrangles defined with his vertexs. <br>
//!    i.e: <br>
//!    myArray = Graphic3d_ArrayOfQuadrangles(8) <br>
//!    myArray->AddVertex(x1,y1,z1) <br>
//!	.... <br>
//!    myArray->AddVertex(x8,y8,z8) <br>
//! 3) creating a set of indexed quadrangles defined with his vertex <br>
//!    ans edges. <br>
//!    i.e: <br>
//!    myArray = Graphic3d_ArrayOfQuadrangles(6,8) <br>
//!    myArray->AddVertex(x1,y1,z1) <br>
//!	.... <br>
//!    myArray->AddVertex(x6,y6,z6) <br>
//!    myArray->AddEdge(1) <br>
//!    myArray->AddEdge(2) <br>
//!    myArray->AddEdge(3) <br>
//!    myArray->AddEdge(4) <br>
//!    myArray->AddEdge(3) <br>
//!    myArray->AddEdge(4) <br>
//!    myArray->AddEdge(5) <br>
//!    myArray->AddEdge(6) <br>
//! <br>
//! <maxVertexs> defined the maximun allowed vertex number in the array. <br>
//! <maxEdges> defined the maximun allowed edge number in the array. <br>
//!  Warning: <br>
//! When <hasVNormals> is TRUE , you must use one of <br>
//!	AddVertex(Point,Normal) <br>
//!  or  AddVertex(Point,Normal,Color) <br>
//!  or  AddVertex(Point,Normal,Texel) methods. <br>
//! When <hasVColors> is TRUE , you must use one of <br>
//!	AddVertex(Point,Color) <br>
//!  or  AddVertex(Point,Normal,Color) methods. <br>
//! When <hasTexels> is TRUE , you must use one of <br>
//!	AddVertex(Point,Texel) <br>
//!  or  AddVertex(Point,Normal,Texel) methods. <br>
//! When <hasEdgeInfos> is TRUE , <maxEdges> must be > 0 and <br>
//!	you must use the <br>
//!	AddEdge(number,visibillity) method. <br>
//!  Warning: <br>
//! the user is responsible about the orientation of the quadrangle <br>
//! depending of the order of the created vertex or edges and this <br>
//! orientation must be coherent with the vertex normal optionnaly <br>
//! given at each vertex (See the Orientate() methods). <br>
  Standard_EXPORT   Graphic3d_ArrayOfQuadrangles(const Standard_Integer maxVertexs,const Standard_Integer maxEdges = 0,const Standard_Boolean hasVNormals = Standard_False,const Standard_Boolean hasVColors = Standard_False,const Standard_Boolean hasTexels = Standard_False,const Standard_Boolean hasEdgeInfos = Standard_False);




  DEFINE_STANDARD_RTTI(Graphic3d_ArrayOfQuadrangles)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif