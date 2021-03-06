/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBEntityCardsAnalyticsLogger <NSObject>
@required
-(id)displaySurface;
-(id)analyticsUUID;
-(id)loggingParametersWithExtras:(id)arg1;
-(void)logAnalyticsForTapEventOnSurface:(id)arg1 targetType:(id)arg2 position:(unsigned long long)arg3 fbid:(id)arg4 isSelectedAfterTap:(BOOL)arg5 extras:(id)arg6;
-(void)logAnalyticsEvent:(id)arg1 parameters:(id)arg2;
-(void)perfSequenceStoppedForSequenceId:(id)arg1 result:(unsigned long long)arg2 parameters:(id)arg3;
-(id)perfSequenceStartedForEvent:(id)arg1 markersForCompletion:(id)arg2;
-(void)markSequenceStep:(id)arg1 withSequenceId:(id)arg2;
-(void)logAnalyticsForTapEventOnSurface:(id)arg1 targetType:(id)arg2 position:(unsigned long long)arg3 fbid:(id)arg4 isSelectedAfterTap:(BOOL)arg5 contextItemLoggingParam:(id)arg6 contextItemSurface:(id)arg7 openedItemLinkURL:(id)arg8 extras:(id)arg9;
-(void)logAnalyticsForImpressionOfContextItemType:(id)arg1 position:(unsigned long long)arg2 fbid:(id)arg3 contextItemLoggingParam:(id)arg4 contextItemSurface:(id)arg5;
-(void)perfEventStarted:(id)arg1 parameters:(id)arg2;
-(void)perfEventStopped:(id)arg1 result:(unsigned long long)arg2 parameters:(id)arg3;
-(void)logAnalyticsForEntityCardsDownloadWithFBID:(id)arg1 extras:(id)arg2;
-(id)sourceID;
-(id)instanceID;

@end

