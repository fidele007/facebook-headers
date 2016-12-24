/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBCommentStreamViewHeaderProtocol.h>

@class NSString, UIButton, NSArray, NSAttributedString, UILabel;

@interface FBPhotoViewerBaseHeaderView : UIView <FBCommentStreamViewHeaderProtocol> {

	BOOL _shouldShowDoneButton;
	NSString* _title;
	UIButton* _backButton;
	UIButton* _doneButton;
	NSArray* _leftHeaderButtons;
	NSArray* _rightHeaderButtons;
	NSAttributedString* _subtitle;
	UILabel* _subtitleView;
	UILabel* _titleView;

}

@property (nonatomic,retain) UILabel * subtitleView;                   //@synthesize subtitleView=_subtitleView - In the implementation block
@property (nonatomic,retain) UILabel * titleView;                      //@synthesize titleView=_titleView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIButton * backButton;                  //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,readonly) UIButton * doneButton;                  //@synthesize doneButton=_doneButton - In the implementation block
@property (assign,nonatomic) BOOL shouldShowDoneButton;                //@synthesize shouldShowDoneButton=_shouldShowDoneButton - In the implementation block
@property (nonatomic,copy) NSArray * leftHeaderButtons;                //@synthesize leftHeaderButtons=_leftHeaderButtons - In the implementation block
@property (nonatomic,copy) NSArray * rightHeaderButtons;               //@synthesize rightHeaderButtons=_rightHeaderButtons - In the implementation block
@property (nonatomic,copy) NSAttributedString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
+(UIEdgeInsets)headerContentInsets;
+(double)headerHeight;
-(UIEdgeInsets)headerViewPadding;
-(NSArray *)leftHeaderButtons;
-(void)setLeftHeaderButtons:(NSArray *)arg1 ;
-(NSArray *)rightHeaderButtons;
-(void)setRightHeaderButtons:(NSArray *)arg1 ;
-(UILabel *)subtitleView;
-(void)setSubtitleView:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(UILabel *)titleView;
-(void)setTitleView:(UILabel *)arg1 ;
-(NSAttributedString *)subtitle;
-(void)setSubtitle:(NSAttributedString *)arg1 ;
-(UIButton *)doneButton;
-(UIButton *)backButton;
-(void)setShouldShowDoneButton:(BOOL)arg1 ;
-(BOOL)shouldShowDoneButton;
@end
