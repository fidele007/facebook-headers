/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSectionComponentController.h>
#import <Facebook/FBGraphQLConnectionChangesetSequenceServiceListener.h>
#import <Facebook/FBGraphQLConnectionFetchStatusListener.h>

@protocol FBGraphQLConnectionChangesetSequenceServiceBase, NSObject;
@class FBTimer, NSString, FBGraphQLConnectionFetchStatusListenerAnnouncer;

@interface FBGraphQLConnectionSectionComponentController : FBSectionComponentController <FBGraphQLConnectionChangesetSequenceServiceListener, FBGraphQLConnectionFetchStatusListener> {

	id<FBGraphQLConnectionChangesetSequenceServiceBase> _connectionService;
	FBTimer* _timer;
	NSString* _asyncActionUUID;
	id<NSObject> _previousComponentContext;
	BOOL _hasAppeared;
	BOOL _isCurrentlyDisplayed;
	FBGraphQLConnectionFetchStatusListenerAnnouncer* _announcer;
	BOOL _didGetResponseFromInitialRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)viewStateManager;
-(void)didRequestReload;
-(void)didStartLoadingData:(unsigned long long)arg1 userInfo:(id)arg2 ;
-(void)didSuccessfullyFinishLoadingData:(unsigned long long)arg1 loadingStatus:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(void)didFailInLoadingDataWithError:(id)arg1 fetchType:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(void)didCancelLoadingData:(unsigned long long)arg1 userInfo:(id)arg2 ;
-(void)didScrollToBottom;
-(void)didScrollToTop;
-(void)didPullToRefresh;
-(void)componentDidDisappear;
-(void)didRequestPrefetchingData;
-(void)componentDidAppear;
-(void)didEnterForeground:(id)arg1 ;
-(void)didChangeComponentWithPreviousComponent:(id)arg1 userInfoFromStateUpdate:(id)arg2 ;
-(void)changedSequence:(id)arg1 fetchStatus:(id)arg2 ;
-(void)_updateComponentWithInitialFetchStatusAndHidesAllSpinners:(BOOL)arg1 ;
-(void)_updateComponentWithInitialFetchStatus;
-(void)_updateComponentWithSequence:(id)arg1 fetchStatus:(id)arg2 hidesAllSpinners:(BOOL)arg3 ;
-(void)_logSuccessfullyFinishLoadingWithFetchType:(unsigned long long)arg1 loadingStatus:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(void)_updateLoadedSuccess:(BOOL)arg1 fetchType:(unsigned long long)arg2 ;
-(void)_logFailInLoadingWithFetchType:(unsigned long long)arg1 error:(id)arg2 userInfo:(id)arg3 ;
-(void)dealloc;
-(id)configuration;
-(id)logger;
-(void)didLoad;
@end
