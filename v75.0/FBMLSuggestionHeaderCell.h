/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/SRFragmentCell.h>

@protocol FBMLSuggestionHeaderCellDelegate;
@class UILabel, UIView, UIImageView, FBMLSuggestionHeaderDateView, NSAttributedString, NSDate, UIButton;

@interface FBMLSuggestionHeaderCell : SRFragmentCell {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIView* _chevronWrapperView;
	UILabel* _editLabel;
	UIImageView* _chevronImageView;
	FBMLSuggestionHeaderDateView* _headerDateView;
	BOOL _showSkipButton;
	BOOL _showMessengerBadge;
	NSAttributedString* _titleString;
	NSAttributedString* _subtitleString;
	NSDate* _date;
	UIButton* _skipButton;
	id<FBMLSuggestionHeaderCellDelegate> _delegate;
	CGRect _messengerBadgeFrame;

}

@property (nonatomic,copy) NSAttributedString * titleString;                                    //@synthesize titleString=_titleString - In the implementation block
@property (nonatomic,copy) NSAttributedString * subtitleString;                                 //@synthesize subtitleString=_subtitleString - In the implementation block
@property (nonatomic,retain) NSDate * date;                                                     //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL showChevron; 
@property (assign,nonatomic) BOOL showSkipButton;                                               //@synthesize showSkipButton=_showSkipButton - In the implementation block
@property (assign,nonatomic) BOOL showMessengerBadge;                                           //@synthesize showMessengerBadge=_showMessengerBadge - In the implementation block
@property (nonatomic,readonly) UIButton * skipButton;                                           //@synthesize skipButton=_skipButton - In the implementation block
@property (assign,nonatomic,__weak) id<FBMLSuggestionHeaderCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGRect messengerBadgeFrame;                                      //@synthesize messengerBadgeFrame=_messengerBadgeFrame - In the implementation block
+(id)subtitleAttributes;
+(id)_arrowImage;
+(id)_editLabelFont;
+(id)_skipImage;
+(double)_maxEditLabelWidth;
-(void)_didTapSkipButton;
-(void)setShowMessengerBadge:(BOOL)arg1 ;
-(void)setShowSkipButton:(BOOL)arg1 ;
-(BOOL)showChevron;
-(void)setShowChevron:(BOOL)arg1 ;
-(CGRect)_rectOfLastSubtitleCharacterInHeaderCell;
-(BOOL)showSkipButton;
-(BOOL)showMessengerBadge;
-(CGRect)messengerBadgeFrame;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBMLSuggestionHeaderCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBMLSuggestionHeaderCellDelegate>)delegate;
-(NSDate *)date;
-(void)prepareForReuse;
-(NSAttributedString *)subtitleString;
-(void)setDate:(NSDate *)arg1 ;
-(void)setSubtitleString:(NSAttributedString *)arg1 ;
-(void)setTitleString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)titleString;
-(UIButton *)skipButton;
@end

