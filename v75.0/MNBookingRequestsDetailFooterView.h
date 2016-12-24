/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol MNBookingRequestsDetailFooterViewDelegate;
@class UIButton, NSArray;

@interface MNBookingRequestsDetailFooterView : UIView {

	UIButton* _cancelButton;
	NSArray* _visibleButtons;
	id<MNBookingRequestsDetailFooterViewDelegate> _delegate;
	BOOL _isCancelButtonVisible;

}
-(void)_didTapCancel;
-(void)_alignButtonsVertically;
-(id)initWithDelegate:(id)arg1 cancelButtonVisible:(BOOL)arg2 actorAsAdmin:(BOOL)arg3 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)intrinsicContentHeight;
-(id)visibleButtons;
@end

