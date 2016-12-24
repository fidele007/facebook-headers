/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FBGraphSearchNullStateContentLoaderProtocol <NSObject>
@property (nonatomic,readonly) BOOL isNullStateReady; 
@property (nonatomic,readonly) BOOL isNullStateLoading; 
@property (nonatomic,readonly) unsigned long long numberOfRecentSearches; 
@property (nonatomic,copy,readonly) NSString * namespaceForPerfLogging; 
@required
-(void)loadNullStateFromCache:(BOOL)arg1;
-(BOOL)isNullStateReady;
-(id)nullStateModulesWithLoggingDataIsInitialAppearance:(BOOL)arg1;
-(void)clearAllNullState;
-(void)requestTailModuleAsScrollPositionsReachingEnd;
-(BOOL)isNullStateLoading;
-(NSString *)namespaceForPerfLogging;
-(void)logNullStateContent;
-(id)removedSuggestionsIfNeeded;
-(void)updateSuggestedSearches;
-(void)onServiceStart;
-(void)onServiceStop;
-(void)onAppBecomeActive;
-(void)refreshCombinedEndpointSection;
-(void)insertToRecentSearches:(id)arg1 deduplicationPolicy:(unsigned long long)arg2;
-(void)insertToRecentSearches:(id)arg1;
-(id)recentSearchesModule;
-(id)init;
-(id)initWithSession:(id)arg1;
-(unsigned long long)numberOfRecentSearches;
-(void)clearRecentSearches;

@end
