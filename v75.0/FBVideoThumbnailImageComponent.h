/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@interface FBVideoThumbnailImageComponent : CKCompositeComponent
+(id)newWithThumbnail:(id)arg1 size:(const CKComponentSize*)arg2 includePlayIcon:(BOOL)arg3 ;
+(id)newWithThumbnailURL:(id)arg1 imageDownloader:(id)arg2 scenePath:(id)arg3 size:(const CKComponentSize*)arg4 includePlayIcon:(BOOL)arg5 ;
+(id)_thumbnailComponentForURL:(id)arg1 imageDownloader:(id)arg2 scenePath:(id)arg3 size:(const CKComponentSize*)arg4 ;
+(id)_videoComponentWithThumbnailComponent:(id)arg1 includePlayIcon:(BOOL)arg2 ;
@end

