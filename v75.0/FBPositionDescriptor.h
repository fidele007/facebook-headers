/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBOffset;

@interface FBPositionDescriptor : NSObject <NSCopying> {

	NSString* _anchor;
	unsigned long long _comparator;
	NSString* _dependentElementID;
	NSString* _dependentAnchor;
	FBOffset* _offset;

}

@property (nonatomic,copy) NSString * anchor;                            //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) unsigned long long comparator;              //@synthesize comparator=_comparator - In the implementation block
@property (nonatomic,copy) NSString * dependentElementID;                //@synthesize dependentElementID=_dependentElementID - In the implementation block
@property (nonatomic,copy) NSString * dependentAnchor;                   //@synthesize dependentAnchor=_dependentAnchor - In the implementation block
@property (nonatomic,copy) FBOffset * offset;                            //@synthesize offset=_offset - In the implementation block
-(BOOL)hasDependency;
-(NSString *)dependentElementID;
-(NSString *)dependentAnchor;
-(void)setDependentElementID:(NSString *)arg1 ;
-(void)setDependentAnchor:(NSString *)arg1 ;
-(unsigned long long)comparator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOffset:(FBOffset *)arg1 ;
-(FBOffset *)offset;
-(NSString *)anchor;
-(void)setAnchor:(NSString *)arg1 ;
-(void)setComparator:(unsigned long long)arg1 ;
@end

