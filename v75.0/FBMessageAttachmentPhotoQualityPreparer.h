/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBViewerContextClassProvidable.h>

@protocol FBMessageAttachmentPhotoQualityFetching, OS_dispatch_queue;
@class FBMessageAttachmentPhotoQualityCache, NSObject, NSString;

@interface FBMessageAttachmentPhotoQualityPreparer : NSObject <FBViewerContextClassProvidable> {

	FBMessageAttachmentPhotoQualityCache* _photoQualityCache;
	FBMessageAttachmentPhotoQualityCache* _thumbnailPhotoQualityCache;
	id<FBMessageAttachmentPhotoQualityFetching> _photoQualityFetcher;
	NSObject*<OS_dispatch_queue> _internalQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)photoQualityForThread:(id)arg1 ;
-(id)thumbnailPhotoQualityForThread:(id)arg1 ;
-(void)_handleFetchSuccess:(id)arg1 withThreadKey:(id)arg2 ;
-(void)preparePhotoQualityForThread:(id)arg1 ;
@end

