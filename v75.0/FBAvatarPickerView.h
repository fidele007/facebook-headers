/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBEntityPickerTextFieldDelegate.h>

@class UITableView, UILabel, FBGradientView, FBScrollableEntityPickerTextField, FBContentInsetTracker, UIView, UIButton, NSArray, FBEntityPickerTextField, NSString;

@interface FBAvatarPickerView : UIView <FBEntityPickerTextFieldDelegate> {

	BOOL _didAdjustTableViewContentOffset;
	BOOL _showClearButton;
	UITableView* _tableView;
	UILabel* _noSearchResultsLabel;
	long long _cellSeparatorStyle;
	FBGradientView* _shadowView;
	FBScrollableEntityPickerTextField* _scrollableEntityPickerTextField;
	FBContentInsetTracker* _contentInsetTracker;
	double _shadowViewFrameHeight;
	UIView* _clearButtonFiller;
	UIButton* _clearButton;
	CGSize _scrollableEntityPickerTextFieldSize;
	UIEdgeInsets _topSeparatorInsets;
	UIView* _footerView;
	BOOL _isFooterViewHidden;
	UIView* _defaultView;
	BOOL _clearButtonHidden;
	BOOL _searchFieldHidden;
	long long _returnKeyType;
	double _topLayoutGuideLength;
	double _bottomLayoutGuideLength;
	double _tableViewY;
	NSArray* _accessibilityElements;

}

@property (nonatomic,copy) NSArray * accessibilityElements;                        //@synthesize accessibilityElements=_accessibilityElements - In the implementation block
@property (assign,nonatomic) BOOL emptySearchResults; 
@property (assign,nonatomic) BOOL clearButtonHidden;                               //@synthesize clearButtonHidden=_clearButtonHidden - In the implementation block
@property (assign,nonatomic) BOOL searchFieldHidden;                               //@synthesize searchFieldHidden=_searchFieldHidden - In the implementation block
@property (nonatomic,readonly) FBEntityPickerTextField * searchField; 
@property (assign,nonatomic) BOOL showTopSeparator; 
@property (assign,nonatomic) UIEdgeInsets topSeparatorInsets;                      //@synthesize topSeparatorInsets=_topSeparatorInsets - In the implementation block
@property (nonatomic,readonly) UIView * pickerFooterView; 
@property (assign,nonatomic) long long returnKeyType;                              //@synthesize returnKeyType=_returnKeyType - In the implementation block
@property (assign,nonatomic) double topLayoutGuideLength;                          //@synthesize topLayoutGuideLength=_topLayoutGuideLength - In the implementation block
@property (assign,nonatomic) double bottomLayoutGuideLength;                       //@synthesize bottomLayoutGuideLength=_bottomLayoutGuideLength - In the implementation block
@property (assign,nonatomic) double tableViewY;                                    //@synthesize tableViewY=_tableViewY - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)showTopSeparator;
-(void)setBottomLayoutGuideLength:(double)arg1 ;
-(void)setTopLayoutGuideLength:(double)arg1 ;
-(double)topLayoutGuideLength;
-(double)bottomLayoutGuideLength;
-(void)setShowTopSeparator:(BOOL)arg1 ;
-(void)setClearButtonHidden:(BOOL)arg1 ;
-(void)textFieldHeightDidChange:(id)arg1 ;
-(BOOL)clearButtonHidden;
-(void)setTopSeparatorInsets:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 tableView:(id)arg2 defaultView:(id)arg3 showClearButton:(BOOL)arg4 ;
-(void)addClearButtonTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_configureShadowView;
-(void)_configureSearchField;
-(void)_configureNoSearchResultsLabel;
-(void)_layoutAllSubviews;
-(void)sizeSearchField;
-(void)_layoutSubviewsBelowSearchField;
-(double)tableViewY;
-(void)setEmptySearchResults:(BOOL)arg1 ;
-(void)adjustTableViewContentOffsetForFirstAppearance;
-(void)hideResults;
-(void)showResults;
-(BOOL)emptySearchResults;
-(void)setSearchFieldHidden:(BOOL)arg1 ;
-(UIView *)pickerFooterView;
-(void)setPickerFooterView:(id)arg1 hidden:(BOOL)arg2 ;
-(BOOL)searchFieldHidden;
-(UIEdgeInsets)topSeparatorInsets;
-(void)setTableViewY:(double)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)returnKeyType;
-(void)setReturnKeyType:(long long)arg1 ;
-(double)_maxHeight;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(FBEntityPickerTextField *)searchField;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(NSArray *)accessibilityElements;
-(void)setAccessibilityElements:(NSArray *)arg1 ;
-(void)clearSearchField;
@end

