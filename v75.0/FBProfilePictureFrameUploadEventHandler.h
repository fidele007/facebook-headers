/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBProfileMediaUploadEventHandler.h>

@protocol FBComposerPublisher, FBComposerPublisherStatusListener, FBUpdateUploadStateHandler;
@class NSString;

@interface FBProfilePictureFrameUploadEventHandler : NSObject <FBProfileMediaUploadEventHandler> {

	id<FBComposerPublisher> _publisher;
	id<FBComposerPublisherStatusListener> _publisherStatusListener;
	/*^block*/id _loggingCall;
	id<FBUpdateUploadStateHandler> _uploadStateHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBUpdateUploadStateHandler> uploadStateHandler;              //@synthesize uploadStateHandler=_uploadStateHandler - In the implementation block
-(id)initWithPublisherStatusListender:(id)arg1 loggingCall:(/*^block*/id)arg2 ;
-(void)handleUploadEventWithDataPack:(id)arg1 dependencyPack:(id)arg2 ;
-(id)checkValidation;
-(id<FBUpdateUploadStateHandler>)uploadStateHandler;
-(void)setUploadStateHandler:(id<FBUpdateUploadStateHandler>)arg1 ;
@end

