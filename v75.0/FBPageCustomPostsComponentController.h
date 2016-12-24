/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKComponentController.h>
#import <Facebook/FBPopoverControllerDelegate.h>
#import <Facebook/FBComposerPublisherStatusListener.h>

@class FBPopoverActionSheet, FBActionSheetButtonItem, NSString;

@interface FBPageCustomPostsComponentController : CKComponentController <FBPopoverControllerDelegate, FBComposerPublisherStatusListener> {

	BOOL _didInit;
	FBPopoverActionSheet* _popoverActionSheet;
	FBActionSheetButtonItem* _editButtonItem;
	FBActionSheetButtonItem* _viewEditHistoryButtonItem;
	FBActionSheetButtonItem* _rescheduleButtonItem;
	FBActionSheetButtonItem* _postNowButtonItem;
	FBActionSheetButtonItem* _deleteButtonItem;

}

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
-(id)story;
-(void)didTapEditButton:(id)arg1 ;
-(void)didTapComponent:(id)arg1 ;
-(void)didTapViewEditHistoryButton:(id)arg1 ;
-(void)didTapRescheduleButton:(id)arg1 ;
-(void)didTapPublishNowButton:(id)arg1 ;
-(void)didTapDeleteButton:(id)arg1 ;
-(void)_doInitialize;
-(id)getButtonForAction:(unsigned long long)arg1 ;
-(void)_logEventWithActionType:(long long)arg1 statusType:(long long)arg2 ;
-(void)didSucceedPublishRequest;
-(void)didFailPublishRequestWithError:(id)arg1 ;
-(void)dealloc;
-(id)context;
@end

