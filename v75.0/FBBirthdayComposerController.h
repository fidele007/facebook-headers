/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBComposerFlowDelegate.h>
#import <Facebook/FBGoodwillCelebrationPhotoSelectionDelegate.h>
#import <Facebook/FBComposerPublisherStatusListener.h>

@protocol FBNavigationCoordinator, FBBirthdayComposerControllerDelegate;
@class FBUserSession, NSString, FBGoodwillCelebrationPhotoSelectionController, FBMemPerson, FBComposerPublishTarget, FBPublisherManager, FBComposerPublisherStatusEventFilter, FBBirthdayPersonTextBoxComponent, FBMultiPickerVideoAttachment, FBMemGoodwillThrowbackPromotionFeedUnit;

@interface FBBirthdayComposerController : NSObject <FBComposerFlowDelegate, FBGoodwillCelebrationPhotoSelectionDelegate, FBComposerPublisherStatusListener> {

	FBUserSession* _session;
	id<FBNavigationCoordinator> _navigationCoordinator;
	NSString* _source;
	FBGoodwillCelebrationPhotoSelectionController* _photoSelectionController;
	FBMemPerson* _birthdayPerson;
	FBComposerPublishTarget* _birthdayPublishTarget;
	FBPublisherManager* _publisherManager;
	FBComposerPublisherStatusEventFilter* _publisherEventFilter;
	FBBirthdayPersonTextBoxComponent* _birthdayPersonTextBoxComponent;
	FBMultiPickerVideoAttachment* _birthdayVideoAttachment;
	FBMemGoodwillThrowbackPromotionFeedUnit* _unit;
	int _numOfPhotosPosted;
	BOOL _useSuggestedPhoto;
	BOOL _useNewlyUploadedPhoto;
	id<FBBirthdayComposerControllerDelegate> _delegate;
	NSString* _trackingModule;

}

@property (nonatomic,copy) NSString * trackingModule;                                               //@synthesize trackingModule=_trackingModule - In the implementation block
@property (assign,nonatomic,__weak) id<FBBirthdayComposerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startedPublishingPublisherData:(id)arg1 ;
-(void)attemptedPublicationOfPublisherData:(id)arg1 ;
-(void)failedPublishingPublisherData:(id)arg1 withError:(id)arg2 ;
-(void)failedPublishingAndWaitingForRetryPublisherData:(id)arg1 withError:(id)arg2 ;
-(void)terminallyFailedPublishingPublisherData:(id)arg1 withError:(id)arg2 ;
-(void)startedServerProcessingForUploadedPublication:(id)arg1 ;
-(void)successfullyPublishedPublisherData:(id)arg1 withResponse:(id)arg2 ;
-(void)cancelledPublishingPublisherData:(id)arg1 ;
-(void)pausedPublishingPublisherData:(id)arg1 ;
-(void)retriedPublishingPublisherData:(id)arg1 ;
-(void)startedWaitingForConnectivityForPublicationOfPublisherData:(id)arg1 ;
-(void)scheduledPublicationOfPublisherData:(id)arg1 atDate:(id)arg2 ;
-(void)publicationProgressedWithProgress:(double)arg1 forPublisherData:(id)arg2 ;
-(void)startedUploadingItemOfType:(int)arg1 withThumbnailImage:(id)arg2 forPublisherData:(id)arg3 ;
-(void)uploadQualityDidChange:(id)arg1 forPublisherData:(id)arg2 ;
-(void)canCancelPublishingOfPublisherData:(id)arg1 ;
-(void)cannotCancelPublishingOfPublisherData:(id)arg1 ;
-(void)composerCompletedWithResult:(id)arg1 ;
-(void)_openComposerForFeedPostWithPublishTarget:(id)arg1 startingStyleContext:(id)arg2 entryPointAnalyticsContext:(id)arg3 ;
-(void)_openPhotoSelectionController;
-(void)_openVideoCameraWithComposerEntryPointAnalyticsContext:(id)arg1 ;
-(void)_openPhotoEditorWithMediaAttachments:(id)arg1 entryPointAnalyticsContext:(id)arg2 ;
-(id)_composerPlaceholderText;
-(void)_openComposerWithBootstrapContent:(id)arg1 startingStyleContext:(id)arg2 animated:(BOOL)arg3 ;
-(id)_titleOverrideForSuggestedTab;
-(void)_openComposerWithPublishTarget:(id)arg1 imageAttachment:(id)arg2 entryPointAnalyticsContext:(id)arg3 animated:(BOOL)arg4 ;
-(void)goodwillCelebrationPhotoSelectionControllerDidCancel:(id)arg1 ;
-(void)goodwillCelebrationPhotoSelectionController:(id)arg1 didSelectPhoto:(id)arg2 ;
-(id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 trackingModule:(id)arg3 source:(id)arg4 ;
-(void)presentComposerWithBirthdayPerson:(id)arg1 birthdayComposerStyle:(unsigned long long)arg2 mediaAttachments:(id)arg3 unit:(id)arg4 entryPointAnalyticsContext:(id)arg5 ;
-(NSString *)trackingModule;
-(void)setTrackingModule:(NSString *)arg1 ;
-(void)setDelegate:(id<FBBirthdayComposerControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBBirthdayComposerControllerDelegate>)delegate;
@end

