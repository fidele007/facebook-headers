/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBComposerExpressionPickerTabViewProtocol.h>

@protocol FBComposerExpressionPickerTabViewDelegate;
@class UIView, NSArray, UIButton, NSString;

@interface FBComposerExpressionPickerTabView : UIView <FBComposerExpressionPickerTabViewProtocol> {

	UIView* _bottomBorder;
	NSArray* _buttonArray;
	NSArray* _dividerArray;
	UIButton* _selectedButton;
	unsigned long long _selectedIndex;
	BOOL _showStickersAsFirstTab;
	BOOL _splitEnabled;
	UIButton* _activityButton;
	UIButton* _moodButton;
	UIButton* _stickerButton;
	BOOL _allowStickers;
	id<FBComposerExpressionPickerTabViewDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBComposerExpressionPickerTabViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL allowStickers;                                                         //@synthesize allowStickers=_allowStickers - In the implementation block
-(id)activitySectionViewForNuxForSection:(unsigned long long)arg1 ;
-(void)setAllowStickers:(BOOL)arg1 ;
-(void)setExpressionSectionAsSelected:(unsigned long long)arg1 ;
-(BOOL)allowStickers;
-(id)initWithFrame:(CGRect)arg1 initialSection:(unsigned long long)arg2 allowStickers:(BOOL)arg3 splitEnabled:(BOOL)arg4 showStickersAsFirstTab:(BOOL)arg5 ;
-(void)_createSectionButtons;
-(unsigned long long)_numberOfButtonsShown:(id)arg1 ;
-(id)_buttonForSection:(unsigned long long)arg1 ;
-(void)_updateSelectedButtonAndIndicatorForSection:(unsigned long long)arg1 ;
-(void)_tappedMoodButton;
-(id)_createButtonForSection:(unsigned long long)arg1 action:(SEL)arg2 ;
-(void)_tappedActivityButton;
-(void)_tappedStickerButton;
-(void)setDelegate:(id<FBComposerExpressionPickerTabViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBComposerExpressionPickerTabViewDelegate>)delegate;
@end
