/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@interface FBExpandableNavigationStateLayout : NSObject {

	CGRect _bounds;
	CGRect _contentFrame;
	CGRect _leftButtonFrame;
	CGRect _rightButtonFrame;

}

@property (nonatomic,readonly) CGRect bounds;                        //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) CGRect contentFrame;                  //@synthesize contentFrame=_contentFrame - In the implementation block
@property (nonatomic,readonly) CGRect leftButtonFrame;               //@synthesize leftButtonFrame=_leftButtonFrame - In the implementation block
@property (nonatomic,readonly) CGRect rightButtonFrame;              //@synthesize rightButtonFrame=_rightButtonFrame - In the implementation block
-(id)initWithBounds:(CGRect)arg1 contentFrame:(CGRect)arg2 leftButtonSize:(CGSize)arg3 rightButtonSize:(CGSize)arg4 ;
-(CGRect)leftButtonFrame;
-(CGRect)contentFrame;
-(CGRect)bounds;
-(CGRect)rightButtonFrame;
@end

