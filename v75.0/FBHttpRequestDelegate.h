/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBHttpRequestDelegate
@required
-(void)httpRequest:(id)arg1 didCancelWithSummary:(id)arg2;
-(void)httpRequestDidStart:(id)arg1;
-(void)httpRequest:(id)arg1 didUploadBytes:(long long)arg2 outOf:(long long)arg3;
-(void)httpRequest:(id)arg1 didReceiveResponse:(id)arg2;
-(void)httpRequest:(id)arg1 didDownloadData:(id)arg2;
-(void)httpRequest:(id)arg1 didFinishWithSummary:(id)arg2;
-(void)httpRequest:(id)arg1 didFailWithError:(id)arg2 summary:(id)arg3;
-(void)httpRequest:(id)arg1 willRetryWithError:(id)arg2 summary:(id)arg3;

@end

