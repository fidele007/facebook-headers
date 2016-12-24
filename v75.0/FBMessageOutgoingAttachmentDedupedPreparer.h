/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMessageOutgoingAttachmentPreparing.h>

@protocol OS_dispatch_queue, FBMessageOutgoingAttachmentPreparing;
@class NSObject, NSMutableDictionary, FBCache, NSString;

@interface FBMessageOutgoingAttachmentDedupedPreparer : NSObject <FBMessageOutgoingAttachmentPreparing> {

	NSObject*<OS_dispatch_queue> _queue;
	id<FBMessageOutgoingAttachmentPreparing> _preparer;
	NSMutableDictionary* _preparationInfoByInput;
	NSMutableDictionary* _prepartionRequestInfoById;
	FBCache* _resultCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)prepareOutgoingAttachment:(id)arg1 attachmentContext:(id)arg2 outgoingAttribution:(id)arg3 queue:(id)arg4 progress:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(id)initWithQueue:(id)arg1 attachmentPreparer:(id)arg2 ;
-(void)_cancelPreparation:(id)arg1 ;
-(void)_startPreparationId:(id)arg1 input:(id)arg2 output:(id)arg3 ;
-(id)_findCachedResult:(id)arg1 ;
-(void)_didProgressForInput:(id)arg1 content:(id)arg2 progress:(double)arg3 ;
-(void)_didCompleteForInput:(id)arg1 withResult:(id)arg2 ;
-(void)_cancelPreparationInternal:(id)arg1 ;
-(void)_removePreparationWithInput:(id)arg1 shouldCancel:(BOOL)arg2 ;
-(id)initWithAttachmentPreparer:(id)arg1 ;
@end

