/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBHighlightControl.h>

@class FBRichTextView, NSAttributedString, UIView, FBNetworkImageView, NSString;

@interface FBReactionAttachmentListItemView : FBHighlightControl {

	FBRichTextView* _descriptionLabel;
	FBRichTextView* _nameAndMessageLabel;
	FBRichTextView* _dateLabel;
	NSAttributedString* _starRatingAttributedString;
	long long _maxLines;
	double _numStars;
	double _imageViewSize;
	double _leftTextPadding;
	UIView* _separator;
	BOOL _isDraftReview;
	BOOL _useExtraPaddingTop;
	BOOL _useExtraPaddingBottom;
	BOOL _showSeparator;
	BOOL _separatorHasPadding;
	FBNetworkImageView* _imageView;
	UIView* _actionView;
	NSString* _actorName;
	NSAttributedString* _actorAttributedText;
	NSAttributedString* _message;
	NSAttributedString* _descriptionText;

}

@property (nonatomic,retain) FBNetworkImageView * imageView;                         //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * actionView;                                    //@synthesize actionView=_actionView - In the implementation block
@property (nonatomic,copy) NSString * actorName;                                     //@synthesize actorName=_actorName - In the implementation block
@property (nonatomic,copy) NSAttributedString * actorAttributedText;                 //@synthesize actorAttributedText=_actorAttributedText - In the implementation block
@property (nonatomic,copy) NSAttributedString * message;                             //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSAttributedString * descriptionText;                     //@synthesize descriptionText=_descriptionText - In the implementation block
@property (assign,nonatomic) unsigned long long nameAndMessageMaxLines; 
@property (assign,nonatomic) BOOL useExtraPaddingTop;                                //@synthesize useExtraPaddingTop=_useExtraPaddingTop - In the implementation block
@property (assign,nonatomic) BOOL useExtraPaddingBottom;                             //@synthesize useExtraPaddingBottom=_useExtraPaddingBottom - In the implementation block
@property (assign,nonatomic) BOOL showSeparator;                                     //@synthesize showSeparator=_showSeparator - In the implementation block
@property (assign,nonatomic) BOOL separatorHasPadding;                               //@synthesize separatorHasPadding=_separatorHasPadding - In the implementation block
-(NSString *)actorName;
-(void)setUseExtraPaddingTop:(BOOL)arg1 ;
-(void)setUseExtraPaddingBottom:(BOOL)arg1 ;
-(void)setNameAndMessageMaxLines:(unsigned long long)arg1 ;
-(void)setActorName:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 hidesImageView:(BOOL)arg2 ;
-(id)_getNameAndMessageAttributedStringWithMaxTextWidth:(int)arg1 ;
-(CGSize)_getNameAndMessageSizeWithAttributedString:(id)arg1 maxTextSize:(CGSize)arg2 ;
-(BOOL)separatorHasPadding;
-(void)_formatNameAttributedString:(id)arg1 font:(id)arg2 ;
-(id)_formattedNameTextWithSuffix:(id)arg1 ;
-(void)_formatMessageAttributedString:(id)arg1 ;
-(void)setActorAttributedText:(NSAttributedString *)arg1 ;
-(void)setStarRating:(double)arg1 withText:(id)arg2 maxLines:(long long)arg3 isDraft:(BOOL)arg4 ;
-(void)unsetStarRatingAndText;
-(unsigned long long)nameAndMessageMaxLines;
-(NSAttributedString *)actorAttributedText;
-(BOOL)useExtraPaddingTop;
-(BOOL)useExtraPaddingBottom;
-(void)setSeparatorHasPadding:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)accessibilityLabel;
-(NSAttributedString *)message;
-(FBNetworkImageView *)imageView;
-(void)setMessage:(NSAttributedString *)arg1 ;
-(id)accessibilityHint;
-(BOOL)isAccessibilityElement;
-(UIView *)actionView;
-(void)setImageView:(FBNetworkImageView *)arg1 ;
-(void)setActionView:(UIView *)arg1 ;
-(NSAttributedString *)descriptionText;
-(void)setDescriptionText:(NSAttributedString *)arg1 ;
-(void)setShowSeparator:(BOOL)arg1 ;
-(BOOL)showSeparator;
@end
