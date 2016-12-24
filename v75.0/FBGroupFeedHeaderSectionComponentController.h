/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBSectionComponentController.h>
#import <Facebook/FBFeedInlineComposerControllerComponentsDelegate.h>

@protocol FBGraphQLService;
@class FBInlineComposerTogglePromptsProvider, FBInlineComposerGroupWelcomePromptsProvider, FBFeedInlineComposerControllerComponents, FBInlineComposerViewSpecifier, FBGraphQLConsistentLookasideCache, FBConsistentLookasideCacheObservationHandle, FBMemGroup, FBGraphQLQuery, FBUserSession, FBScenePath, NSString;

@interface FBGroupFeedHeaderSectionComponentController : FBSectionComponentController <FBFeedInlineComposerControllerComponentsDelegate> {

	FBInlineComposerTogglePromptsProvider* _actionButtonsPromptToggleProvider;
	FBInlineComposerGroupWelcomePromptsProvider* _groupWelcomePromptProvider;
	BOOL _currentlyBlockingInlineComposerUpdates;
	FBFeedInlineComposerControllerComponents* _inlineComposerControllerComponents;
	BOOL _isVisible;
	BOOL _hasMadeFirstRequest;
	BOOL _requestInProgress;
	BOOL _shouldBlockMiscGroupsActions;
	FBInlineComposerViewSpecifier* _viewSpecifier;
	FBGraphQLConsistentLookasideCache* _consistentLookasideCache;
	FBConsistentLookasideCacheObservationHandle* _handle;
	const FBGraphQLFieldSetRef _fieldSet;
	id<FBGraphQLService> _gqlService;
	FBMemGroup* _group;
	FBMemGroup* _relatedGroup;
	FBGraphQLQuery* _query;
	FBUserSession* _session;
	FBScenePath* _scenePath;
	NSString* _asyncActionUUID;
	BOOL _composeInlineAsPage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)componentWillAppear;
-(id)myToolbox;
-(void)didPullToRefresh;
-(void)componentDidDisappear;
-(void)maybeLoadData;
-(void)_potentiallyShowMiscellaneousGroupsThings;
-(void)componentWillDisappear;
-(void)didRequestPrefetchingData;
-(id)_sendGQLServiceDownloadQuery;
-(void)_gQLServiceCacheRetrievalSucceededWithResponse:(id)arg1 ;
-(void)_markFinishLoadingWithSuccess;
-(void)_gQLServiceDownloadSucceededWithResponse:(id)arg1 ;
-(void)_markFinishLoadingWithError;
-(void)_gQLServiceDownloadSucceededWithResponse:(id)arg1 shouldCacheData:(BOOL)arg2 ;
-(void)_groupChanged:(id)arg1 ;
-(void)_updateSearchContextForGroup:(id)arg1 ;
-(void)_updateInlineComposerWithGroup:(id)arg1 ;
-(void)_updatePostStatus:(id)arg1 ;
-(void)_updateShouldShowRelatedGroupSuggestions:(id)arg1 ;
-(void)inlineComposerNeedsReload:(id)arg1 ;
-(BOOL)inlineComposerCanReload:(id)arg1 ;
-(BOOL)inlineComposerIsVisible:(id)arg1 ;
-(void)inlineComposer:(id)arg1 didUpdatePromptSession:(id)arg2 ;
-(void)inlineComposer:(id)arg1 toolboxDidUpdate:(id)arg2 ;
-(void)inlineComposer:(id)arg1 modelDidUpdate:(id)arg2 ;
-(id)init;
-(id)logger;
-(void)didLoad;
@end
