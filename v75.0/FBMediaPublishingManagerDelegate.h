/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMediaPublishingManagerDelegate <NSObject>
@required
-(void)notifyFlowSucceedWithResult:(id)arg1;
-(void)notifyAttemptFailureWithError:(id)arg1;
-(void)mediaPublishingManager:(id)arg1 wantsToRetryPublishingWithSource:(unsigned long long)arg2 error:(id)arg3;
-(void)mediaPublishingManager:(id)arg1 startedUploadingItemOfType:(int)arg2 thumbnail:(id)arg3;
-(void)didChangeUploadQualityInMediaPublishingManager:(id)arg1;
-(void)mediaPublishingManagerWantsToEnablePublicationCancellation:(id)arg1;
-(void)mediaPublishingManagerWantsToDisablePublicationCancellation:(id)arg1;
-(void)publishUploadedMediaAttachments;
-(void)reportsCurrentProgress:(double)arg1;

@end

