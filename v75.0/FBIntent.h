/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class FBIntentTarget, FBIntentSource, FBAnalyticsInfo;

@interface FBIntent : NSObject <NSCopying, NSMutableCopying> {

	FBIntentTarget* _target;
	FBIntentSource* _source;
	FBAnalyticsInfo* _analyticsInfo;

}

@property (nonatomic,readonly) FBIntentTarget * target;                      //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) FBIntentSource * source;                      //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) FBAnalyticsInfo * analyticsInfo;              //@synthesize analyticsInfo=_analyticsInfo - In the implementation block
+(id)intentWithTarget:(id)arg1 ;
+(id)intentWithTarget:(id)arg1 analyticsInfo:(id)arg2 ;
+(id)intentWithTarget:(id)arg1 source:(id)arg2 analyticsInfo:(id)arg3 ;
+(id)intentWithTarget:(id)arg1 source:(id)arg2 ;
+(id)canvas_intentForFullScreenEnabled:(BOOL)arg1 ;
-(FBAnalyticsInfo *)analyticsInfo;
-(id)description;
-(FBIntentSource *)source;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FBIntentTarget *)target;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end

