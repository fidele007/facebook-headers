/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMessageOutgoingMediaAttachmentPreparing.h>

@protocol MNAuthenticationManager;
@class FBMessageAudioOutgoingAttachmentContent, FBMessageOutgoingAttribution, NSString, FBMediaUploadHandler, FBMessageAudioAttachmentPreparationListenerAnnouncer, FBMessageAudioAttachmentPreparationLogger, FBMessageAudioAttachmentStreamingPreprationListenerAnnouncer, NSDictionary;

@interface FBMessageOutgoingAudioAttachmentPreparer : NSObject <FBMessageOutgoingMediaAttachmentPreparing> {

	FBMessageAudioOutgoingAttachmentContent* _audioAttachmentContent;
	FBMessageOutgoingAttribution* _outgoingAttribution;
	NSString* _parentMessageOfflineId;
	id<MNAuthenticationManager> _authManager;
	FBMediaUploadHandler* _uploadHandler;
	FBMessageAudioAttachmentPreparationListenerAnnouncer* _preparationAnnouncer;
	FBMessageAudioAttachmentPreparationLogger* _preparationLogger;
	FBMessageAudioAttachmentStreamingPreprationListenerAnnouncer* _mediaPreparationAnnouncer;
	NSDictionary* _extraLoggingData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAudioAttachmentContent:(id)arg1 outgoingAttribution:(id)arg2 extraLoggingData:(id)arg3 parentMessageOfflineId:(id)arg4 authManager:(id)arg5 analytics:(id)arg6 uploadHandler:(id)arg7 audioPreparationListener:(id)arg8 ;
-(NSString *)description;
-(id)startWithCompletion:(/*^block*/id)arg1 ;
@end

