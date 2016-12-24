/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSearchTypeaheadCustomContentControllerDelegate;
@class FBUserSession, FBSearchContext, FBSearchTypeaheadSessionStatus, FBGraphSearchSingleStateDownloader;

@interface FBSearchTypeaheadCustomContentController : NSObject {

	FBUserSession* _userSession;
	FBSearchContext* _searchContext;
	FBSearchTypeaheadSessionStatus* _sessionStatus;
	id<FBSearchTypeaheadCustomContentControllerDelegate> _delegate;
	FBGraphSearchSingleStateDownloader* _singleStateDownloader;
	BOOL _isLoading;

}

@property (nonatomic,readonly) BOOL isLoading;              //@synthesize isLoading=_isLoading - In the implementation block
-(id)_tableViewDataByInjectingScopedSearchSuggestionsWithData:(id)arg1 ;
-(id)_tableViewDataByInjectingSingleStateSuggestionsWithData:(id)arg1 ;
-(id)_tableViewDataForKeywordOnlyTypeaheadWithData:(id)arg1 ;
-(id)_tableViewDataWithSingleStateModules:(id)arg1 ;
-(id)_clientSideGeneratedTableViewDataForSingleState;
-(id)_recentSearchComponentModelForRowAtIndex:(unsigned long long)arg1 inRows:(id)arg2 ;
-(void)_injectPostsSuggestionForQuery:(id)arg1 injectedSuggestions:(id)arg2 ;
-(void)_injectPhotosAndVideosSuggestionsForQuery:(id)arg1 injectedSuggestions:(id)arg2 ;
-(BOOL)_isPlace:(id)arg1 ;
-(void)_injectPhotosSuggestionForQuery:(id)arg1 injectedSuggestions:(id)arg2 ;
-(void)_injectVideosSuggestionForQuery:(id)arg1 injectedSuggestions:(id)arg2 ;
-(id)initWithUserSession:(id)arg1 searchContext:(id)arg2 typeaheadSessionStatus:(id)arg3 announcer:(id)arg4 scenePath:(id)arg5 delegate:(id)arg6 ;
-(id)tableViewDataByInjectingCustomContentWithData:(id)arg1 ;
-(id)tableViewDataForSingleState;
-(BOOL)isLoading;
-(id)_recentSearches;
@end

