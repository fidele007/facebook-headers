/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:04 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSString, NSMutableArray, NSArray, NSDictionary;

@interface EGODatabaseResult : NSObject <NSFastEnumeration> {

	int errorCode;
	NSString* errorMessage;
	NSMutableArray* rows;
	NSArray* columnNames;
	NSDictionary* columnNameToIndexMap;

}

@property (assign,nonatomic) int errorCode; 
@property (nonatomic,copy) NSString * errorMessage; 
@property (readonly) NSMutableArray * rows; 
@property (readonly) NSArray * columnNames; 
-(int)columnIndexForName:(id)arg1 ;
-(id)initWithColumnNames:(id)arg1 ;
-(void)generateNameToIndexMap;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_FB467*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(unsigned long long)count;
-(NSMutableArray *)rows;
-(void)setErrorCode:(int)arg1 ;
-(int)errorCode;
-(void)addRow:(id)arg1 ;
-(NSArray *)columnNames;
-(void)setErrorMessage:(NSString *)arg1 ;
-(NSString *)errorMessage;
-(id)rowAtIndex:(long long)arg1 ;
@end
