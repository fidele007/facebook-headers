/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBSectionComponentController.h>
#import <Facebook/FBReactionChangesetSequenceServiceListener.h>
#import <Facebook/FBReactionAppearanceListener.h>
#import <Facebook/FBGraphQLConnectionFetchStatusListener.h>

@class FBReactionChangesetSequenceService, FBReactionAppearanceListenerAnnouncer, NSString, FBGraphQLConnectionFetchStatusListenerAnnouncer;

@interface FBReactionSectionComponentController : FBSectionComponentController <FBReactionChangesetSequenceServiceListener, FBReactionAppearanceListener, FBGraphQLConnectionFetchStatusListener> {

	FBReactionChangesetSequenceService* _reactionService;
	FBReactionAppearanceListenerAnnouncer* _appearanceAnnouncer;
	BOOL _hasNotifiedAppearanceEvent;
	NSString* _asyncActionUUID;
	FBGraphQLConnectionFetchStatusListenerAnnouncer* _fetchStatusListenerAnnouncer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toolbox;
-(id)viewStateManager;
-(void)didRequestReload;
-(void)didStartLoadingData:(unsigned long long)arg1 userInfo:(id)arg2 ;
-(void)didSuccessfullyFinishLoadingData:(unsigned long long)arg1 loadingStatus:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(void)didFailInLoadingDataWithError:(id)arg1 fetchType:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(void)didCancelLoadingData:(unsigned long long)arg1 userInfo:(id)arg2 ;
-(void)didScrollToBottom;
-(void)didPullToRefresh;
-(void)componentDidDisappear;
-(void)didRequestPrefetchingData;
-(void)_markFinishLoadingWithSuccess;
-(void)_markFinishLoadingWithError;
-(void)didFinishLoadingDataWithMoreOnTop:(BOOL)arg1 moreOnBottom_DEPRECATED:(BOOL)arg2 ;
-(void)changesetChanged:(const Changeset*)arg1 fetchStatus:(id)arg2 ;
-(void)didFailInLoadingDataWithError:(id)arg1 ;
-(void)didStartLoadingData_DEPRECATED;
-(void)didSuccessfullyFinishLoadingDataWithUserInfo:(id)arg1 ;
-(void)reactionComponentDidAppear;
-(void)didChangeComponentWithPreviousComponent:(id)arg1 userInfoFromStateUpdate:(id)arg2 ;
-(void)_updateWithChangeset:(id)arg1 fetchStatus:(id)arg2 ;
-(void)_startLoad;
-(id)logger;
-(void)didLoad;
-(void)_reload;
@end
