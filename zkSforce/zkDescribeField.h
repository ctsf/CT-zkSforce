// Copyright (c) 2006,2012 Simon Fell
//
// Permission is hereby granted, free of charge, to any person obtaining a 
// copy of this software and associated documentation files (the "Software"), 
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense, 
// and/or sell copies of the Software, and to permit persons to whom the 
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included 
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS 
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN 
// THE SOFTWARE.
//

#import "zkXmlDeserializer.h"

@class ZKDescribeSObject;
/*
<complexType name="Field" xmlns="http://www.w3.org/2001/XMLSchema" xmlns:ens="urn:sobject.partner.soap.sforce.com" xmlns:tns="urn:partner.soap.sforce.com" xmlns:fns="urn:fault.partner.soap.sforce.com" xmlns:xsd="http://www.w3.org/2001/XMLSchema" xmlns:soap="http://schemas.xmlsoap.org/wsdl/soap/" xmlns="http://schemas.xmlsoap.org/wsdl/">
  <sequence>
    <element type="xsd:boolean" name="autoNumber"/>
    <element type="xsd:int" name="byteLength"/>
    <element type="xsd:boolean" name="calculated"/>
    <element minOccurs="0" type="xsd:string" name="calculatedFormula"/>
    <element minOccurs="0" type="xsd:boolean" name="cascadeDelete"/>
    <element type="xsd:boolean" name="caseSensitive"/>
    <element minOccurs="0" type="xsd:string" name="controllerName"/>
    <element type="xsd:boolean" name="createable"/>
    <element type="xsd:boolean" name="custom"/>
    <element minOccurs="0" type="xsd:string" name="defaultValueFormula"/>
    <element type="xsd:boolean" name="defaultedOnCreate"/>
    <element minOccurs="0" type="xsd:boolean" name="dependentPicklist"/>
    <element type="xsd:boolean" name="deprecatedAndHidden"/>
    <element type="xsd:int" name="digits"/>
    <element minOccurs="0" type="xsd:boolean" name="displayLocationInDecimal"/>
    <element minOccurs="0" type="xsd:boolean" name="externalId"/>
    <element type="xsd:boolean" name="filterable"/>
    <element type="xsd:boolean" name="groupable"/>
    <element minOccurs="0" type="xsd:boolean" name="htmlFormatted"/>
    <element type="xsd:boolean" name="idLookup"/>
    <element minOccurs="0" type="xsd:string" name="inlineHelpText"/>
    <element type="xsd:string" name="label"/>
    <element type="xsd:int" name="length"/>
    <element type="xsd:string" name="name"/>
    <element type="xsd:boolean" name="nameField"/>
    <element minOccurs="0" type="xsd:boolean" name="namePointing"/>
    <element type="xsd:boolean" name="nillable"/>
    <element type="xsd:boolean" name="permissionable"/>
    <element maxOccurs="unbounded" minOccurs="0" nillable="true" type="tns:PicklistEntry" name="picklistValues"/>
    <element type="xsd:int" name="precision"/>
    <element maxOccurs="unbounded" minOccurs="0" nillable="true" type="xsd:string" name="referenceTo"/>
    <element minOccurs="0" type="xsd:string" name="relationshipName"/>
    <element minOccurs="0" type="xsd:int" name="relationshipOrder"/>
    <element minOccurs="0" type="xsd:boolean" name="restrictedDelete"/>
    <element type="xsd:boolean" name="restrictedPicklist"/>
    <element type="xsd:int" name="scale"/>
    <element type="tns:soapType" name="soapType"/>
    <element minOccurs="0" type="xsd:boolean" name="sortable"/>
    <element type="tns:fieldType" name="type"/>
    <element type="xsd:boolean" name="unique"/>
    <element type="xsd:boolean" name="updateable"/>
    <element minOccurs="0" type="xsd:boolean" name="writeRequiresMasterRead"/>
  </sequence>
</complexType>
*/
@interface ZKDescribeField : ZKXmlDeserializer <NSCopying> {
	ZKDescribeSObject *sobject;
}
@property (assign) ZKDescribeSObject *sobject; // assign to stop a ref counting loop

@property (readonly) BOOL       autoNumber; 
@property (readonly) NSInteger  byteLength; 
@property (readonly) BOOL       calculated; 
@property (readonly) NSString  *calculatedFormula; 
@property (readonly) BOOL       cascadeDelete; 
@property (readonly) BOOL       caseSensitive; 
@property (readonly) NSString  *controllerName; 
@property (readonly) BOOL       createable; 
@property (readonly) BOOL       custom; 
@property (readonly) NSString  *defaultValueFormula; 
@property (readonly) BOOL       defaultedOnCreate; 
@property (readonly) BOOL       dependentPicklist; 
@property (readonly) BOOL       deprecatedAndHidden; 
@property (readonly) NSInteger  digits; 
@property (readonly) BOOL       displayLocationInDecimal; 
@property (readonly) BOOL       externalId; 
@property (readonly) BOOL       filterable; 
@property (readonly) BOOL       groupable; 
@property (readonly) BOOL       htmlFormatted; 
@property (readonly) BOOL       idLookup; 
@property (readonly) NSString  *inlineHelpText; 
@property (readonly) NSString  *label; 
@property (readonly) NSInteger  length; 
@property (readonly) NSString  *name; 
@property (readonly) BOOL       nameField; 
@property (readonly) BOOL       namePointing; 
@property (readonly) BOOL       nillable; 
@property (readonly) BOOL       permissionable; 
@property (readonly) NSArray   *picklistValues;  // of ZKPicklistEntry
@property (readonly) NSInteger  precision; 
@property (readonly) NSArray   *referenceTo;  // of NSString
@property (readonly) NSString  *relationshipName; 
@property (readonly) NSInteger  relationshipOrder; 
@property (readonly) BOOL       restrictedDelete; 
@property (readonly) BOOL       restrictedPicklist; 
@property (readonly) NSInteger  scale; 
@property (readonly) NSString  *soapType; 
@property (readonly) BOOL       sortable; 
@property (readonly) NSString  *type; 
@property (readonly) BOOL       unique; 
@property (readonly) BOOL       updateable; 
@property (readonly) BOOL       writeRequiresMasterRead; 
@end
