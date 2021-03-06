/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBFacecastVideoSummaryVideoViewDelegate.h>
#import <Facebook/FBFacecastEndScreenProtocol.h>

@protocol FBHumanQueriedFundraiserToCharityFieldsProtocol, FBFacecastEndScreenViewControllerDelegate, FBServiceTransactionMutating, OS_dispatch_source;
@class FBUserSession, NSString, FBScenePath, FBFacecastBroadcastTipJarModel, FBMemModelObject, FBFacecastInfoCard, FBFacecastSuccessViewType, NSArray, NSObject, FBFacecastSuccessView;

@interface FBFacecastSuccessViewController : UIViewController <FBFacecastVideoSummaryVideoViewDelegate, FBFacecastEndScreenProtocol> {

	FBUserSession* _userSession;
	unsigned long long _targetType;
	SCD_Struct_FB280 _dvrConfig;
	BOOL _shouldShowDeleteVideo;
	BOOL _shownUploadWarning;
	double _videoDuration;
	NSString* _profileID;
	FBScenePath* _scenePath;
	long long _uploadVideoBehavior;
	FBFacecastBroadcastTipJarModel* _tipJarModel;
	FBMemModelObject*<FBHumanQueriedFundraiserToCharityFieldsProtocol> _fundraiser;
	BOOL _showSaveVideoView;
	BOOL _hasInfoText;
	BOOL _completedGraphQLRequest;
	BOOL _shouldUploadVideoSavedValue;
	id<FBFacecastEndScreenViewControllerDelegate> _delegate;
	FBFacecastInfoCard* _infoCard;
	FBFacecastSuccessViewType* _viewType;
	NSString* _videoID;
	NSArray* _viewershipDataPoints;
	id<FBServiceTransactionMutating> _currentTransaction;
	NSObject*<OS_dispatch_source> _timer;

}

@property (nonatomic,retain) FBFacecastSuccessView * view; 
@property (nonatomic,copy) NSString * videoID;                                                           //@synthesize videoID=_videoID - In the implementation block
@property (nonatomic,copy) NSArray * viewershipDataPoints;                                               //@synthesize viewershipDataPoints=_viewershipDataPoints - In the implementation block
@property (nonatomic,retain) id<FBServiceTransactionMutating> currentTransaction;                        //@synthesize currentTransaction=_currentTransaction - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                                        //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) BOOL hasInfoText;                                                           //@synthesize hasInfoText=_hasInfoText - In the implementation block
@property (assign,nonatomic) BOOL completedGraphQLRequest;                                               //@synthesize completedGraphQLRequest=_completedGraphQLRequest - In the implementation block
@property (assign,nonatomic) BOOL shouldUploadVideoSavedValue;                                           //@synthesize shouldUploadVideoSavedValue=_shouldUploadVideoSavedValue - In the implementation block
@property (nonatomic,retain) FBFacecastInfoCard * infoCard;                                              //@synthesize infoCard=_infoCard - In the implementation block
@property (assign,nonatomic) BOOL showSaveVideoView;                                                     //@synthesize showSaveVideoView=_showSaveVideoView - In the implementation block
@property (nonatomic,retain) FBFacecastSuccessViewType * viewType;                                       //@synthesize viewType=_viewType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBFacecastEndScreenViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSString *)videoID;
-(void)setVideoID:(NSString *)arg1 ;
-(void)_didReceiveDonationSummary:(id)arg1 ;
-(void)setInfoCard:(FBFacecastInfoCard *)arg1 ;
-(NSArray *)viewershipDataPoints;
-(void)setViewershipDataPoints:(NSArray *)arg1 ;
-(void)_deleteSwitchValueChanged:(id)arg1 ;
-(BOOL)showSaveVideoView;
-(BOOL)_shouldUploadDVRAutomatically;
-(BOOL)_uploadSwitchDefaultValue;
-(void)_uploadSwitchValueChanged:(id)arg1 ;
-(FBFacecastInfoCard *)infoCard;
-(void)_refreshUploadVideoViewState;
-(void)_videoQueryDidSucceedWithVideo:(id)arg1 ;
-(void)setCompletedGraphQLRequest:(BOOL)arg1 ;
-(void)_showIfReady;
-(void)_startVideoPolling;
-(void)setHasInfoText:(BOOL)arg1 ;
-(BOOL)hasInfoText;
-(BOOL)completedGraphQLRequest;
-(BOOL)_shouldUploadVideo;
-(void)_queryForVideo;
-(void)summaryVideoViewDidChangeEdits:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 videoID:(id)arg2 profileID:(id)arg3 targetType:(unsigned long long)arg4 videoDuration:(double)arg5 viewershipDataPoints:(id)arg6 dvrConfig:(SCD_Struct_FB280)arg7 shouldShowDeleteVideo:(BOOL)arg8 scenePath:(id)arg9 fundraiser:(id)arg10 ;
-(void)setShowSaveVideoView:(BOOL)arg1 ;
-(void)setViewType:(FBFacecastSuccessViewType *)arg1 ;
-(BOOL)shouldUploadVideoSavedValue;
-(void)setShouldUploadVideoSavedValue:(BOOL)arg1 ;
-(void)setDelegate:(id<FBFacecastEndScreenViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBFacecastEndScreenViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(FBFacecastSuccessViewType *)viewType;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
-(void)_doneButtonTapped;
-(id<FBServiceTransactionMutating>)currentTransaction;
-(void)setCurrentTransaction:(id<FBServiceTransactionMutating>)arg1 ;
@end

