/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAnnouncerBase.h>
#import <Facebook/FBSerpTTILogEventListener.h>

@class NSString;

@interface FBSerpTTILogEventListenerAnnouncer : FBAnnouncerBase <FBSerpTTILogEventListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finishPerfLogging;
-(void)resultsDidStartFetchingClientResults;
-(void)resultsDidFinishFetchingClientResults:(BOOL)arg1 ;
-(void)resultsForTTIDidStartDownloadWithClientSessionID:(id)arg1 ;
-(void)resultsDidDownloadRegularResultsWithSessionID:(id)arg1 requestTracker:(id)arg2 requestStatus:(id)arg3 isEmpty:(BOOL)arg4 fromCache:(BOOL)arg5 ;
-(void)resultsDidFailWithError:(id)arg1 isIndependentRequest:(BOOL)arg2 ;
-(void)resultsDidDownloadIndependentResultsWithRequestStatus:(id)arg1 isEmpty:(BOOL)arg2 fromCache:(BOOL)arg3 ;
-(void)resultsForTTIDidRenderClientModulesWithRoles:(id)arg1 ;
-(void)resultsDidRender;
-(void)resultsDidCompleteTTISequenceWithVerticalToLog:(id)arg1 postSearchIntentLog:(id)arg2 edges:(id)arg3 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
