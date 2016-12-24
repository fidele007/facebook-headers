/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKNetworkImageDownloading;
@class NSURL, UIImage, FBScenePath, NSValue;

@interface FIGAnnouncingNetworkImageSpecifier : NSObject {

	NSURL* _url;
	UIImage* _defaultImage;
	id<CKNetworkImageDownloading> _imageDownloader;
	FBScenePath* _scenePath;
	NSValue* _focusPoint;
	NSValue* _defaultImageFocusPoint;

}

@property (nonatomic,copy,readonly) NSURL * url;                                           //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) UIImage * defaultImage;                                     //@synthesize defaultImage=_defaultImage - In the implementation block
@property (nonatomic,readonly) id<CKNetworkImageDownloading> imageDownloader;              //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (nonatomic,readonly) FBScenePath * scenePath;                                    //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,readonly) NSValue * focusPoint;                                       //@synthesize focusPoint=_focusPoint - In the implementation block
@property (nonatomic,readonly) NSValue * defaultImageFocusPoint;                           //@synthesize defaultImageFocusPoint=_defaultImageFocusPoint - In the implementation block
-(id<CKNetworkImageDownloading>)imageDownloader;
-(FBScenePath *)scenePath;
-(id)initWithURL:(id)arg1 defaultImage:(id)arg2 imageDownloader:(id)arg3 scenePath:(id)arg4 focusPoint:(id)arg5 defaultImageFocusPoint:(id)arg6 ;
-(NSValue *)defaultImageFocusPoint;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSURL *)url;
-(NSValue *)focusPoint;
-(UIImage *)defaultImage;
@end

