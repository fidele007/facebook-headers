/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBInspirationDownloader;

@interface FBInspirationStyleTransferAssetsDownloader : NSObject {

	FBUserSession* _session;
	FBInspirationDownloader* _downloader;

}
-(id)initWithSession:(id)arg1 priority:(long long)arg2 ;
-(void)downloadStyleTransferAssetsForStyleTransferEffect:(id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
