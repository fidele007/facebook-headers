/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBSearchResultsActivityListenerAnnouncer, FBSearchResultsLogEventListenerAnnouncer, FBSearchResultsReachingEndLoadingEventListenerAnnouncer, FBSearchResultsMultiTabNavigationListenerAnnouncer, FBSearchResultsStoryLoggingManager, NSString, FBSerpConfig, NSDictionary, CLLocation;


@protocol FBSearchResultsContextProtocol <FBCommonComponentContextProtocol>
@property (nonatomic,readonly) FBSearchResultsActivityListenerAnnouncer * resultsActivityAnnouncer; 
@property (nonatomic,readonly) FBSearchResultsLogEventListenerAnnouncer * logAnnouncer; 
@property (nonatomic,readonly) FBSearchResultsReachingEndLoadingEventListenerAnnouncer * reachingEndLoadingEventAnnouncer; 
@property (nonatomic,readonly) FBSearchResultsMultiTabNavigationListenerAnnouncer * multiTabNavigationAnnouncer; 
@property (nonatomic,readonly) FBSearchResultsStoryLoggingManager * storyLoggingManager; 
@property (nonatomic,copy,readonly) NSString * resultsSessionID; 
@property (nonatomic,copy,readonly) NSString * verticalToLog; 
@property (nonatomic,readonly) FBSerpConfig * serpConfig; 
@property (nonatomic,copy,readonly) NSDictionary * optionalDependencies; 
@property (nonatomic,copy,readonly) CLLocation * userLocation; 
@property (nonatomic,readonly) BOOL isGrid; 
@required
-(NSString *)resultsSessionID;
-(NSString *)verticalToLog;
-(NSDictionary *)optionalDependencies;
-(FBSerpConfig *)serpConfig;
-(FBSearchResultsReachingEndLoadingEventListenerAnnouncer *)reachingEndLoadingEventAnnouncer;
-(FBSearchResultsMultiTabNavigationListenerAnnouncer *)multiTabNavigationAnnouncer;
-(FBSearchResultsLogEventListenerAnnouncer *)logAnnouncer;
-(FBSearchResultsActivityListenerAnnouncer *)resultsActivityAnnouncer;
-(FBSearchResultsStoryLoggingManager *)storyLoggingManager;
-(BOOL)isGrid;
-(CLLocation *)userLocation;

@end

