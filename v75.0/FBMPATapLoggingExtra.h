/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, FBAnalyticsInfo, FBIntentTarget, FBIntentSource;

@interface FBMPATapLoggingExtra : NSObject {

	NSNumber* _index;
	FBAnalyticsInfo* _analyticsInfo;
	FBIntentTarget* _target;
	FBIntentSource* _source;

}

@property (nonatomic,readonly) NSNumber * index;                             //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) FBAnalyticsInfo * analyticsInfo;              //@synthesize analyticsInfo=_analyticsInfo - In the implementation block
@property (nonatomic,readonly) FBIntentTarget * target;                      //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) FBIntentSource * source;                      //@synthesize source=_source - In the implementation block
-(FBAnalyticsInfo *)analyticsInfo;
-(id)initWithIndex:(id)arg1 analyticsInfo:(id)arg2 target:(id)arg3 source:(id)arg4 ;
-(FBIntentSource *)source;
-(FBIntentTarget *)target;
-(NSNumber *)index;
@end

