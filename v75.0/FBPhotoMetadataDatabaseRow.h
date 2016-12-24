/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSData;

@interface FBPhotoMetadataDatabaseRow : FBValueObject <NSCopying, NSCoding> {

	BOOL _summaryUseDouble;
	NSString* _objectIdentifier;
	unsigned long long _propertyType;
	unsigned long long _summaryInteger;
	double _summaryDouble;
	NSData* _binaryData;

}

@property (nonatomic,copy,readonly) NSString * objectIdentifier;               //@synthesize objectIdentifier=_objectIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long propertyType;                //@synthesize propertyType=_propertyType - In the implementation block
@property (nonatomic,readonly) BOOL summaryUseDouble;                          //@synthesize summaryUseDouble=_summaryUseDouble - In the implementation block
@property (nonatomic,readonly) unsigned long long summaryInteger;              //@synthesize summaryInteger=_summaryInteger - In the implementation block
@property (nonatomic,readonly) double summaryDouble;                           //@synthesize summaryDouble=_summaryDouble - In the implementation block
@property (nonatomic,copy,readonly) NSData * binaryData;                       //@synthesize binaryData=_binaryData - In the implementation block
-(BOOL)summaryUseDouble;
-(double)summaryDouble;
-(unsigned long long)summaryInteger;
-(NSData *)binaryData;
-(id)initWithObjectIdentifier:(id)arg1 propertyType:(unsigned long long)arg2 summaryUseDouble:(BOOL)arg3 summaryInteger:(unsigned long long)arg4 summaryDouble:(double)arg5 binaryData:(id)arg6 ;
-(unsigned long long)propertyType;
-(NSString *)objectIdentifier;
@end

