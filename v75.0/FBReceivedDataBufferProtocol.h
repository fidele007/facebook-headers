/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBReceivedDataBufferProtocol <NSObject>
@property (assign,nonatomic,__weak) id<FBReceivedDataBufferDelegate> delegate; 
@required
-(void)setDelegate:(id)arg1;
-(id<FBReceivedDataBufferDelegate>)delegate;
-(unsigned long long)length;
-(id)data;
-(void)close;
-(void)appendData:(id)arg1;
-(void)open;

@end

