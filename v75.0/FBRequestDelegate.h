/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBRequestDelegate <NSObject>
@optional
-(void)requestLoading:(id)arg1;
-(void)request:(id)arg1 didReceiveResponse:(id)arg2;
-(void)request:(id)arg1 didSendTotalBytes:(unsigned long long)arg2 forExpectedNumBytes:(unsigned long long)arg3;
-(void)request:(id)arg1 didLoad:(id)arg2;
-(void)request:(id)arg1 didLoadRawResponse:(id)arg2;
-(id)logRequestWithType;
-(void)request:(id)arg1 didFailWithError:(id)arg2;

@end
