/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UITableViewDelegate.h>

@protocol FBAvatarTaggingSectionDataSource, FBTagSearchViewDelegate;
@class UITapGestureRecognizer, UIView, UITextField, FBTagSearchBarView, UITableView, UIActivityIndicatorView, NSString;

@interface FBTagSearchView : UIView <UITextFieldDelegate, UIGestureRecognizerDelegate, UITableViewDelegate> {

	id<FBAvatarTaggingSectionDataSource> _searchDataSource;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIView* _contentView;
	UITextField* _searchField;
	FBTagSearchBarView* _searchBarView;
	UITableView* _friendListView;
	UIActivityIndicatorView* _activityIndicator;
	unsigned long long _maximumDisplayRowCount;
	id<FBTagSearchViewDelegate> _delegate;
	NSString* _lastSearchString;

}

@property (nonatomic,copy) NSString * lastSearchString;                                          //@synthesize lastSearchString=_lastSearchString - In the implementation block
@property (assign,nonatomic) unsigned long long maximumDisplayRowCount;                          //@synthesize maximumDisplayRowCount=_maximumDisplayRowCount - In the implementation block
@property (assign,nonatomic,__weak) id<FBTagSearchViewDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<FBAvatarTaggingSectionDataSource> searchDataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSearchDataSource:(id<FBAvatarTaggingSectionDataSource>)arg1 ;
-(void)didTapView:(id)arg1 ;
-(void)movePosition:(CGPoint)arg1 ;
-(void)finishTagEditing:(id)arg1 withAvatar:(id)arg2 loggingSource:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 maximumRowCount:(unsigned long long)arg2 ;
-(void)startIndicatorAnimating;
-(void)stopIndicatorAnimating;
-(void)presentAtPoint:(CGPoint)arg1 inView:(id)arg2 withKeyboard:(BOOL)arg3 completion:(/*^block*/id)arg4 preserveScrollEnabled:(BOOL)arg5 ;
-(unsigned long long)maximumDisplayRowCount;
-(void)setMaximumDisplayRowCount:(unsigned long long)arg1 ;
-(void)setDelegate:(id<FBTagSearchViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<FBTagSearchViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)moveToPoint:(CGPoint)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(NSString *)lastSearchString;
-(void)setLastSearchString:(NSString *)arg1 ;
-(id<FBAvatarTaggingSectionDataSource>)searchDataSource;
-(void)dismissAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
@end
