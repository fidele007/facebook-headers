/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponent.h>

@class FBRichTextComponent, FBButtonComponent;

@interface FBMagicStoryExpandableTextComponent : CKComponent {

	FBRichTextComponent* _textComponent;
	FBButtonComponent* _buttonComponent;
	unsigned long long _state;
	unsigned long long _maxNumberOfLinesWhenCollapsed;
	double _optionalSpacingAfter;

}
+(id)newWithText:(id)arg1 color:(id)arg2 font:(id)arg3 maxNumberOfLinesWhenCollapsed:(unsigned long long)arg4 textAlignment:(long long)arg5 buttonColor:(id)arg6 optionalSpacingAfter:(double)arg7 ;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsFromPreviousComponent:(id)arg1 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
-(CKComponentBoundsAnimation)boundsAnimationFromPreviousComponent:(id)arg1 ;
-(void)toggleExpansion;
@end

