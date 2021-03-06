/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Facebook/FBPlacePickerSearchBarProtocol.h>

@protocol FBPlacePickerSearchBarDelegate;
@class FBSearchBar, UIView, NSString;

@interface FBPlacePickerSearchBar : UIView <UISearchBarDelegate, UITextFieldDelegate, FBPlacePickerSearchBarProtocol> {

	FBSearchBar* _searchBar;
	UIView* _searchBarTopBorder;
	UIView* _searchBarBottomBorder;
	id<FBPlacePickerSearchBarDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * placeholder; 
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic,__weak) id<FBPlacePickerSearchBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_configuredSearchBarBorderWithColor:(id)arg1 ;
-(void)_configureSearchBarWhiteBackground;
-(void)_configureSearchBarNoGlyph;
-(void)setDelegate:(id<FBPlacePickerSearchBarDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBPlacePickerSearchBarDelegate>)delegate;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)placeholder;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
@end

