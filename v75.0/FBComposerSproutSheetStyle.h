/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBComposerSproutStyle;

@interface FBComposerSproutSheetStyle : FBValueObject <NSCopying> {

	double _bannerTopBottomPadding;
	FBComposerSproutStyle* _sproutStyle;
	double _topLayoutInset;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,readonly) double bannerTopBottomPadding;                         //@synthesize bannerTopBottomPadding=_bannerTopBottomPadding - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentInsets;                            //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,copy,readonly) FBComposerSproutStyle * sproutStyle;              //@synthesize sproutStyle=_sproutStyle - In the implementation block
@property (nonatomic,readonly) double topLayoutInset;                                 //@synthesize topLayoutInset=_topLayoutInset - In the implementation block
-(double)topLayoutInset;
-(FBComposerSproutStyle *)sproutStyle;
-(id)initWithBannerTopBottomPadding:(double)arg1 contentInsets:(UIEdgeInsets)arg2 sproutStyle:(id)arg3 topLayoutInset:(double)arg4 ;
-(double)bannerTopBottomPadding;
-(UIEdgeInsets)contentInsets;
@end
