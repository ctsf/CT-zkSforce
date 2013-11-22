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

#import "ZKDescribeField.h"
#import "ZKDescribeSObject.h"
#import "ZKPicklistEntry.h"

@implementation ZKDescribeField

@synthesize sobject;

-(id)copyWithZone:(NSZone *)zone {
    zkElement *e = [[node copyWithZone:zone] autorelease];
    ZKDescribeField *c = [[ZKDescribeField alloc] initWithXmlElement:e];
    c.sobject = self.sobject;
    return c;
}

-(zkElement *)node {
	return node;
}

-(BOOL)isEqual:(id)anObject {
	if (![anObject isKindOfClass:[ZKDescribeField class]]) return NO;
	return [node isEqual:[anObject node]];
}

-(NSUInteger)hash {
	return [node hash];
}

-(BOOL)autoNumber {
    return [self boolean:@"autoNumber"];
}
			
-(NSInteger)byteLength {
    return [self integer:@"byteLength"];
}
			
-(BOOL)calculated {
    return [self boolean:@"calculated"];
}
			
-(NSString *)calculatedFormula {
    return [self string:@"calculatedFormula"];
}
			
-(BOOL)cascadeDelete {
    return [self boolean:@"cascadeDelete"];
}
			
-(BOOL)caseSensitive {
    return [self boolean:@"caseSensitive"];
}
			
-(NSString *)controllerName {
    return [self string:@"controllerName"];
}
			
-(BOOL)createable {
    return [self boolean:@"createable"];
}
			
-(BOOL)custom {
    return [self boolean:@"custom"];
}
			
-(NSString *)defaultValueFormula {
    return [self string:@"defaultValueFormula"];
}
			
-(BOOL)defaultedOnCreate {
    return [self boolean:@"defaultedOnCreate"];
}
			
-(BOOL)dependentPicklist {
    return [self boolean:@"dependentPicklist"];
}
			
-(BOOL)deprecatedAndHidden {
    return [self boolean:@"deprecatedAndHidden"];
}
			
-(NSInteger)digits {
    return [self integer:@"digits"];
}
			
-(BOOL)displayLocationInDecimal {
    return [self boolean:@"displayLocationInDecimal"];
}
			
-(BOOL)externalId {
    return [self boolean:@"externalId"];
}
			
-(BOOL)filterable {
    return [self boolean:@"filterable"];
}
			
-(BOOL)groupable {
    return [self boolean:@"groupable"];
}
			
-(BOOL)htmlFormatted {
    return [self boolean:@"htmlFormatted"];
}
			
-(BOOL)idLookup {
    return [self boolean:@"idLookup"];
}
			
-(NSString *)inlineHelpText {
    return [self string:@"inlineHelpText"];
}
			
-(NSString *)label {
    return [self string:@"label"];
}
			
-(NSInteger)length {
    return [self integer:@"length"];
}
			
-(NSString *)name {
    return [self string:@"name"];
}
			
-(BOOL)nameField {
    return [self boolean:@"nameField"];
}
			
-(BOOL)namePointing {
    return [self boolean:@"namePointing"];
}
			
-(BOOL)nillable {
    return [self boolean:@"nillable"];
}
			
-(BOOL)permissionable {
    return [self boolean:@"permissionable"];
}
			
-(NSArray *)picklistValues {
    return [self complexTypeArrayFromElements:@"picklistValues" cls:[ZKPicklistEntry class]];
}
			
-(NSInteger)precision {
    return [self integer:@"precision"];
}
			
-(NSArray *)referenceTo {
    return [self strings:@"referenceTo"];
}
			
-(NSString *)relationshipName {
    return [self string:@"relationshipName"];
}
			
-(NSInteger)relationshipOrder {
    return [self integer:@"relationshipOrder"];
}
			
-(BOOL)restrictedDelete {
    return [self boolean:@"restrictedDelete"];
}
			
-(BOOL)restrictedPicklist {
    return [self boolean:@"restrictedPicklist"];
}
			
-(NSInteger)scale {
    return [self integer:@"scale"];
}
			
-(NSString *)soapType {
    return [self string:@"soapType"];
}
			
-(BOOL)sortable {
    return [self boolean:@"sortable"];
}
			
-(NSString *)type {
    return [self string:@"type"];
}
			
-(BOOL)unique {
    return [self boolean:@"unique"];
}
			
-(BOOL)updateable {
    return [self boolean:@"updateable"];
}
			
-(BOOL)writeRequiresMasterRead {
    return [self boolean:@"writeRequiresMasterRead"];
}
			
@end
