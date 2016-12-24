/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol FBWebImageSpecifier;
@interface FBAlbumAttachmentImageSpecifierItem : FBValueObject <NSCopying> {

	unsigned long long _mediaType;
	id<FBWebImageSpecifier> _imageSpecifier;
	CGRect _collageItemRect;

}

@property (nonatomic,readonly) unsigned long long mediaType;                        //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) id<FBWebImageSpecifier> imageSpecifier;              //@synthesize imageSpecifier=_imageSpecifier - In the implementation block
@property (nonatomic,readonly) CGRect collageItemRect;                              //@synthesize collageItemRect=_collageItemRect - In the implementation block
-(id<FBWebImageSpecifier>)imageSpecifier;
-(id)initWithMediaType:(unsigned long long)arg1 imageSpecifier:(id)arg2 collageItemRect:(CGRect)arg3 ;
-(CGRect)collageItemRect;
-(unsigned long long)mediaType;
@end

