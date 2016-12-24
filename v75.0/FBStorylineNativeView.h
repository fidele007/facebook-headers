/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBStorylineEditorSelectionBarDelegate.h>
#import <Facebook/FBStorylineMoodPickerDelegate.h>
#import <Facebook/FBStorylinePhotosEditorViewDelegate.h>
#import <Facebook/FBKeyboardObserverDelegate.h>
#import <UIKit/UITabBarDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Facebook/FBDirectionalPanGestureRecognizerDelegate.h>
#import <Facebook/FBStorylineMediaControlOverlayViewDelegate.h>
#import <Facebook/FBStorylineMoreTabDelegate.h>
#import <Facebook/FBStorylineTaggingEditorDelegate.h>
#import <Facebook/FBStorylineNativePlayerControllerDelegate.h>
#import <Facebook/FBStorylineEmbeddedPickerViewDelegate.h>
#import <Facebook/FBStorylineMoodCategoryListViewDelegate.h>
#import <Facebook/FBStorylineMoodCategoryDetailViewDelegate.h>
#import <Facebook/FBStorylineViewProtocol.h>
#import <Facebook/FBStorylineVideoExporterDelegate.h>

@protocol FBStorylineViewDelegate;
@class UIColor, FBUserSession, FBComposerMoviesStandardExperimentContext, FBStorylineNativePlayerController, FBStorylineEditorSelectionBar, UIView, FBStorylinePhotosEditorView, FBStorylineEmbeddedPickerView, FBStorylineMoreTab, FBStorylineTitleEditorView, FBStorylineVideoFramesEditorView, FBStorylineTaggingEditor, FBStorylineCropEditorView, NSString, NSArray, FBKeyboardObserver, FBDirectionalPanGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer, FBStorylineNativeViewMetrics, FBStorylineRenderingIndicatorView, FBStorylineMediaTrashBinOverlayView, FBStorylineMediaControlOverlayView, FBNuxTooltip, FBNuxStepChainController, FBCache, FBStorylineCollaborator, FBStorylineMoodPicker, FBStorylineMoodCategoryDetailView, FBStorylineMoodCategoryListView, FBStorylineMoodsData;

@interface FBStorylineNativeView : UIView <FBStorylineEditorSelectionBarDelegate, FBStorylineMoodPickerDelegate, FBStorylinePhotosEditorViewDelegate, FBKeyboardObserverDelegate, UITabBarDelegate, UITextFieldDelegate, FBDirectionalPanGestureRecognizerDelegate, FBStorylineMediaControlOverlayViewDelegate, FBStorylineMoreTabDelegate, FBStorylineTaggingEditorDelegate, FBStorylineNativePlayerControllerDelegate, FBStorylineEmbeddedPickerViewDelegate, FBStorylineMoodCategoryListViewDelegate, FBStorylineMoodCategoryDetailViewDelegate, FBStorylineViewProtocol, FBStorylineVideoExporterDelegate> {

	FBUserSession* _session;
	FBComposerMoviesStandardExperimentContext* _moviesExperiment;
	FBStorylineNativePlayerController* _playerController;
	FBStorylineEditorSelectionBar* _editorSectionSelectionBar;
	long long _currentSection;
	UIView* _editorContainer;
	FBStorylinePhotosEditorView* _photosEditor;
	FBStorylineEmbeddedPickerView* _photoPicker;
	FBStorylineMoreTab* _moreTab;
	FBStorylineTitleEditorView* _titleEditorView;
	FBStorylineVideoFramesEditorView* _framesEditor;
	FBStorylineTaggingEditor* _taggingEditor;
	FBStorylineCropEditorView* _cropEditor;
	BOOL _cancelledEditingTitle;
	NSString* _launchSurface;
	NSString* _title;
	NSString* _sessionID;
	NSString* _defaultMoodID;
	NSArray* _assets;
	NSArray* _mediaAttachments;
	NSArray* _moodsConfiguration;
	FBKeyboardObserver* _keyboardObserver;
	double _yOffsetOfFrameBeforeKeyboardShift;
	BOOL _keyboardIsShowing;
	FBDirectionalPanGestureRecognizer* _panGestureRecognizer;
	UIPanGestureRecognizer* _playerPanGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	FBStorylineNativeViewMetrics* _metrics;
	FBStorylineRenderingIndicatorView* _renderingIndicatorView;
	FBStorylineMediaTrashBinOverlayView* _trashBinOverlayView;
	FBStorylineMediaControlOverlayView* _controlOverlayView;
	long long _selectedIndex;
	FBNuxTooltip* _toolTip;
	FBNuxStepChainController* _nuxStepChainController;
	BOOL _videoEditingMode;
	BOOL _videoMuted;
	FBStorylineEditorSelectionBar* _cancelOrConfirmEditingBar;
	FBCache* _videoAssetCache;
	NSArray* _taggedCollaborators;
	FBStorylineCollaborator* _taggedSelf;
	double _beginPlayerHeight;
	double _playerWidth;
	BOOL _shouldRespondToPanGesture;
	BOOL _isPushingPlayerView;
	BOOL _pickerPermissionGranted;
	UIView* _moodPickerContainerView;
	FBStorylineMoodPicker* _moodPicker;
	FBStorylineMoodCategoryDetailView* _categoryDetailView;
	FBStorylineMoodCategoryListView* _categoryListView;
	FBStorylineMoodsData* _moodsData;
	BOOL _shouldTrimPopularMoods;
	unsigned long long _popularMoodsCount;
	id<FBStorylineViewDelegate> _delegate;
	double _playerHeight;
	long long _moodPickerState;
	NSString* _selectedMoodKey;

}

@property (assign,nonatomic) double playerHeight;                                               //@synthesize playerHeight=_playerHeight - In the implementation block
@property (assign,nonatomic) long long moodPickerState;                                         //@synthesize moodPickerState=_moodPickerState - In the implementation block
@property (nonatomic,copy) NSString * selectedMoodKey;                                          //@synthesize selectedMoodKey=_selectedMoodKey - In the implementation block
@property (nonatomic,retain) FBStorylineNativePlayerController * playerController;              //@synthesize playerController=_playerController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBStorylineViewDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * storylineViewBackgroundColor; 
+(CGSize)_calculatePlayerSize:(double)arg1 ;
-(void)startObservingKeyboardNotifications;
-(void)stopObservingKeyboardNotifications;
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)storylineEmbeddedPickerViewPermissionGranted:(id)arg1 ;
-(void)storylineEmbeddedPickerViewDidShowPermissionView:(id)arg1 ;
-(void)storylineEmbeddedPickerView:(id)arg1 didSelectMediaAssetAttachments:(id)arg2 fromSource:(long long)arg3 currentPhotoAssetShown:(id)arg4 ;
-(void)storylineEmbeddedPickerView:(id)arg1 didSelectAssetWithID:(id)arg2 wasSelected:(BOOL)arg3 selectedMediaAttachments:(id)arg4 ;
-(void)storylineEmbeddedPickerView:(id)arg1 didScroll:(id)arg2 ;
-(void)storylineEmbeddedPickerView:(id)arg1 scrollViewDidEndDecelerating:(id)arg2 ;
-(void)storylinePhotosEditorView:(id)arg1 didSelectAssetAtIndex:(long long)arg2 ;
-(void)storylinePhotosEditorView:(id)arg1 didDeselectAssetAtIndex:(long long)arg2 ;
-(void)storylinePhotosEditorView:(id)arg1 assetForAssetID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)storylinePhotosEditorView:(id)arg1 didDeletePhotoAtIndex:(long long)arg2 ;
-(void)storylinePhotosEditorViewDidRequestToAddPhotos:(id)arg1 ;
-(void)storylinePhotosEditorViewDidStartReordering:(id)arg1 ;
-(void)storylinePhotosEditorView:(id)arg1 didMovePhotoAtIndex:(long long)arg2 toIndex:(long long)arg3 deleteItemAtIndexAfterReorder:(long long)arg4 ;
-(void)storylineEditorSelectionBar:(id)arg1 didSelectItem:(id)arg2 ;
-(void)storylineTaggingEditor:(id)arg1 didTapCollaborator:(id)arg2 ;
-(void)storylineTaggingEditor:(id)arg1 didUpdateSuggestedTaggedCollaborators:(id)arg2 ;
-(void)storylineTaggingEditorDidTapTagButton:(id)arg1 ;
-(void)_handlePanning:(id)arg1 ;
-(void)storylineNativePlayerControllerOnExporterCreation:(id)arg1 ;
-(NSString *)selectedMoodKey;
-(void)storylineNativePlayerControllerDidTapShare:(id)arg1 ;
-(void)storylineNativePlayerController:(id)arg1 didUpdateAssetMetadata:(id)arg2 ;
-(void)storylineVideoExporterProgressDidUpdate:(float)arg1 ;
-(void)storylineVideoExporterProgressDidCancel;
-(void)storylineVideoExporterProgressDidFinish:(id)arg1 ;
-(void)_handlePanningOnPreview:(id)arg1 ;
-(double)_getEditorSelectionBarHeight;
-(void)_createVideoEditingBar;
-(void)_deleteSelectedAsset;
-(void)_disableScrollsToTopPropertyOnAllSubviewsOf:(id)arg1 ;
-(void)_createMoodPickers;
-(void)_createPhotosEditor;
-(void)_createTitleEditor;
-(void)_createFramesEditor;
-(void)_createCropEditor;
-(void)_createTaggingEditor;
-(void)_createMoreTab;
-(void)_createPopularMoodPickers;
-(void)_createCategoryListView;
-(void)_createCategoryDetailView;
-(id)_parseMoodsFromConfiguration:(id)arg1 ;
-(void)setMoodPickerState:(long long)arg1 ;
-(id)heightAnimation;
-(void)_resetNativePlayerWithBlurOverlay;
-(void)setSelectedMoodKey:(NSString *)arg1 ;
-(void)_resetNativePlayer;
-(double)playerHeight;
-(void)setPlayerHeight:(double)arg1 ;
-(void)_updateSelectedMediaAttachments;
-(void)_createEditors;
-(void)_createEdtiorBar;
-(void)_updateMoodsUI;
-(void)_resetViewState;
-(void)_startNativePlayer;
-(id)_makeVideoBundleWithShouldAutoplay:(BOOL)arg1 ;
-(void)replaceAssets:(id)arg1 resetPlayer:(BOOL)arg2 ;
-(void)confirmEditingTitle;
-(void)_cancelImageCropping;
-(void)_confirmImageCropping;
-(void)_cancelVideoEditing;
-(void)_confirmVideoEditing;
-(void)cancelEditingTitle;
-(void)cancelEditingTaggingList;
-(void)confirmEditingTaggingList;
-(void)_deleteAssetAtIndex:(long long)arg1 ;
-(void)_transitionToVideoEditModeWithAsset:(id)arg1 assetID:(id)arg2 startTime:(double)arg3 playDuration:(double)arg4 muted:(BOOL)arg5 ;
-(void)_updateNativePlayerWithAsset:(id)arg1 originalAssetID:(id)arg2 ;
-(void)_showToolTipWithMinimumPhotoCount:(unsigned long long)arg1 onButton:(id)arg2 ;
-(void)_updateExportProgress:(float)arg1 ;
-(void)_cancelExport;
-(void)_finishExport:(id)arg1 ;
-(void)storylineMoodPicker:(id)arg1 didPickMoodWithKey:(id)arg2 moodName:(id)arg3 ;
-(void)storylineMoodPickerDidTapCategoryCell:(id)arg1 ;
-(void)storylineMediaControlOverlayView:(id)arg1 didUpdateCurrentPlayTime:(double)arg2 ;
-(void)storylineMediaControlOverlayView:(id)arg1 didChangeMuteState:(BOOL)arg2 ;
-(void)storylineMediaControlOverlayViewDidTapCropButton:(id)arg1 ;
-(void)storylineMoreTab:(id)arg1 didSelectItem:(long long)arg2 ;
-(void)moodCategoryListView:(id)arg1 didSelectCategory:(id)arg2 ;
-(void)moodCategoryListViewDidClickBackButton:(id)arg1 ;
-(void)moodCategoryDetailView:(id)arg1 didSelectMood:(id)arg2 ;
-(void)moodCategoryDetailViewDidClickBackButton:(id)arg1 ;
-(void)replaceTaggedCollaborators:(id)arg1 shouldRestartPlayer:(BOOL)arg2 ;
-(void)prepareForLaunchFromSurface:(id)arg1 withAssets:(id)arg2 mediaAttachments:(id)arg3 selectingAssetIds:(id)arg4 collaborators:(id)arg5 title:(id)arg6 moodsConfiguration:(id)arg7 sessionID:(id)arg8 defaultMoodID:(id)arg9 ;
-(void)playPreviewVideoFromBeginning;
-(void)stopPreviewVideo;
-(void)updateMoodsData:(id)arg1 ;
-(void)cancelEditingPhotos;
-(void)showRenderingIndicatorView;
-(UIColor *)storylineViewBackgroundColor;
-(void)setStorylineViewBackgroundColor:(UIColor *)arg1 ;
-(id)initWithNativePlayer:(id)arg1 session:(id)arg2 moodsConfiguration:(id)arg3 ;
-(long long)moodPickerState;
-(FBStorylineNativePlayerController *)playerController;
-(void)setPlayerController:(FBStorylineNativePlayerController *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBStorylineViewDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(id<FBStorylineViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(CGRect)previewFrame;
-(void)_handleTap:(id)arg1 ;
-(void)tearDown;
-(void)_updateTitle:(id)arg1 ;
@end

