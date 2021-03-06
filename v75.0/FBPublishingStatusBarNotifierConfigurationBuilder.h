/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBPublishingStatusBarNotifierConfigurationBuilder : NSObject {

	double _numberOfSecondsToShowPostingMessage;
	double _numberOfSecondsToShowAnyCompletedMessage;
	double _numberOfSecondsToShowFailedMessage;
	double _numberOfSecondsToShowFailedTapForMoreMessage;
	double _numberOfSecondsToShowNotifyOnCompletionMessage;
	double _numberOfSecondsToShowNotifyOnSavedDraft;
	NSString* _localizedLabelForStartedPublishing;
	NSString* _localizedLabelForNotifyOnCompletion;
	NSString* _localizedLabelForSuccessfulPublish;
	NSString* _localizedLabelForCancelledPublish;
	NSString* _localizedLabelForFailedPublish;
	NSString* _localizedLabelForFailedTapForMorePublish;
	NSString* _localizedLabelForNotifyOnSavedDraft;

}
+(id)publishingStatusBarNotifierConfigurationFromExistingPublishingStatusBarNotifierConfiguration:(id)arg1 ;
+(id)publishingStatusBarNotifierConfiguration;
-(id)withLocalizedLabelForSuccessfulPublish:(id)arg1 ;
-(id)withLocalizedLabelForStartedPublishing:(id)arg1 ;
-(id)withLocalizedLabelForNotifyOnCompletion:(id)arg1 ;
-(id)withLocalizedLabelForFailedPublish:(id)arg1 ;
-(id)withLocalizedLabelForCancelledPublish:(id)arg1 ;
-(id)withNumberOfSecondsToShowPostingMessage:(double)arg1 ;
-(id)withNumberOfSecondsToShowAnyCompletedMessage:(double)arg1 ;
-(id)withNumberOfSecondsToShowFailedMessage:(double)arg1 ;
-(id)withNumberOfSecondsToShowFailedTapForMoreMessage:(double)arg1 ;
-(id)withNumberOfSecondsToShowNotifyOnCompletionMessage:(double)arg1 ;
-(id)withNumberOfSecondsToShowNotifyOnSavedDraft:(double)arg1 ;
-(id)withLocalizedLabelForFailedTapForMorePublish:(id)arg1 ;
-(id)withLocalizedLabelForNotifyOnSavedDraft:(id)arg1 ;
-(id)build;
@end

