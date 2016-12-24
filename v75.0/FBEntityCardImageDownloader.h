/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class FBUserSession, NSMutableDictionary;

@interface FBEntityCardImageDownloader : NSObject {

	FBUserSession* _session;
	NSMutableDictionary* _pendingRequests;

}
-(void)cancelAllPendingRequests;
-(void)_handleImageDownload:(id)arg1 imageSize:(CGSize)arg2 entity:(id)arg3 imageDownloadBlock:(/*^block*/id)arg4 ;
-(void)_removeDownloadRequestForEntity:(id)arg1 ;
-(void)downloadImageForEntity:(id)arg1 uri:(id)arg2 imageSize:(CGSize)arg3 imageDownloadBlock:(/*^block*/id)arg4 ;
-(void)cancelDownloadRequestForEntity:(id)arg1 ;
-(void)dealloc;
-(id)initWithSession:(id)arg1 ;
@end
