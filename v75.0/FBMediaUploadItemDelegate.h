/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMediaUploadItemDelegate <NSObject>
@required
-(void)mediaUploadItemDidStart:(id)arg1;
-(void)mediaUploadItemDidStartProcessingStep:(id)arg1;
-(void)mediaUploadItemDidFinishProcessingStep:(id)arg1;
-(void)mediaUploadItemDidFinish:(id)arg1;
-(void)mediaUploadItem:(id)arg1 didFailWithError:(id)arg2 allowBackgroundTask:(BOOL)arg3;
-(void)mediaUploadItemDidSendCancelRequest:(id)arg1;
-(void)mediaUploadItemDidCancel:(id)arg1;
-(void)mediaUploadItemRestart:(id)arg1;
-(void)mediaUploadItem:(id)arg1 didUpdateToProgress:(double)arg2 fromProgress:(double)arg3;

@end

