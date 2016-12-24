/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBSectionComponentController.h>
#import <Facebook/FBPostingControllerDelegate.h>
#import <Facebook/FBOptimisticPostingControllerDelegate.h>
#import <Facebook/FBFeedOutboxListDataSourceMutator.h>
#import <Facebook/FBComposerFlowDelegate.h>
#import <Facebook/FBOptimisticPostingContainerStateListener.h>
#import <Facebook/FBOptimisticPostingFeedListener.h>
#import <Facebook/FBOptimisticPostingStreamListener.h>

@class FBOptimisticPostingController, FBPostingController, NSString;

@interface FBOptimisticPostingSectionComponentController : FBSectionComponentController <FBPostingControllerDelegate, FBOptimisticPostingControllerDelegate, FBFeedOutboxListDataSourceMutator, FBComposerFlowDelegate, FBOptimisticPostingContainerStateListener, FBOptimisticPostingFeedListener, FBOptimisticPostingStreamListener> {

	FBOptimisticPostingController* _optimisticPostingController;
	FBPostingController* _postingController;
	NSString* _currentComposerSessionId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toolbox;
-(void)composerCompletedWithResult:(id)arg1 ;
-(void)insertRowsAtIndexPathsWithOutboxCells:(vector<std::__1::pair<NSIndexPath *, FBFeedOutboxFeedComponentsCell *>, std::__1::allocator<std::__1::pair<NSIndexPath *, FBFeedOutboxFeedComponentsCell *> > >*)arg1 ;
-(void)updateHeight;
-(id)absoluteIndexPathForIndexPath:(id)arg1 ;
-(void)willInsertNewStoriesWithMutationIdentifiers:(id)arg1 ;
-(void)finishedPublishingWithPublisherData:(id)arg1 ;
-(void)successfullyPublishedNewStoryWithPublisherData:(id)arg1 response:(id)arg2 ;
-(void)successfullyPublishedEditedStoryWithPublisherData:(id)arg1 ;
-(void)outboxDatasourceWillRefresh:(id)arg1 ;
-(void)outboxDatasourceDidInsertNewStories:(id)arg1 ;
-(void)outboxDatasourceDidRefresh:(id)arg1 ;
-(void)outboxDatasourceDidRemoveStories:(id)arg1 ;
-(void)feedOptimisticStoryDownloadCoordinatorWillLoadStoryIntoConnections:(id)arg1 ;
-(void)updateComponentWithChangeset:(id)arg1 ;
-(void)containerDidAppear;
-(void)containerDidDisappear;
-(void)feedIsReadyAndLoaded;
-(void)didAcquireStream:(id)arg1 ;
-(void)didRemoveStream:(id)arg1 ;
-(void)didLoad;
-(void)deleteRowsAtIndexPaths:(id)arg1 ;
@end
