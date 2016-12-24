/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBZoomingPhotoViewDelegate.h>
#import <Facebook/FBTagDecoratorDelegate.h>
#import <Facebook/FBNetworkerRequestDelegate.h>
#import <Facebook/FBWebImageViewListener.h>
#import <Facebook/FBWebLivePhotoSupportingViewDelegate.h>
#import <Facebook/FBPagingViewContentView.h>

@protocol FBServiceTransactionMutating, FBRichPhotoViewDelegate, FBRichPhotoViewSpinnerLoggingDelegate, FBQueriedNodeFieldsProtocol;
@class UIButton, FBTagDecorator, NSDate, NSMutableSet, UIView, FB360PhotoView, NSURL, FBZoomingPhotoView, FBPhotosConsumptionReferrer, FBUserSession, FBPhotoLoadingProgressView, UIActivityIndicatorView, FBWebLivePhotoSupportingView, FBLivePhotoBadgeView, FBTimer, FBMemPhoto, FBScenePath, NSTimer, FBMemModelObject, NSString, FBPhotoTaggingSearchController, FBWebPhotoView, UIImage, NSSet;

@interface FBRichPhotoView : UIView <FBZoomingPhotoViewDelegate, FBTagDecoratorDelegate, FBNetworkerRequestDelegate, FBWebImageViewListener, FBWebLivePhotoSupportingViewDelegate, FBPagingViewContentView> {

	UIButton* _retryButton;
	FBTagDecorator* _tagDecorator;
	id<FBServiceTransactionMutating> _inProgressTagSuggestionsRequest;
	double _lastProgress;
	BOOL _showingTags;
	unsigned long long _minimumViewablePhotoImageFlag;
	NSDate* _spinnerDisplayTime;
	BOOL _canEditTag;
	BOOL _canSyncTaggables;
	NSMutableSet* _newTags;
	UIView* _tapToTagLabel;
	FB360PhotoView* _sphericalPhotoView;
	NSURL* _sphericalAssetURL;
	BOOL _sphericalTimerIsDone;
	BOOL _needsToDelegateDidSetTags;
	FBZoomingPhotoView* _zoomView;
	FBPhotosConsumptionReferrer* _referrer;
	FBUserSession* _session;
	double _loadTime;
	FBPhotoLoadingProgressView* _progressView;
	UIActivityIndicatorView* _simpleSpinnerView;
	FBWebLivePhotoSupportingView* _livePhotoSupportingView;
	FBLivePhotoBadgeView* _livePhotoBadgeView;
	FBTimer* _sphericalViewTimer;
	BOOL _photoIsSpherical;
	BOOL _isIn360Mode;
	BOOL _isAnimatingSphericalView;
	BOOL _sphericalPhotoViewInitiated;
	BOOL _isTagging;
	FBMemPhoto* _photo;
	id<FBRichPhotoViewDelegate> _delegate;
	id<FBRichPhotoViewSpinnerLoggingDelegate> _spinnerLoggingDelegate;
	FBScenePath* _scenePath;
	double _zoomScale;
	unsigned long long _viewTagMode;
	NSTimer* _hideTapToTagLabelTimer;
	FBMemModelObject*<FBQueriedNodeFieldsProtocol> _target;
	NSString* _sessionID;
	FBPhotoTaggingSearchController* _taggingSearchController;

}

@property (nonatomic,retain) NSDate * spinnerDisplayTime;                                                          //@synthesize spinnerDisplayTime=_spinnerDisplayTime - In the implementation block
@property (nonatomic,retain) NSTimer * hideTapToTagLabelTimer;                                                     //@synthesize hideTapToTagLabelTimer=_hideTapToTagLabelTimer - In the implementation block
@property (nonatomic,retain) FBMemModelObject*<FBQueriedNodeFieldsProtocol> target;                                //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) unsigned long long viewTagMode;                                                       //@synthesize viewTagMode=_viewTagMode - In the implementation block
@property (nonatomic,copy) NSString * sessionID;                                                                   //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) FBPhotoTaggingSearchController * taggingSearchController;                             //@synthesize taggingSearchController=_taggingSearchController - In the implementation block
@property (nonatomic,retain) FBMemPhoto * photo;                                                                   //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) FBZoomingPhotoView * zoomView;                                                      //@synthesize zoomView=_zoomView - In the implementation block
@property (nonatomic,readonly) FBWebPhotoView * photoView; 
@property (assign,nonatomic,__weak) id<FBRichPhotoViewDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBRichPhotoViewSpinnerLoggingDelegate> spinnerLoggingDelegate;              //@synthesize spinnerLoggingDelegate=_spinnerLoggingDelegate - In the implementation block
@property (nonatomic,readonly) UIImage * displayedImage; 
@property (nonatomic,retain) FBScenePath * scenePath;                                                              //@synthesize scenePath=_scenePath - In the implementation block
@property (assign,getter=isLivePhotoEnabled,nonatomic) BOOL livePhotoEnabled; 
@property (getter=isLivePhotoLoaded,nonatomic,readonly) BOOL livePhotoLoaded; 
@property (assign,nonatomic) double zoomScale;                                                                     //@synthesize zoomScale=_zoomScale - In the implementation block
@property (nonatomic,readonly) BOOL isZoomed; 
@property (nonatomic,readonly) BOOL isZoomedIn; 
@property (nonatomic,readonly) BOOL isSpinnerOn; 
@property (nonatomic,readonly) BOOL isTagging;                                                                     //@synthesize isTagging=_isTagging - In the implementation block
@property (assign,nonatomic) BOOL canEditTag;                                                                      //@synthesize canEditTag=_canEditTag - In the implementation block
@property (assign,nonatomic) BOOL canSyncTaggables;                                                                //@synthesize canSyncTaggables=_canSyncTaggables - In the implementation block
@property (getter=getNewTags,nonatomic,copy) NSSet * newTags;                                                      //@synthesize newTags=_newTags - In the implementation block
@property (assign,nonatomic) BOOL tagGuideEnabled; 
@property (nonatomic,copy) NSString * module; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)defaultImageFlags;
-(NSString *)module;
-(FBScenePath *)scenePath;
-(void)setScenePath:(FBScenePath *)arg1 ;
-(void)photoTapped:(id)arg1 ;
-(void)networkerRequestDidStart:(id)arg1 ;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(UIImage *)displayedImage;
-(void)webImageViewDidSetImage:(id)arg1 fromCache:(BOOL)arg2 ;
-(void)webImageView:(id)arg1 didUpdateLoadProgress:(double)arg2 ;
-(void)webImageView:(id)arg1 didFailDownloadingWithError:(id)arg2 ;
-(void)suspendTimer;
-(BOOL)isLivePhotoEnabled;
-(BOOL)_isSphericalPhotoEnabled;
-(void)updatePhotoTaggingSearchController;
-(unsigned long long)viewTagMode;
-(BOOL)livePhotoPlaybackGestureShouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)passthroughViewsForFaceAlertsNUX;
-(BOOL)isTagging;
-(id)initWithFrame:(CGRect)arg1 referrer:(id)arg2 session:(id)arg3 ;
-(void)setTemporaryDisplayedImageIfNeeded:(id)arg1 forImageFlag:(unsigned long long)arg2 photo:(id)arg3 ;
-(void)setShowingTags:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setCanEditTag:(BOOL)arg1 ;
-(void)showTapToTagLabel;
-(void)hideTapToTagLabel;
-(void)setCanSyncTaggables:(BOOL)arg1 ;
-(void)setTagGuideEnabled:(BOOL)arg1 ;
-(void)maximumZoomToPoint:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setModule:(NSString *)arg1 ;
-(void)setSpinnerLoggingDelegate:(id<FBRichPhotoViewSpinnerLoggingDelegate>)arg1 ;
-(void)setLivePhotoEnabled:(BOOL)arg1 ;
-(BOOL)tagGuideEnabled;
-(void)closeNUX;
-(void)switch360ModeIfNecessary;
-(BOOL)isLivePhotoLoaded;
-(BOOL)hasTagAtPoint:(CGPoint)arg1 ;
-(void)load360ViewIfNecessary;
-(void)prepareForLosingFocus;
-(void)unsuspendTimer;
-(BOOL)isSpinnerOn;
-(void)uploadNewTags;
-(/*^block*/id)extraBlockForAnalytics;
-(BOOL)isZoomedIn;
-(void)_didTapRetryButton:(id)arg1 ;
-(unsigned long long)minimumViewablePhotoImageFlag;
-(void)_voiceoverChanged;
-(id)currentLoadingIndicatorView;
-(BOOL)_shouldReloadPhoto:(id)arg1 ;
-(void)_logStartLoadPhoto:(id)arg1 ;
-(void)_updatePhotoDownloadRequestScenePath;
-(void)finalizeSphericalViewAnimation;
-(void)_animateViewWithPOP:(id)arg1 toFrame:(CGRect)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_updateSphericalPhotoViewZoomAndPanCapabilities;
-(CGRect)_miniRectForSphericalPhotoView;
-(void)load360PhotoIfNeededComponent;
-(void)_initiateSphericalPhotoView;
-(void)_markSphericalTimerCompleted;
-(void)_markSphericalPhotoDownloaded:(id)arg1 ;
-(void)_updateFaceboxes;
-(void)_resetAllTags;
-(void)_updateSpinner;
-(void)setTaggingSearchController:(FBPhotoTaggingSearchController *)arg1 ;
-(void)_updateTaggingSearchControllerForTarget;
-(id)simpleSpinnerView;
-(void)handleHideTapToTagLabelTimeout:(id)arg1 ;
-(void)setHideTapToTagLabelTimer:(NSTimer *)arg1 ;
-(void)_consistentNewTagsEdgesToMemPhoto:(id)arg1 ;
-(void)setSpinnerDisplayTime:(NSDate *)arg1 ;
-(void)_delegateDidSetTags;
-(void)_updateLivePhotoBadgeView;
-(void)setViewTagMode:(unsigned long long)arg1 ;
-(void)_dismissTagSuggestionForFaceboxesEdge:(id)arg1 photoFBID:(id)arg2 ;
-(void)removeLocalTagsEdge:(id)arg1 ;
-(void)_logTagDeleteEvent:(id)arg1 fromPhotoFBID:(id)arg2 photoOwner:(id)arg3 taggedUser:(id)arg4 viewerFBID:(id)arg5 ;
-(void)tagDecoratorNeedsResetFaceboxes:(id)arg1 ;
-(void)_fetchTagSuggestionsIfNeeded;
-(void)_updateFaceboxConfiguration;
-(id)getLoadingIndicatorView;
-(BOOL)_shouldShowSpinner;
-(void)_createLivePhotoBadgeViewIfNeeded;
-(void)_logTagSuggestionDismissEvent:(id)arg1 photoFBID:(id)arg2 faceboxFBID:(id)arg3 tagSuggestionFBID:(id)arg4 ;
-(void)_logDisplayPhoto:(id)arg1 imageFlag:(unsigned long long)arg2 acceptable:(BOOL)arg3 ;
-(void)_showRetryButton;
-(id)tagAnalyticsModule;
-(void)zoomingPhotoViewDidLayoutSubviews:(id)arg1 ;
-(void)tagDecorator:(id)arg1 didRemoveTagsEdge:(id)arg2 ;
-(void)tagDecorator:(id)arg1 didTapTagsEdge:(id)arg2 ;
-(void)tagDecorator:(id)arg1 didTapFaceboxesEdge:(id)arg2 ;
-(id)tagDecorator:(id)arg1 addFaceRect:(CGRect)arg2 toAvatar:(id)arg3 text:(id)arg4 loggingSuffix:(id)arg5 ;
-(void)tagDecorator:(id)arg1 didRejectTagForFaceboxesEdge:(id)arg2 ;
-(void)tagDecoratorTaggingInterfaceWillDisappear:(id)arg1 ;
-(void)tagDecoratorTaggingInterfaceDidDisappear:(id)arg1 ;
-(void)tagDecoratorTaggingInterfaceWillAppear:(id)arg1 ;
-(BOOL)tagDecorator:(id)arg1 shouldShowTagGuideForUser:(id)arg2 ;
-(BOOL)tagDecoratorCanShowNUX:(id)arg1 ;
-(void)didLoseCenterFocus;
-(void)showTags:(id)arg1 animated:(BOOL)arg2 ;
-(id<FBRichPhotoViewSpinnerLoggingDelegate>)spinnerLoggingDelegate;
-(BOOL)canEditTag;
-(id)getNewTags;
-(void)setNewTags:(NSSet *)arg1 ;
-(NSDate *)spinnerDisplayTime;
-(NSTimer *)hideTapToTagLabelTimer;
-(FBPhotoTaggingSearchController *)taggingSearchController;
-(void)livePhotoSupportingViewDidEndPlayback:(id)arg1 ;
-(void)livePhotoSupportingViewWillStartPlayback:(id)arg1 ;
-(void)livePhotoSupportingViewLoadingStateDidChange:(id)arg1 ;
-(BOOL)canSyncTaggables;
-(void)setDelegate:(id<FBRichPhotoViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(id<FBRichPhotoViewDelegate>)delegate;
-(void)setTarget:(FBMemModelObject*<FBQueriedNodeFieldsProtocol>)arg1 ;
-(FBMemModelObject*<FBQueriedNodeFieldsProtocol>)target;
-(void)willMoveToWindow:(id)arg1 ;
-(double)zoomScale;
-(void)setZoomScale:(double)arg1 ;
-(void)prepareForReuse;
-(id)progressView;
-(BOOL)isZoomed;
-(void)resetZoom:(BOOL)arg1 ;
-(void)setSessionID:(NSString *)arg1 ;
-(NSString *)sessionID;
-(void)setPhoto:(FBMemPhoto *)arg1 ;
-(FBMemPhoto *)photo;
-(void)_updatePhoto;
-(FBWebPhotoView *)photoView;
-(FBZoomingPhotoView *)zoomView;
-(void)_showSpinner;
-(void)_hideSpinner;
@end

