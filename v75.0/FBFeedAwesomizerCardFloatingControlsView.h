/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBAccessibilityInvalidationEventsListener.h>

@class UILabel, UISearchBar, UIButton, UISegmentedControl, NSString;

@interface FBFeedAwesomizerCardFloatingControlsView : UIView <FBAccessibilityInvalidationEventsListener> {

	UILabel* _titleLabel;
	UISearchBar* _searchBar;
	long long _searchMode;
	BOOL _sortEnabled;
	double _searchHeight;
	long long _style;
	BOOL _showSearch;
	BOOL _floating;
	UIButton* _doneButton;
	UIButton* _cancelButton;
	UISegmentedControl* _segmentedControl;
	UIButton* _sortButton;

}

@property (nonatomic,readonly) UIButton * doneButton;                              //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,readonly) UIButton * cancelButton;                            //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,readonly) UISearchBar * searchBar;                            //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,readonly) UISegmentedControl * segmentedControl;              //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (nonatomic,readonly) UIButton * sortButton;                              //@synthesize sortButton=_sortButton - In the implementation block
@property (assign,nonatomic) BOOL floating;                                        //@synthesize floating=_floating - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showSearchBar;
-(void)didReceiveAccessibilityInvalidation;
-(void)setDoneButtonEnabled:(BOOL)arg1 ;
-(void)hideSearchBar;
-(id)initWithThemeColor:(id)arg1 titles:(id)arg2 searchMode:(long long)arg3 sortEnabled:(BOOL)arg4 showsCancel:(BOOL)arg5 displayStyle:(long long)arg6 searchPlaceholder:(id)arg7 ;
-(void)_fixHeight;
-(id)initWithThemeColor:(id)arg1 titles:(id)arg2 searchMode:(long long)arg3 sortEnabled:(BOOL)arg4 showsCancel:(BOOL)arg5 displayStyle:(long long)arg6 ;
-(id)initWithThemeColor:(id)arg1 titles:(id)arg2 searchMode:(long long)arg3 sortEnabled:(BOOL)arg4 showsCancel:(BOOL)arg5 displayStyle:(long long)arg6 searchPlaceholder:(id)arg7 doneButtonTitle:(id)arg8 ;
-(UIButton *)sortButton;
-(CGSize)sizeThatFits:(CGSize)arg1 floating:(BOOL)arg2 ;
-(double)floatingThresholdOffsetY;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setFloating:(BOOL)arg1 ;
-(UIButton *)cancelButton;
-(UISearchBar *)searchBar;
-(BOOL)floating;
-(UIButton *)doneButton;
-(UISegmentedControl *)segmentedControl;
-(void)updateFont;
@end

