/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMessageAttachmentPhotoQualityFetching.h>

@protocol FBPersistentKeyValueStoreProtocol, OS_dispatch_queue, FBMessageAttachmentPhotoQualityFetching;
@class NSObject, NSString;

@interface FBMessageAttachmentPhotoQualityDiskFetcher : NSObject <FBMessageAttachmentPhotoQualityFetching> {

	id<FBPersistentKeyValueStoreProtocol> _persistentKeyValueStore;
	NSObject*<OS_dispatch_queue> _pkvsDispatchQueue;
	id<FBMessageAttachmentPhotoQualityFetching> _photoQualityFetcher;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_refetchPhotoQualityForFbId:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_persistentStoreForFetchResult:(id)arg1 fbId:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)fetchPhotoQualityForFbId:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithSession:(id)arg1 photoQualityFetcher:(id)arg2 ;
@end
