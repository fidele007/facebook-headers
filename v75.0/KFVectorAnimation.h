/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray;

@interface KFVectorAnimation : NSObject <NSCopying, NSCoding> {

	NSString* _property;
	NSArray* _keyValues;
	NSArray* _timingCurves;
	CGPoint _anchor;

}

@property (nonatomic,copy,readonly) NSString * property;                 //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) CGPoint anchor;                           //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,copy,readonly) NSArray * keyValues;                 //@synthesize keyValues=_keyValues - In the implementation block
@property (nonatomic,copy,readonly) NSArray * timingCurves;              //@synthesize timingCurves=_timingCurves - In the implementation block
-(id)initWithProperty:(id)arg1 anchor:(CGPoint)arg2 keyValues:(id)arg3 timingCurves:(id)arg4 ;
-(NSArray *)timingCurves;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)anchor;
-(NSArray *)keyValues;
-(NSString *)property;
@end

