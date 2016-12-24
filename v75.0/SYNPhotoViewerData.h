/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class SYNPhoto;

@interface SYNPhotoViewerData : NSObject {

	BOOL _hasViewerFavorited;
	BOOL _showAsHDR;
	BOOL _hasViewerBookmarked;
	SYNPhoto* _photo;
	long long _commentsCount;
	long long _favoritesCount;

}

@property (nonatomic,readonly) SYNPhoto * photo;                      //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) BOOL hasViewerFavorited;               //@synthesize hasViewerFavorited=_hasViewerFavorited - In the implementation block
@property (nonatomic,readonly) long long commentsCount;               //@synthesize commentsCount=_commentsCount - In the implementation block
@property (nonatomic,readonly) long long favoritesCount;              //@synthesize favoritesCount=_favoritesCount - In the implementation block
@property (nonatomic,readonly) BOOL showAsHDR;                        //@synthesize showAsHDR=_showAsHDR - In the implementation block
@property (nonatomic,readonly) BOOL hasViewerBookmarked;              //@synthesize hasViewerBookmarked=_hasViewerBookmarked - In the implementation block
-(BOOL)hasViewerFavorited;
-(id)initWithNativeData:(shared_ptr<Sync::PhotoViewerData>*)arg1 sessionUser:(id)arg2 ;
-(BOOL)showAsHDR;
-(BOOL)hasViewerBookmarked;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)favoritesCount;
-(SYNPhoto *)photo;
-(long long)commentsCount;
@end
