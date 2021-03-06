/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBTableViewController.h>
#import <Facebook/FBGraphQLConnectionSyncStoreListener.h>
#import <Facebook/FBComposerPublicationProgressDisplayListener.h>
#import <Facebook/FBDismissalConfirmationViewControllerProtocol.h>
#import <Facebook/FBComposerDestinationNavigationListener.h>
#import <Facebook/FBComposerPickerController.h>
#import <Facebook/FBComposerFlowDelegate.h>
#import <Facebook/FBComposerCompositionStateChangedListener.h>

@protocol FBComposerPublicationProgressDisplayer, FBComposerUpdateHandler, FBGraphQLConnectionSyncStoreProtocol;
@class FBUserSession, FBComposerCompositionState, FBComposerFlowDisplayer, FBExceptionHandler, UIView, FBPublisherManager, FBComposerPublisherStatusEventFilter, FBComposerAlbumPickerTableItemView, NSArray, FBListLogger, NSString, FBMemAlbum, FBTransientViewStateManager;

@interface FBComposerAlbumPickerController : FBTableViewController <FBGraphQLConnectionSyncStoreListener, FBComposerPublicationProgressDisplayListener, FBDismissalConfirmationViewControllerProtocol, FBComposerDestinationNavigationListener, FBComposerPickerController, FBComposerFlowDelegate, FBComposerCompositionStateChangedListener> {

	FBUserSession* _session;
	FBComposerCompositionState* _compositionState;
	FBComposerFlowDisplayer* _composerDisplayer;
	FBExceptionHandler* _exceptionHandler;
	UIView* _overlayView;
	id<FBComposerPublicationProgressDisplayer> _publicationProgressDisplayer;
	FBPublisherManager* _publisherManager;
	FBComposerPublisherStatusEventFilter* _publishingEventFilter;
	FBComposerAlbumPickerTableItemView* _tableHeaderView;
	NSArray* _filteredAlbums;
	BOOL _canAlbumContainVideos;
	BOOL _shouldFilter;
	BOOL _shouldReload;
	id<FBComposerUpdateHandler> _updateHandler;
	unsigned long long _fromDestination;
	BOOL _isInPopover;
	BOOL _didFinishInitialLoad;
	FBListLogger* _listLogger;
	NSString* _listLoggerUUID;
	FBMemAlbum* _selectedAlbum;
	NSString* _fakeAlbumGraphQLID;
	NSString* _defaultAlbumType;
	NSString* _ownerFBID;
	NSString* _ownerFBIDForDisplayedAlbums;
	id<FBGraphQLConnectionSyncStoreProtocol> _albumStore;

}

@property (nonatomic,retain) FBMemAlbum * selectedAlbum;                                       //@synthesize selectedAlbum=_selectedAlbum - In the implementation block
@property (nonatomic,copy) NSString * fakeAlbumGraphQLID;                                      //@synthesize fakeAlbumGraphQLID=_fakeAlbumGraphQLID - In the implementation block
@property (nonatomic,copy) NSString * defaultAlbumType;                                        //@synthesize defaultAlbumType=_defaultAlbumType - In the implementation block
@property (nonatomic,copy) NSString * ownerFBID;                                               //@synthesize ownerFBID=_ownerFBID - In the implementation block
@property (nonatomic,copy) NSString * ownerFBIDForDisplayedAlbums;                             //@synthesize ownerFBIDForDisplayedAlbums=_ownerFBIDForDisplayedAlbums - In the implementation block
@property (nonatomic,retain) id<FBGraphQLConnectionSyncStoreProtocol> albumStore;              //@synthesize albumStore=_albumStore - In the implementation block
@property (nonatomic,retain) FBTransientViewStateManager * viewStateManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fb_showNavBarSearchField;
-(void)composerCompletedWithResult:(id)arg1 ;
-(id)cellIdentifierAtIndexPath:(id)arg1 ;
-(NSString *)ownerFBID;
-(void)composerCompositionStateChangedFromPreviousCompositionState:(id)arg1 toCurrentCompositionState:(id)arg2 ;
-(void)connectionSyncStore:(id)arg1 didAddNodesAtIndexes:(id)arg2 ;
-(void)connectionSyncStore:(id)arg1 didUpdateNodesAtIndexes:(id)arg2 ;
-(void)connectionSyncStore:(id)arg1 didRemoveNodesAtIndexes:(id)arg2 ;
-(void)connectionSyncStoreDidChangeContent:(id)arg1 ;
-(void)connectionSyncStoreDidStartRequest:(id)arg1 ;
-(void)connectionSyncStoreDidFinishRequest:(id)arg1 error:(id)arg2 ;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 ;
-(id)newCellWithIdentifier:(id)arg1 ;
-(void)_dismissPublicationProgressDisplay;
-(void)cancelButtonTappedForPublisherData:(id)arg1 withReason:(id)arg2 ;
-(void)dismissButtonTappedForPublisherData:(id)arg1 ;
-(void)retryButtonTappedForPublisherData:(id)arg1 ;
-(void)uploadViewUpdatedForCancellationOfPublicationForPublisherData:(id)arg1 ;
-(void)uploadViewUpdatedForTerminalFailureOfPublicationForPublisherData:(id)arg1 ;
-(void)uploadViewUpdatedForTransientFailureOfPublicationForPublisherData:(id)arg1 ;
-(void)uploadViewUpdatedForSuccessOfPublicationForPublisherData:(id)arg1 response:(id)arg2 ;
-(void)_createViewStateManager;
-(id)_indexPathsForIndexes:(id)arg1 ;
-(void)_showPublicationWithIdentifier:(id)arg1 ;
-(void)setOwnerFBID:(NSString *)arg1 ;
-(id<FBGraphQLConnectionSyncStoreProtocol>)albumStore;
-(void)setAlbumStore:(id<FBGraphQLConnectionSyncStoreProtocol>)arg1 ;
-(void)didBecomeCurrentDestinationFromDestination:(unsigned long long)arg1 presentedMethod:(unsigned long long)arg2 dismissing:(BOOL)arg3 ;
-(BOOL)shouldDismissViewController;
-(id)presentableViewControllerWithNavigationPayload:(id)arg1 ;
-(unsigned long long)popoverStyle;
-(CGSize)popoverContentSizeForOrientation:(long long)arg1 ;
-(void)dismissPopoverController;
-(id)initWithUserSession:(id)arg1 updateHandler:(id)arg2 publisherManager:(id)arg3 exceptionHandler:(id)arg4 ;
-(NSString *)defaultAlbumType;
-(void)didTapCancel:(id)arg1 ;
-(void)didTapNewButton:(id)arg1 ;
-(void)_addNewAlbumHeaderView;
-(void)_updateAlbumStoreAndDefault;
-(void)_filterAlbums;
-(void)_finishPickingNewAlbum:(BOOL)arg1 ;
-(void)didAddAlbumWithFBID:(id)arg1 ;
-(void)_handlePublicationResponse:(id)arg1 ;
-(id)_albumNameForType:(id)arg1 ;
-(id)_defaultAlbum;
-(NSString *)fakeAlbumGraphQLID;
-(void)setFakeAlbumGraphQLID:(NSString *)arg1 ;
-(NSString *)ownerFBIDForDisplayedAlbums;
-(void)setOwnerFBIDForDisplayedAlbums:(NSString *)arg1 ;
-(void)setDefaultAlbumType:(NSString *)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(CGSize)preferredContentSize;
-(void)cancelled;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CGSize)contentSizeForViewInPopover;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)clearSelection;
-(void)_dismiss;
-(void)setSelectedAlbum:(FBMemAlbum *)arg1 ;
-(FBMemAlbum *)selectedAlbum;
-(void)_reload;
-(id)albums;
@end

