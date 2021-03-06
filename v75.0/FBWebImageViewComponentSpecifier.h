/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWebImageSpecifier;
#import <Facebook/Facebook-Structs.h>
@class FBUserSession;

@interface FBWebImageViewComponentSpecifier : NSObject {

	id<FBWebImageSpecifier> _imageSpecifier;
	FBUserSession* _session;
	FBWebImageComponentOptions _options;

}

@property (nonatomic,readonly) FBWebImageComponentOptions options;                  //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) id<FBWebImageSpecifier> imageSpecifier;              //@synthesize imageSpecifier=_imageSpecifier - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                             //@synthesize session=_session - In the implementation block
-(id<FBWebImageSpecifier>)imageSpecifier;
-(id)initWithImageSpecifier:(id)arg1 session:(id)arg2 options:(FBWebImageComponentOptions)arg3 ;
-(FBWebImageComponentOptions)options;
-(FBUserSession *)session;
@end

