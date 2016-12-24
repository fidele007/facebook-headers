/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNMessagingRegionProvider;

@interface MNMessagingRegionHeaderHelper : NSObject {

	MNMessagingRegionProvider* _messagingRegionProvider;

}
-(id)initWithProviderMapData:(id)arg1 ;
-(id)messagingRegionHeaderAsDictionary;
-(id)initWithMessagingRegionProvider:(id)arg1 ;
-(void)_executeBlockIfMessengerRegionIsAvailable:(/*^block*/id)arg1 ;
-(void)setMessagingRegionHeaderOnNetworkRequest:(id)arg1 ;
-(void)setMessagingRegionHeaderOnGraphQLServiceConfig:(id)arg1 ;
@end

