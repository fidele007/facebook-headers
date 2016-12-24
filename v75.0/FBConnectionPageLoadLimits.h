/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface FBConnectionPageLoadLimits : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSArray* _uniformLoadLimits_loadLimit;
	NSArray* _distinctLoadLimits_headLoadLimits;
	NSArray* _distinctLoadLimits_tailLoadLimits;

}
+(id)uniformLoadLimitsWithLoadLimit:(id)arg1 ;
+(id)distinctLoadLimitsWithHeadLoadLimits:(id)arg1 tailLoadLimits:(id)arg2 ;
-(void)matchUniformLoadLimits:(/*^block*/id)arg1 distinctLoadLimits:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

