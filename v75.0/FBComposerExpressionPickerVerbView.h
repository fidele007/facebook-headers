/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <UIKit/UISearchBarDelegate.h>
#import <Facebook/FBComposerExpressionPickerMoodSelectionViewDelegate.h>

@protocol FBComposerExpressionPickerVerbViewDelegate;
@class UIView, UISearchBar, FBComposerExpressionPickerMoodSelectionView, FBUserSession, UICollectionView, NSString;

@interface FBComposerExpressionPickerVerbView : UIView <UISearchBarDelegate, FBComposerExpressionPickerMoodSelectionViewDelegate> {

	UIView* _searchFieldBottomBorder;
	UISearchBar* _searchField;
	FBComposerExpressionPickerMoodSelectionView* _selectionView;
	FBUserSession* _session;
	UICollectionView* _collectionView;
	id<FBComposerExpressionPickerVerbViewDelegate> _delegate;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                           //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic,__weak) id<FBComposerExpressionPickerVerbViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateWithSelectedObject:(id)arg1 ;
-(void)verbViewResignFirstResponder;
-(void)clearSearchText;
-(void)expressionPickerMoodSelectionViewDidTapIcon:(id)arg1 ;
-(void)expressionPickerMoodSelectionViewDidTapClearButton:(id)arg1 ;
-(void)setDelegate:(id<FBComposerExpressionPickerVerbViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBComposerExpressionPickerVerbViewDelegate>)delegate;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(id)initWithSession:(id)arg1 ;
@end

