/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class FBUserSession;

@interface FBImagePrefetchController : NSObject {

	FBUserSession* _session;
	mutex _lock;

}
+(void)setDisableImagePrefetch:(BOOL)arg1 ;
-(void)prefetchImageForURL:(id)arg1 scenePath:(id)arg2 analyticsModule:(id)arg3 ;
-(void)prefetchImageForSpecifier:(id)arg1 ;
-(void)prefetchImageUseImageStreamerForURL:(id)arg1 desiredImageFlag:(unsigned long long)arg2 scenePath:(id)arg3 analyticsModule:(id)arg4 ;
-(id)_prefetchImageWithURL:(id)arg1 scenePath:(id)arg2 analyticsModule:(id)arg3 useImageStreamer:(BOOL)arg4 desiredImageFlag:(unsigned long long)arg5 ;
-(id)initWithSession:(id)arg1 ;
@end
