/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMediaItemUploadFlowSessionDelegate
@required
-(void)mediaItemUploadFlowSessionRestart:(id)arg1 newSession:(id)arg2;
-(void)mediaItemUploadFlowSessionDidStart:(id)arg1;
-(void)mediaItemUploadFlowSessionDidFinish:(id)arg1 fbid:(id)arg2;
-(void)mediaItemUploadFlowSessionDidFinishProcessing:(id)arg1;
-(void)mediaItemUploadFlowSessionDidCancel:(id)arg1 processingFinished:(BOOL)arg2;
-(void)mediaItemUploadFlowSession:(id)arg1 didFailWithError:(id)arg2 processingFinished:(BOOL)arg3;
-(void)mediaItemUploadFlowSession:(id)arg1 didUpdateToProgress:(double)arg2 fromProgress:(double)arg3;
-(void)mediaItemUploadFlowSessionDidStartProcessing:(id)arg1;

@end
