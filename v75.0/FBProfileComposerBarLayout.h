/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBProfileComposerBarLayout : NSObject {

	double _horizontalPadding;
	double _topPadding;
	double _bottomPadding;
	double _barHeight;

}

@property (nonatomic,readonly) double horizontalPadding;              //@synthesize horizontalPadding=_horizontalPadding - In the implementation block
@property (nonatomic,readonly) double topPadding;                     //@synthesize topPadding=_topPadding - In the implementation block
@property (nonatomic,readonly) double bottomPadding;                  //@synthesize bottomPadding=_bottomPadding - In the implementation block
@property (nonatomic,readonly) double barHeight;                      //@synthesize barHeight=_barHeight - In the implementation block
+(id)newLayout;
-(id)init;
-(double)barHeight;
-(double)horizontalPadding;
-(double)topPadding;
-(double)bottomPadding;
@end

