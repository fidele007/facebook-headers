/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:02 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@interface FBTransparentView : UIView {

	BOOL _ignoresOwnTouches;
	BOOL _ignoresTouchesWhenHidden;

}

@property (assign,nonatomic) BOOL ignoresOwnTouches;                     //@synthesize ignoresOwnTouches=_ignoresOwnTouches - In the implementation block
@property (assign,nonatomic) BOOL ignoresTouchesWhenHidden;              //@synthesize ignoresTouchesWhenHidden=_ignoresTouchesWhenHidden - In the implementation block
-(void)setIgnoresTouchesWhenHidden:(BOOL)arg1 ;
-(void)setIgnoresOwnTouches:(BOOL)arg1 ;
-(BOOL)ignoresOwnTouches;
-(BOOL)ignoresTouchesWhenHidden;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end

