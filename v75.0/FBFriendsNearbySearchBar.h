/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol FBFriendsNearbySearchBarDelegate;
@class FBEntityPickerTextField, UIView, FBLoadingIndicatorView, UIButton, UITextField, NSString;

@interface FBFriendsNearbySearchBar : UIView <UITextFieldDelegate> {

	FBEntityPickerTextField* _searchField;
	UIView* _searchBarBottomBorder;
	FBLoadingIndicatorView* _loadingView;
	UIView* _verticalLine;
	BOOL _loading;
	BOOL _isFIGUIEnabled;
	id<FBFriendsNearbySearchBarDelegate> _delegate;
	UIButton* _cancelButton;
	UIButton* _inviteButton;

}

@property (assign,nonatomic) id<FBFriendsNearbySearchBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) UITextField * searchField; 
@property (nonatomic,retain,readonly) UIButton * cancelButton;                           //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain,readonly) UIButton * inviteButton;                           //@synthesize inviteButton=_inviteButton - In the implementation block
@property (assign,nonatomic) BOOL loading;                                               //@synthesize loading=_loading - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 enableFIGUI:(BOOL)arg2 ;
-(UIButton *)inviteButton;
-(void)setDelegate:(id<FBFriendsNearbySearchBarDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<FBFriendsNearbySearchBarDelegate>)delegate;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(UIButton *)cancelButton;
-(UITextField *)searchField;
-(BOOL)loading;
-(void)setLoading:(BOOL)arg1 ;
@end

