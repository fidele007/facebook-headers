/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIView;

@interface FBProfileWizardStatusUpdateContentView : UIView {

	UIView* _composerView;
	UIView* _topInsetView;
	UIView* _bottomInsetView;
	UIView* _leftInsetView;
	UIView* _rightInsetView;
	UIView* _composerTopLineView;
	UIView* _composerBottomLineView;

}
-(id)initWithComposerView:(id)arg1 ;
-(void)_addInsetViews;
-(void)_addLineViews;
-(id)_createInsetView;
-(void)layoutSubviews;
-(id)_createLineView;
@end
