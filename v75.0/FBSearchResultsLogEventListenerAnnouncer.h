/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAnnouncerBase.h>
#import <Facebook/FBSearchResultsLogEventListener.h>

@class NSString;

@interface FBSearchResultsLogEventListenerAnnouncer : FBAnnouncerBase <FBSearchResultsLogEventListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resultsWithContext:(id)arg1 logClickOnNode:(id)arg2 atIndex:(long long)arg3 extraInfo:(id)arg4 ;
-(void)resultsWithSessionID:(id)arg1 clientSessionID:(id)arg2 didReceiveInlineAction:(unsigned long long)arg3 onEntity:(id)arg4 resultType:(unsigned long long)arg5 ;
-(void)searchResultsActivityListener_moduleDidHScrollWithSessionID:(id)arg1 clientSessionID:(id)arg2 moduleEdge:(id)arg3 moduleEdgeIndex:(unsigned long long)arg4 ;
-(void)searchResultsActivityListener_didYieldSearchImpressionWithSerpConfig:(id)arg1 sessionID:(id)arg2 source:(id)arg3 verticalToLog:(id)arg4 postSearchIntentLog:(id)arg5 appliedFilters:(id)arg6 queryRoleToLog:(id)arg7 loggingUnitId:(id)arg8 ;
-(void)resultsDidTriggerEmptySERPWithSessionID:(id)arg1 serpConfig:(id)arg2 ;
-(void)resultsWithSessionID:(id)arg1 clientSessionID:(id)arg2 didYieldModuleImpressionWithModuleEdge:(id)arg3 moduleEdgeIndex:(unsigned long long)arg4 ;
-(void)resultsWithSessionID:(id)arg1 clientSessionID:(id)arg2 didYieldClientModuleImpressionWithModuleRole:(id)arg3 moduleEdgeIndex:(unsigned long long)arg4 resultsCount:(unsigned long long)arg5 extras:(id)arg6 ;
-(void)resultsWithSessionID:(id)arg1 clientSessionID:(id)arg2 resultType:(unsigned long long)arg3 didTapOnResultEdge:(id)arg4 resultIndex:(long long)arg5 containerModuleEdge:(id)arg6 moduleIndex:(long long)arg7 extras:(id)arg8 ;
-(void)resultsWithSessionID:(id)arg1 clientSessionID:(id)arg2 resultType:(unsigned long long)arg3 logTapSeeMoreOnModuleEdge:(id)arg4 inHeader:(BOOL)arg5 moduleIndex:(long long)arg6 ;
-(void)resultsWithSessionID:(id)arg1 clientSessionID:(id)arg2 resultType:(unsigned long long)arg3 didTapMapOnModuleEdge:(id)arg4 moduleIndex:(long long)arg5 ;
-(void)resultsWithSessionID:(id)arg1 clientSessionID:(id)arg2 resultType:(unsigned long long)arg3 didTapModuleEdge:(id)arg4 moduleIndex:(long long)arg5 extras:(id)arg6 ;
-(void)resultsWithSessionID:(id)arg1 clientSessionID:(id)arg2 resultType:(unsigned long long)arg3 didGenerateResultsVPVWithExtra:(id)arg4 ;
-(void)resultsWithSessionID:(id)arg1 clientSessionID:(id)arg2 didReceiveInlineAction:(unsigned long long)arg3 onEntity:(id)arg4 resultType:(unsigned long long)arg5 resultIndex:(long long)arg6 containerModuleEdge:(id)arg7 moduleIndex:(long long)arg8 ;
-(void)resultsDidTapSeeMorePostsWithSessionID:(id)arg1 clientSessionID:(id)arg2 seeMoreQuery:(id)arg3 ;
-(void)resultsWithClientSessionID:(id)arg1 numMatchedPosts:(unsigned long long)arg2 numFeedPostsInMemory:(unsigned long long)arg3 tokenMatchingTime:(unsigned long long)arg4 ;
-(void)logModuleSizeData:(id)arg1 sessionID:(id)arg2 clientSessionID:(id)arg3 ;
-(void)resultsWithSessionID:(id)arg1 clientSessionID:(id)arg2 didDisplaySurveyWithId:(id)arg3 integrationPointId:(id)arg4 ;
-(void)filtersDidReceiveEventOfType:(id)arg1 forResultsWithSessionID:(id)arg2 clientSessionID:(id)arg3 resultType:(unsigned long long)arg4 appliedFilters:(id)arg5 ;
-(void)resultsWithSessionID:(id)arg1 clientSessionID:(id)arg2 didYieldSpellerModuleImpressionWithSpellerModel:(id)arg3 ;
-(void)resultsWithSessionID:(id)arg1 clientSessionID:(id)arg2 didReceiveTapOnSpellerModuleWithSpellerModel:(id)arg3 ;
-(void)logClientModulePayloadForModuleEdge:(id)arg1 ;
-(void)resultsWithSessionID:(id)arg1 clientSessionID:(id)arg2 didLoadCount:(unsigned long long)arg3 isHeadRequest:(BOOL)arg4 resultType:(unsigned long long)arg5 fromCache:(BOOL)arg6 ;
-(void)resultsWithResultType:(unsigned long long)arg1 sessionID:(id)arg2 clientSessionID:(id)arg3 didFailWithError:(id)arg4 inContextModule:(BOOL)arg5 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

