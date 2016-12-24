/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSError, MNMessageSendBatchingInfo;

@interface MNMessageSendingContext : FBValueObject <NSCopying> {

	BOOL _canMessageSendViaExtension;
	BOOL _extensionNeedsExternalAttachmentPreparation;
	BOOL _extensionHandlesAutoRetry;
	BOOL _canMessageSendViaMQTT;
	BOOL _hasNetworkConnection;
	BOOL _mqttStatusEligibleForSend;
	NSError* _previousSendError;
	MNMessageSendBatchingInfo* _batchingInfo;

}

@property (nonatomic,readonly) BOOL canMessageSendViaExtension;                               //@synthesize canMessageSendViaExtension=_canMessageSendViaExtension - In the implementation block
@property (nonatomic,readonly) BOOL extensionNeedsExternalAttachmentPreparation;              //@synthesize extensionNeedsExternalAttachmentPreparation=_extensionNeedsExternalAttachmentPreparation - In the implementation block
@property (nonatomic,readonly) BOOL extensionHandlesAutoRetry;                                //@synthesize extensionHandlesAutoRetry=_extensionHandlesAutoRetry - In the implementation block
@property (nonatomic,readonly) BOOL canMessageSendViaMQTT;                                    //@synthesize canMessageSendViaMQTT=_canMessageSendViaMQTT - In the implementation block
@property (nonatomic,readonly) BOOL hasNetworkConnection;                                     //@synthesize hasNetworkConnection=_hasNetworkConnection - In the implementation block
@property (nonatomic,readonly) BOOL mqttStatusEligibleForSend;                                //@synthesize mqttStatusEligibleForSend=_mqttStatusEligibleForSend - In the implementation block
@property (nonatomic,copy,readonly) NSError * previousSendError;                              //@synthesize previousSendError=_previousSendError - In the implementation block
@property (nonatomic,copy,readonly) MNMessageSendBatchingInfo * batchingInfo;                 //@synthesize batchingInfo=_batchingInfo - In the implementation block
-(BOOL)mqttStatusEligibleForSend;
-(id)initWithCanMessageSendViaExtension:(BOOL)arg1 extensionNeedsExternalAttachmentPreparation:(BOOL)arg2 extensionHandlesAutoRetry:(BOOL)arg3 canMessageSendViaMQTT:(BOOL)arg4 hasNetworkConnection:(BOOL)arg5 mqttStatusEligibleForSend:(BOOL)arg6 previousSendError:(id)arg7 batchingInfo:(id)arg8 ;
-(BOOL)canMessageSendViaExtension;
-(BOOL)extensionNeedsExternalAttachmentPreparation;
-(BOOL)extensionHandlesAutoRetry;
-(BOOL)canMessageSendViaMQTT;
-(BOOL)hasNetworkConnection;
-(NSError *)previousSendError;
-(MNMessageSendBatchingInfo *)batchingInfo;
@end

