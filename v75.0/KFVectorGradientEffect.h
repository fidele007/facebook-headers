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

@class NSString, KFVectorAnimation;

@interface KFVectorGradientEffect : NSObject <NSCopying, NSCoding> {

	NSString* _gradientTypeString;
	KFVectorAnimation* _colorStart;
	KFVectorAnimation* _colorEnd;
	KFVectorAnimation* _rampStart;
	KFVectorAnimation* _rampEnd;

}

@property (nonatomic,copy,readonly) NSString * gradientTypeString;               //@synthesize gradientTypeString=_gradientTypeString - In the implementation block
@property (nonatomic,copy,readonly) KFVectorAnimation * colorStart;              //@synthesize colorStart=_colorStart - In the implementation block
@property (nonatomic,copy,readonly) KFVectorAnimation * colorEnd;                //@synthesize colorEnd=_colorEnd - In the implementation block
@property (nonatomic,copy,readonly) KFVectorAnimation * rampStart;               //@synthesize rampStart=_rampStart - In the implementation block
@property (nonatomic,copy,readonly) KFVectorAnimation * rampEnd;                 //@synthesize rampEnd=_rampEnd - In the implementation block
-(id)initWithGradientTypeString:(id)arg1 colorStart:(id)arg2 colorEnd:(id)arg3 rampStart:(id)arg4 rampEnd:(id)arg5 ;
-(NSString *)gradientTypeString;
-(KFVectorAnimation *)colorStart;
-(KFVectorAnimation *)colorEnd;
-(KFVectorAnimation *)rampStart;
-(KFVectorAnimation *)rampEnd;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

