/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSString, FBMemGraphSearchQuery, FBGraphQLPagedDownloadRequest;


@protocol FBSearchCommonDownloaderProtocol <FBSearchResultsDownloaderProtocol>
@property (nonatomic,readonly) BOOL loading; 
@property (nonatomic,readonly) BOOL hasLoadedEnoughInitialPages; 
@property (nonatomic,readonly) unsigned long long resultType; 
@property (nonatomic,copy,readonly) NSArray * filters; 
@property (nonatomic,copy,readonly) NSString * semantic; 
@property (nonatomic,copy,readonly) NSString * typeaheadSessionID; 
@property (nonatomic,copy,readonly) NSString * resultsSessionID; 
@property (nonatomic,copy,readonly) NSString * requestTracker; 
@property (nonatomic,copy,readonly) NSString * verticalToLog; 
@property (nonatomic,copy,readonly) NSArray * needleFilters; 
@property (nonatomic,copy,readonly) NSString * spellerConfidence; 
@property (nonatomic,readonly) FBMemGraphSearchQuery * correctedQuery; 
@property (nonatomic,readonly) FBMemGraphSearchQuery * currentQuery; 
@property (nonatomic,readonly) FBMemGraphSearchQuery * rootQuery; 
@property (nonatomic,readonly) FBGraphQLPagedDownloadRequest * request; 
@property (nonatomic,copy,readonly) NSString * postSearchIntentLog; 
@property (nonatomic,copy,readonly) NSString * resultsSessionLoggingUnitId; 
@required
-(NSString *)resultsSessionID;
-(NSString *)verticalToLog;
-(NSString *)postSearchIntentLog;
-(NSString *)resultsSessionLoggingUnitId;
-(NSString *)typeaheadSessionID;
-(FBMemGraphSearchQuery *)correctedQuery;
-(NSString *)requestTracker;
-(NSArray *)needleFilters;
-(NSString *)spellerConfidence;
-(FBMemGraphSearchQuery *)rootQuery;
-(BOOL)hasLoadedEnoughInitialPages;
-(FBGraphQLPagedDownloadRequest *)request;
-(NSArray *)filters;
-(BOOL)loading;
-(unsigned long long)resultType;
-(void)cancelDownloadRequest;
-(NSString *)semantic;
-(FBMemGraphSearchQuery *)currentQuery;

@end

