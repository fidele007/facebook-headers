/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSDictionary, NSMapTable, NSArray, NSString;

@interface FBEntityCardsAnalytics : NSObject {

	FBUserSession* _session;
	NSDictionary* _loggingParams;
	NSMapTable* _moduleLoggers;
	NSArray* _allPerfEvents;
	NSString* _displaySurface;

}

@property (nonatomic,copy,readonly) NSString * instanceID; 
@property (nonatomic,copy,readonly) NSString * displaySurface; 
@property (nonatomic,copy,readonly) NSString * sourceID; 
@property (nonatomic,copy,readonly) NSString * analyticsUUID; 
+(id)_tagFromLoggingParams:(id)arg1 ;
+(id)analyticsModuleForFrameRatePerfForDisplaySurface:(id)arg1 ;
-(NSString *)displaySurface;
-(NSString *)analyticsUUID;
-(id)loggerForModule:(id)arg1 ;
-(id)initWithSession:(id)arg1 displaySurface:(id)arg2 loggingParameters:(id)arg3 ;
-(void)_cancelAllPerfEvents;
-(void)_processPerfEvents:(id)arg1 isStartEvent:(BOOL)arg2 result:(unsigned long long)arg3 params:(id)arg4 ;
-(void)_logAnalyticsEvent:(id)arg1 moduleName:(id)arg2 params:(id)arg3 ;
-(id)_mergeLoggingParameters:(id)arg1 ;
-(NSString *)sourceID;
-(NSString *)instanceID;
@end

