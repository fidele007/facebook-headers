/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBComposerFlowDelegate, FBReactionStyleMapper, FBNavigationCoordinator, FBIntentHandler, FBMemPageCardControllerDelegate, FBReactionAdapterCache, FBReactionActionAdapterDelegate, FBReactionUnitReloaderProtocol, FBReactionPaginationHandlerProtocol, FBReactionLogging, FBReactionPerformanceLoggerProvider;
@class NSString, FBReactionAdapterStateProvider, FBReactionSessionInfo, FBUserSession, FBReactionCompositionStateTracker, NSDictionary, NSArray, FBFeedToolbox;

@interface FBReactionContextBuilder : NSObject {

	NSString* _analyticsModule;
	id<FBComposerFlowDelegate> _composerFlowDelegate;
	id<FBReactionStyleMapper> _mapper;
	FBReactionAdapterStateProvider* _stateProvider;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBIntentHandler> _intentHandler;
	FBReactionSessionInfo* _reactionSessionInfo;
	FBUserSession* _session;
	unsigned long long _renderIdiom;
	FBReactionCompositionStateTracker* _stateTracker;
	id<FBMemPageCardControllerDelegate> _pageCardControllerDelegate;
	id<FBReactionAdapterCache> _adapterCache;
	NSDictionary* _userInfo;
	id<FBReactionActionAdapterDelegate> _actionAdapterDelegate;
	id<FBReactionUnitReloaderProtocol> _reactionUnitReloader;
	id<FBReactionPaginationHandlerProtocol> _paginationHandler;
	NSArray* _componentTrace;
	id<FBReactionLogging> _logger;
	id<FBReactionPerformanceLoggerProvider> _performanceLoggerProvider;
	FBFeedToolbox* _feedComponentToolbox;

}
+(id)reactionContextFromExistingReactionContext:(id)arg1 ;
-(id)withUserInfo:(id)arg1 ;
-(id)withAnalyticsModule:(id)arg1 ;
-(id)withNavigationCoordinator:(id)arg1 ;
-(id)withIntentHandler:(id)arg1 ;
-(id)withLogger:(id)arg1 ;
-(id)withFeedComponentToolbox:(id)arg1 ;
-(id)withActionAdapterDelegate:(id)arg1 ;
-(id)withMapper:(id)arg1 ;
-(id)withRenderIdiom:(unsigned long long)arg1 ;
-(id)withComponentTrace:(id)arg1 ;
-(id)_privateInit;
-(id)withComposerFlowDelegate:(id)arg1 ;
-(id)withStateProvider:(id)arg1 ;
-(id)withReactionSessionInfo:(id)arg1 ;
-(id)withSession:(id)arg1 ;
-(id)withStateTracker:(id)arg1 ;
-(id)withPageCardControllerDelegate:(id)arg1 ;
-(id)withAdapterCache:(id)arg1 ;
-(id)withReactionUnitReloader:(id)arg1 ;
-(id)withReactionPaginationHandler:(id)arg1 ;
-(id)withPerformanceLoggerProvider:(id)arg1 ;
-(id)build;
@end

