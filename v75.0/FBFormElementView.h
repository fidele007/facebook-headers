/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIControl.h>

@class FBFormElement, UILabel;

@interface FBFormElementView : UIControl {

	FBFormElement* _element;
	UILabel* _label;

}

@property (nonatomic,readonly) FBFormElement * element;              //@synthesize element=_element - In the implementation block
@property (nonatomic,retain) UILabel * label;                        //@synthesize label=_label - In the implementation block
+(double)heightForElement:(id)arg1 constrainedToSize:(CGSize)arg2 ;
-(void)prepareForElement:(id)arg1 ;
-(void)_didSelectElement:(id)arg1 ;
-(BOOL)canRecycle;
-(id)init;
-(void)prepareForReuse;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(FBFormElement *)element;
@end
