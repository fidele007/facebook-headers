/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPublishingDataServerProcessingListener <NSObject>
@required
-(void)serverDidUpdateProcessingProgress:(float)arg1 forPublisherData:(id)arg2 response:(id)arg3;
-(void)serverDidFinishProcessingForPublisherData:(id)arg1 response:(id)arg2;
-(void)serverProcessingDidFailForPublisherData:(id)arg1 response:(id)arg2;
-(void)clientDidLoseTrackOfServerProcessingStatusForPublisherData:(id)arg1 response:(id)arg2;

@end

