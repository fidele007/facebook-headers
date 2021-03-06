/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBMessageOutgoingMediaAttachmentOperationFactoryProtocol.h>

@protocol OS_dispatch_queue;
@class FBMessageOutgoingAttachmentPreparerFactory, FBMessageOutgoingAttachmentWrapperPreparerFactoryInternal, NSMutableDictionary, FBCache, NSObject;

@interface FBMessageOutgoingMediaAttachmentDedupedOperationFactory : NSObject <FBMessageOutgoingMediaAttachmentOperationFactoryProtocol> {

	FBMessageOutgoingAttachmentPreparerFactory* _preparerFactory;
	FBMessageOutgoingAttachmentWrapperPreparerFactoryInternal* _wrapperPreparerFactory;
	NSMutableDictionary* _preparerByMediaKey;
	mutex _mutex;
	FBCache* _resultCache;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithPreparerFactory:(id)arg1 wrapperPreparerFactory:(id)arg2 ;
-(void)_cleanupWithMediaDedupeKey:(id)arg1 cacheResult:(id)arg2 ;
-(id)operationForSingleContent:(id)arg1 attachmentContext:(id)arg2 outgoingAttribution:(id)arg3 extraLoggingData:(id)arg4 queue:(id)arg5 progressBlock:(/*^block*/id)arg6 ;
-(id)initWithPreparerFactory:(id)arg1 ;
@end

