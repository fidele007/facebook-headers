/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBSectionComponentTracker.h>
#import <Facebook/FBSectionComponentStateChangeListener.h>

@protocol OS_dispatch_queue;
@class FBSectionComponentTrackerStateListenerAnnouncer, NSDictionary, NSObject, FBSectionComponent, NSString;

@interface FBSectionComponentTracker_BackgroundGenSupport : FBSectionComponentTracker <FBSectionComponentStateChangeListener> {

	FBSectionComponentTrackerStateListenerAnnouncer* _announcer;
	NSDictionary* _userInfoMergeBlockMap;
	NSObject*<OS_dispatch_queue> _backgroundQueue;
	FBSectionComponentTrackerState _state;
	deque<FBSectionComponentTrackerStateModification, std::__1::allocator<FBSectionComponentTrackerStateModification> >* _pendingModifications;
	vector<FBSectionComponentTrackerComponentStateUpdate, std::__1::allocator<FBSectionComponentTrackerComponentStateUpdate> >* _pendingComponentStateUpdates;
	BOOL _shouldCombineStateUpdates;
	BOOL _isProcessingModification;
	FBSectionComponent* _keepAliveComponent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)componentWillAppear;
-(void)readyForSectionComponentGeneration;
-(void)readyToApplyChangesets;
-(void)didRequestReload;
-(void)didScrollToBottom;
-(void)didScrollToTop;
-(void)didPullToRefresh;
-(void)componentDidDisappear;
-(void)componentWillDisappear;
-(void)didRequestPrefetchingData;
-(void)componentDidAppear;
-(id)initWithSectionComponentGenerationFactory:(/*^block*/id)arg1 userInfoMergeBlockMap:(id)arg2 options:(const FBSectionComponentTrackerOptions*)arg3 ;
-(void)addTrackerStateListener:(id)arg1 ;
-(void)setSectionComponentGenerationFactory:(/*^block*/id)arg1 changesetWriter:(id)arg2 ;
-(void)setSectionComponentGenerationFactory:(/*^block*/id)arg1 ;
-(id)initWithSectionComponentGenerationFactory:(/*^block*/id)arg1 changesetWriter:(id)arg2 userInfoMergeBlockMap:(id)arg3 options:(const FBSectionComponentTrackerOptions*)arg4 ;
-(id)initWithSectionComponentGenerationFactory:(/*^block*/id)arg1 changesetWriter:(id)arg2 userInfoMergeBlockMap:(id)arg3 ;
-(id)initWithSectionComponentGenerationFactory:(/*^block*/id)arg1 userInfoMergeBlockMap:(id)arg2 ;
-(void)reflowSectionComponents_DEPRECATED;
-(void)removeTrackerStateListener:(id)arg1 ;
-(void)_enqueueModifications:(const vector<FBSectionComponentTrackerStateModification, std::__1::allocator<FBSectionComponentTrackerStateModification> >*)arg1 ;
-(void)_executeBlockOnStateQueue:(/*^block*/id)arg1 ;
-(void)_mainThreadEnqueueStateUpdateTransaction:(/*^block*/id)arg1 ;
-(void)_startNextAsynchronousModification;
-(vector<FBSectionComponentTrackerStateModification, std::__1::allocator<FBSectionComponentTrackerStateModification> >*)_createComponentStateUpdateModifications;
-(BOOL)_isRunningOnStateQueue;
-(void)updateStateRequestedForKey:(id)arg1 updateBlock:(/*^block*/id)arg2 userInfo:(id)arg3 ;
-(void)_finishComponentGenerationWithGenerationType:(unsigned long long)arg1 results:(FBSectionComponentTrackerStateModificationResults*)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
@end
