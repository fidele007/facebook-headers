/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBDBLFaceDetectorDelegate;
@class CIDetector, NSObject;

@interface FBDBLFaceDetector : NSObject {

	CIDetector* _faceDetector;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _queued;
	id<FBDBLFaceDetectorDelegate> _delegate;

}
-(void)_processImage:(id)arg1 ;
-(void)updateImage:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

