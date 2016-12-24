/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBComposerPickerCurrentLabelDelegate.h>
#import <Facebook/FBPlacePickerViewErrorControllerDelegate.h>

@protocol FBPlacePickerViewDelegate, FBPlacePickerSearchBarProtocol;
@class UIView, FBContentInsetTracker, FBUserSession, FBPlacePickerViewErrorController, UITableView, FBPullToRefreshView, FBComposerPickerCurrentLabel;

@interface FBPlacePickerView : UIView <FBComposerPickerCurrentLabelDelegate, FBPlacePickerViewErrorControllerDelegate> {

	UIView* _tableHairlineView;
	FBContentInsetTracker* _contentInsetTracker;
	FBUserSession* _session;
	BOOL _pullToRefreshEnabled;
	id<FBPlacePickerViewDelegate> _delegate;
	FBPlacePickerViewErrorController* _placePickerViewErrorController;
	double _topInset;
	UITableView* _tableView;
	FBPullToRefreshView* _ptrView;
	UIView*<FBPlacePickerSearchBarProtocol> _textField;
	UIView* _topSectionView;
	FBComposerPickerCurrentLabel* _currentPlaceLabel;

}

@property (nonatomic,retain) FBComposerPickerCurrentLabel * currentPlaceLabel;                                 //@synthesize currentPlaceLabel=_currentPlaceLabel - In the implementation block
@property (assign,nonatomic,__weak) id<FBPlacePickerViewDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBPlacePickerViewErrorController * placePickerViewErrorController;              //@synthesize placePickerViewErrorController=_placePickerViewErrorController - In the implementation block
@property (assign,nonatomic) double topInset;                                                                  //@synthesize topInset=_topInset - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                                        //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) FBPullToRefreshView * ptrView;                                                  //@synthesize ptrView=_ptrView - In the implementation block
@property (assign,nonatomic) BOOL pullToRefreshEnabled;                                                        //@synthesize pullToRefreshEnabled=_pullToRefreshEnabled - In the implementation block
@property (nonatomic,readonly) UIView*<FBPlacePickerSearchBarProtocol> textField;                              //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) UIView * topSectionView;                                                          //@synthesize topSectionView=_topSectionView - In the implementation block
@property (assign,nonatomic) BOOL showTopSeparator; 
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ;
-(FBPullToRefreshView *)ptrView;
-(BOOL)showTopSeparator;
-(void)setShowTopSeparator:(BOOL)arg1 ;
-(void)composerPickerCurrentLabelDidRemoveCurrentSelection;
-(void)composerPickerCurrentLabelDidPreserveCurrentSelection;
-(void)composerPickerCurrentLabelDidTapImageView;
-(FBComposerPickerCurrentLabel *)currentPlaceLabel;
-(BOOL)_textFieldIsExternal;
-(CGRect)_textFieldFrame;
-(UIView *)topSectionView;
-(void)setCurrentPlaceLabel:(FBComposerPickerCurrentLabel *)arg1 ;
-(BOOL)pullToRefreshEnabled;
-(id)initWithFrame:(CGRect)arg1 textField:(id)arg2 session:(id)arg3 searchBarStyle:(unsigned long long)arg4 ;
-(void)showCurrentPlace:(id)arg1 ;
-(void)removeCurrentPlace;
-(void)updateTableViewContentInset;
-(void)setTextFieldHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(FBPlacePickerViewErrorController *)placePickerViewErrorController;
-(void)setPullToRefreshEnabled:(BOOL)arg1 ;
-(void)setTopSectionView:(UIView *)arg1 ;
-(void)placePickerViewErrorControllerDidTapTurnOnLocationServiceButton;
-(void)placePickerViewErrorControllerDidTapRetryLoadPlaces;
-(void)setDelegate:(id<FBPlacePickerViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<FBPlacePickerViewDelegate>)delegate;
-(UITableView *)tableView;
-(void)deselectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(UIView*<FBPlacePickerSearchBarProtocol>)textField;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
-(double)topInset;
-(void)setTopInset:(double)arg1 ;
@end
