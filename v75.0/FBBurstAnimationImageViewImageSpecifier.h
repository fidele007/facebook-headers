/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWebImageSpecifier;
@class FBWebImageFocusPointLayout;

@interface FBBurstAnimationImageViewImageSpecifier : NSObject {

	id<FBWebImageSpecifier> _webImageSpecifier;
	FBWebImageFocusPointLayout* _focusPointLayout;

}

@property (nonatomic,retain) id<FBWebImageSpecifier> webImageSpecifier;                  //@synthesize webImageSpecifier=_webImageSpecifier - In the implementation block
@property (nonatomic,retain) FBWebImageFocusPointLayout * focusPointLayout;              //@synthesize focusPointLayout=_focusPointLayout - In the implementation block
-(void)setWebImageSpecifier:(id<FBWebImageSpecifier>)arg1 ;
-(id)initWithWebImageSpecifier:(id)arg1 focusPoint:(id)arg2 ;
-(id<FBWebImageSpecifier>)webImageSpecifier;
-(FBWebImageFocusPointLayout *)focusPointLayout;
-(void)setFocusPointLayout:(FBWebImageFocusPointLayout *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

