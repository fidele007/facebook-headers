/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMediaUploadListener <NSObject>
@required
-(void)uploadDidSucceed:(id)arg1 withResponse:(id)arg2 metrics:(id)arg3;
-(void)uploadDidFail:(id)arg1 withFailureReason:(unsigned long long)arg2 isResumable:(BOOL)arg3 metrics:(id)arg4;
-(void)uploadWasCancelled:(id)arg1 metrics:(id)arg2;
-(void)uploadHasProgressed:(id)arg1 withProgressInformation:(FBMediaUploadJobProgressInformation)arg2;

@end

