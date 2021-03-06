/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, FBRootGraphQLQuerySectionComponentListenerAnnouncer;


@protocol FBRootGraphQLQuerySectionComponentConfiguring <NSObject>
@property (nonatomic,copy) NSString * keyForModelInResponse; 
@property (assign,nonatomic) BOOL reloadOnPullToRefresh; 
@property (assign,nonatomic) BOOL refreshOnReappear; 
@property (assign,nonatomic) unsigned long long cacheThresholdInSeconds; 
@property (assign,nonatomic) BOOL shouldTransitionViewStateManager; 
@property (assign,nonatomic) BOOL shouldShowNoContentOnEmptyResult; 
@property (nonatomic,copy) NSString * loggableName; 
@property (nonatomic,retain) id scopeKey; 
@property (nonatomic,retain) FBRootGraphQLQuerySectionComponentListenerAnnouncer * announcer; 
@required
-(FBRootGraphQLQuerySectionComponentListenerAnnouncer *)announcer;
-(void)setAnnouncer:(id)arg1;
-(void)setCacheThresholdInSeconds:(unsigned long long)arg1;
-(void)setLoggableName:(id)arg1;
-(void)setReloadOnPullToRefresh:(BOOL)arg1;
-(void)setRefreshOnReappear:(BOOL)arg1;
-(void)setShouldShowNoContentOnEmptyResult:(BOOL)arg1;
-(void)setShouldTransitionViewStateManager:(BOOL)arg1;
-(void)setScopeKey:(id)arg1;
-(NSString *)loggableName;
-(BOOL)reloadOnPullToRefresh;
-(id)scopeKey;
-(BOOL)shouldTransitionViewStateManager;
-(BOOL)shouldShowNoContentOnEmptyResult;
-(BOOL)refreshOnReappear;
-(unsigned long long)cacheThresholdInSeconds;
-(NSString *)keyForModelInResponse;
-(void)setKeyForModelInResponse:(id)arg1;

@end

