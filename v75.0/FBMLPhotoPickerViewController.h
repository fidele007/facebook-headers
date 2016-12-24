/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMLTopLevelFragmentViewController.h>
#import <Facebook/FBMLPhotoGroupFragmentControllerDelegate.h>
#import <Facebook/FBMLPhotoPickerPhotosPermissionsViewDelegate.h>
#import <Facebook/FBMLNativeBridgeListener.h>

@protocol FBMLPhotoPickerViewControllerDelegate;
@class FBMLSession, FBMLPhotoPickerConfig, NSArray, SRVerticalStackFragmentController, UIView, UILabel, FBMLPhotoPickerPhotoPermissionsView, FBMLNativeBridgeSubscription, NSSet, FBMLSentinelToken, NSString;

@interface FBMLPhotoPickerViewController : FBMLTopLevelFragmentViewController <FBMLPhotoGroupFragmentControllerDelegate, FBMLPhotoPickerPhotosPermissionsViewDelegate, FBMLNativeBridgeListener> {

	FBMLSession* _session;
	FBMLPhotoPickerConfig* _config;
	BOOL _hasLoadedDataFromNativeDataSource;
	NSArray* _photoGroups;
	SRVerticalStackFragmentController* _contentFragment;
	unsigned long long _selectedPhotoCount;
	BOOL _hasAppeared;
	BOOL _hasRequestedPhotosPermission;
	UIView* _noPhotoWrapperView;
	UILabel* _noPhotoLabel;
	FBMLPhotoPickerPhotoPermissionsView* _photoPermissionsView;
	BOOL _waitingForPhotosPermission;
	FBMLNativeBridgeSubscription* _nativeBridgeSubscription;
	NSSet* _previousPhotoSelectionsToEnforceNumberOfPhotoSelection;
	BOOL _canContinueWithoutSelection;
	id<FBMLPhotoPickerViewControllerDelegate> _delegate;
	FBMLSentinelToken* _sentinelToken;

}

@property (nonatomic,copy) FBMLSentinelToken * sentinelToken;                                        //@synthesize sentinelToken=_sentinelToken - In the implementation block
@property (assign,nonatomic,__weak) id<FBMLPhotoPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL canContinueWithoutSelection;                                       //@synthesize canContinueWithoutSelection=_canContinueWithoutSelection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_latestPhotoDateFromPhotos:(id)arg1 ;
-(void)_onCancel;
-(BOOL)canContinueWithoutSelection;
-(void)setCanContinueWithoutSelection:(BOOL)arg1 ;
-(void)nativeDataSourceChanged;
-(id)initWithMomentsSession:(id)arg1 config:(id)arg2 ;
-(FBMLSentinelToken *)sentinelToken;
-(void)setSentinelToken:(FBMLSentinelToken *)arg1 ;
-(void)photoGroupFragmentControllerDidUpdatePhotoSelection:(id)arg1 ;
-(void)photoPermissionsViewDidTapButton:(id)arg1 ;
-(void)_clearSelections;
-(void)_onNext;
-(void)_configureNavigationBarButtons;
-(void)_scrollToAssetIfNeeded;
-(void)_waitForPhotosPermission;
-(void)_enforceSinglePhotoSelectionIfNecessary;
-(void)_enforceMaxNumberOfPhotoSelectionsIfNecessary;
-(void)_showMaxSelectionsAlert;
-(void)_configureNoPhotoHidden;
-(void)_reloadPhotos;
-(void)_updateToPhotoGroups:(id)arg1 updateItems:(id)arg2 sameObjectMappingItems:(id)arg3 ;
-(void)_completeWaitingForPhotosPermission;
-(void)setDelegate:(id<FBMLPhotoPickerViewControllerDelegate>)arg1 ;
-(id<FBMLPhotoPickerViewControllerDelegate>)delegate;
-(BOOL)prefersStatusBarHidden;
-(long long)preferredStatusBarUpdateAnimation;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_reloadData;
-(void)resetState;
@end

