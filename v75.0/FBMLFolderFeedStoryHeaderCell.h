/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/SRFragmentCell.h>

@class UILabel, UIView, UIImageView, NSAttributedString;

@interface FBMLFolderFeedStoryHeaderCell : SRFragmentCell {

	BOOL _isBatchUpdating;
	BOOL _isDirty;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIView* _countsWrapperView;
	UIImageView* _photoIconView;
	UIImageView* _memberIconView;
	UILabel* _photoCountLabel;
	UILabel* _memberCountLabel;
	BOOL _showCounts;
	NSAttributedString* _title;
	NSAttributedString* _subtitle;
	NSAttributedString* _photoCountString;
	NSAttributedString* _memberCountString;

}

@property (nonatomic,copy) NSAttributedString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSAttributedString * subtitle;                       //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) BOOL showCounts;                                   //@synthesize showCounts=_showCounts - In the implementation block
@property (nonatomic,copy) NSAttributedString * photoCountString;               //@synthesize photoCountString=_photoCountString - In the implementation block
@property (nonatomic,copy) NSAttributedString * memberCountString;              //@synthesize memberCountString=_memberCountString - In the implementation block
+(double)heightThatFitsConstrainWidth:(double)arg1 title:(id)arg2 subtitle:(id)arg3 showCounts:(BOOL)arg4 photoCountStringWidth:(double)arg5 memberCountStringWidth:(double)arg6 ;
+(id)_memberIconImage;
+(id)_photoIconImage;
-(void)_configureViewsFromProps;
-(void)batchUpdates:(/*^block*/id)arg1 ;
-(NSAttributedString *)photoCountString;
-(NSAttributedString *)memberCountString;
-(void)setShowCounts:(BOOL)arg1 ;
-(void)setPhotoCountString:(NSAttributedString *)arg1 ;
-(void)setMemberCountString:(NSAttributedString *)arg1 ;
-(BOOL)showCounts;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSAttributedString *)arg1 ;
-(NSAttributedString *)title;
-(void)prepareForReuse;
-(NSAttributedString *)subtitle;
-(void)setSubtitle:(NSAttributedString *)arg1 ;
@end

