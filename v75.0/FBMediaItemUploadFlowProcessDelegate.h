/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMediaItemUploadFlowProcessDelegate
@required
-(void)didStartTranscodeFlow:(id)arg1;
-(void)didFinishTranscodeFlow:(id)arg1 forSegment:(id)arg2;
-(void)didFinishTranscodeFlowForAllSegments:(id)arg1;
-(void)didCancelTranscodeFlow:(id)arg1;
-(void)didFailTranscodeFlow:(id)arg1 withError:(id)arg2 restartUploadInRaw:(BOOL)arg3;
-(void)didUpdateTranscodeFlow:(id)arg1 progress:(double)arg2;

@end

