/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGraphQLPagedDownloadRequest.h>

@class NSString, NSArray;

@interface FBSearchRequest : FBGraphQLPagedDownloadRequest {

	BOOL _delayFiltersTypeSetFetch;
	BOOL _fetchSeeMoreFilters;
	BOOL _fetchDebugInfo;
	BOOL _isAutoCorrected;
	BOOL _isOptionalized;
	long long _videoOptimizationLevel;
	NSString* _secondRequestToken;
	NSString* _bsid;
	NSString* _ntCachedTemplateVersion;
	BOOL _areTopIndependentModulesAlreadyShown;
	BOOL _exactMatch;
	BOOL _shouldReturnTopIndependentModulesOnly;
	unsigned long long _callSite;
	NSArray* _filters;
	NSArray* _moduleSizesDictionaries;
	unsigned long long _numberOfSerpPivots;
	unsigned long long _numberOfTabs;
	NSString* _serpPivotType;
	NSArray* _supportedExperiences;
	NSArray* _supportedRoles;
	NSString* _typeaheadSessionId;
	NSArray* _preloadedEntityIds;
	NSArray* _preloadedStoryIds;

}

@property (assign,nonatomic) BOOL areTopIndependentModulesAlreadyShown;               //@synthesize areTopIndependentModulesAlreadyShown=_areTopIndependentModulesAlreadyShown - In the implementation block
@property (nonatomic,readonly) unsigned long long callSite;                           //@synthesize callSite=_callSite - In the implementation block
@property (assign,nonatomic) BOOL exactMatch;                                         //@synthesize exactMatch=_exactMatch - In the implementation block
@property (nonatomic,copy) NSArray * filters;                                         //@synthesize filters=_filters - In the implementation block
@property (nonatomic,copy) NSArray * moduleSizesDictionaries;                         //@synthesize moduleSizesDictionaries=_moduleSizesDictionaries - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfSerpPivots;                   //@synthesize numberOfSerpPivots=_numberOfSerpPivots - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTabs;                         //@synthesize numberOfTabs=_numberOfTabs - In the implementation block
@property (nonatomic,copy) NSString * serpPivotType;                                  //@synthesize serpPivotType=_serpPivotType - In the implementation block
@property (assign,nonatomic) BOOL shouldReturnTopIndependentModulesOnly;              //@synthesize shouldReturnTopIndependentModulesOnly=_shouldReturnTopIndependentModulesOnly - In the implementation block
@property (nonatomic,copy) NSArray * supportedExperiences;                            //@synthesize supportedExperiences=_supportedExperiences - In the implementation block
@property (nonatomic,copy) NSArray * supportedRoles;                                  //@synthesize supportedRoles=_supportedRoles - In the implementation block
@property (nonatomic,copy) NSString * typeaheadSessionId;                             //@synthesize typeaheadSessionId=_typeaheadSessionId - In the implementation block
@property (nonatomic,copy) NSArray * preloadedEntityIds;                              //@synthesize preloadedEntityIds=_preloadedEntityIds - In the implementation block
@property (nonatomic,copy) NSArray * preloadedStoryIds;                               //@synthesize preloadedStoryIds=_preloadedStoryIds - In the implementation block
-(id)newQueryWithCursor:(id)arg1 ;
-(unsigned long long)numberOfTabs;
-(unsigned long long)callSite;
-(NSArray *)supportedExperiences;
-(BOOL)exactMatch;
-(NSArray *)preloadedStoryIds;
-(void)setShouldReturnTopIndependentModulesOnly:(BOOL)arg1 ;
-(void)setAreTopIndependentModulesAlreadyShown:(BOOL)arg1 ;
-(NSArray *)supportedRoles;
-(id)initWithTargetID:(id)arg1 callbackPerformer:(id)arg2 callSite:(unsigned long long)arg3 delayFiltersTypeSetFetch:(BOOL)arg4 fetchSeeMoreFilters:(BOOL)arg5 fetchDebugInfo:(BOOL)arg6 secondRequestToken:(id)arg7 bsid:(id)arg8 isAutoCorrected:(BOOL)arg9 isOptionalized:(BOOL)arg10 videoOptimizationLevel:(long long)arg11 ntCachedTemplateVersion:(id)arg12 ;
-(void)setExactMatch:(BOOL)arg1 ;
-(void)setSupportedExperiences:(NSArray *)arg1 ;
-(void)setSupportedRoles:(NSArray *)arg1 ;
-(void)setModuleSizesDictionaries:(NSArray *)arg1 ;
-(void)setTypeaheadSessionId:(NSString *)arg1 ;
-(NSArray *)preloadedEntityIds;
-(void)setPreloadedEntityIds:(NSArray *)arg1 ;
-(void)setPreloadedStoryIds:(NSArray *)arg1 ;
-(void)setNumberOfTabs:(unsigned long long)arg1 ;
-(id)_queryWithModule:(id)arg1 ;
-(id)_graphSearchKeywordsQueryWithAfterCursor:(id)arg1 ;
-(NSArray *)moduleSizesDictionaries;
-(unsigned long long)numberOfSerpPivots;
-(void)setNumberOfSerpPivots:(unsigned long long)arg1 ;
-(NSString *)serpPivotType;
-(void)setSerpPivotType:(NSString *)arg1 ;
-(NSString *)typeaheadSessionId;
-(BOOL)areTopIndependentModulesAlreadyShown;
-(BOOL)shouldReturnTopIndependentModulesOnly;
-(void)setFilters:(NSArray *)arg1 ;
-(NSArray *)filters;
@end

