/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface FBCanvasLoggingState : NSObject {

	NSMutableDictionary* _elementLoggers;
	NSDictionary* _analyticsInfo;

}

@property (nonatomic,readonly) NSMutableDictionary * elementLoggers;              //@synthesize elementLoggers=_elementLoggers - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * analyticsInfo;                 //@synthesize analyticsInfo=_analyticsInfo - In the implementation block
+(id)stateWithAnalyticsInfo:(id)arg1 ;
-(NSDictionary *)analyticsInfo;
-(NSMutableDictionary *)elementLoggers;
@end

