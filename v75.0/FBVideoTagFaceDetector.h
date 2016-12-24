/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBVideoTagProcessingStep.h>

@protocol OS_dispatch_queue, FBVideoTagFaceDetectorDelegate;
@class FBUserSession, FBVideoTagConfiguration, NSObject, NSString;

@interface FBVideoTagFaceDetector : NSObject <FBVideoTagProcessingStep> {

	FBUserSession* _session;
	FBVideoTagConfiguration* _configuration;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _platformDetectorQueue;
	id<FBVideoTagFaceDetectorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBVideoTagFaceDetectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 configuration:(id)arg2 ;
-(id)detectFacesInImage:(id)arg1 inVideoAsset:(id)arg2 atTimestamp:(SCD_Struct_FB100)arg3 ;
-(id)_detectFacesUsingAppleDetectorInImage:(id)arg1 inVideoAsset:(id)arg2 atTimestamp:(SCD_Struct_FB100)arg3 ;
-(id)_detectFacesUsingFacebookDetectorInImage:(id)arg1 inVideoAsset:(id)arg2 atTimestamp:(SCD_Struct_FB100)arg3 ;
-(void)setDelegate:(id<FBVideoTagFaceDetectorDelegate>)arg1 ;
-(id)init;
-(id<FBVideoTagFaceDetectorDelegate>)delegate;
-(void)setDelegateQueue:(id)arg1 ;
@end

