/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <Facebook/FBItemView_DEPRECATEDDelegate.h>

@class FBItemView_DEPRECATED, FBRichTextView, UIView, FBItemContentSummaryDisclosureView, UIColor, NSString;

@interface FBItemTableViewCell_DEPRECATED : UITableViewCell <FBItemView_DEPRECATEDDelegate> {

	FBItemView_DEPRECATED* _summaryView;
	FBItemView_DEPRECATED* _summaryContentView;
	CGPoint _imageViewOrigin;

}

@property (nonatomic,retain) FBItemView_DEPRECATED * summaryContentView;                         //@synthesize summaryContentView=_summaryContentView - In the implementation block
@property (nonatomic,readonly) FBRichTextView * richTextLabel; 
@property (nonatomic,readonly) FBRichTextView * primarySubtitleTextView; 
@property (nonatomic,readonly) FBRichTextView * secondarySubtitleTextView; 
@property (nonatomic,readonly) FBRichTextView * metadataTextView; 
@property (nonatomic,retain) UIView * bottomView; 
@property (nonatomic,retain) UIView * thumbnailView; 
@property (assign,nonatomic) BOOL shouldCenterThumbnail; 
@property (assign,nonatomic) unsigned long long imageSize; 
@property (assign,nonatomic) double textThumbnailOffset; 
@property (nonatomic,readonly) FBItemContentSummaryDisclosureView * disclosureView; 
@property (assign,nonatomic) unsigned long long disclosureViewPosition; 
@property (nonatomic,retain) UIView * customDisclosureView; 
@property (assign,nonatomic) double accessoryViewLeftOffset; 
@property (assign,nonatomic) UIEdgeInsets contentSummaryEdgeInset; 
@property (assign,nonatomic) double textContentPadding; 
@property (assign,nonatomic) BOOL hasSeparator; 
@property (assign,nonatomic) UIColor * bottomSeparatorColor; 
@property (assign,nonatomic) UIEdgeInsets bottomSeparatorInset; 
@property (assign,nonatomic) BOOL shouldSeparatorBeOffsetByThumbnail; 
@property (assign,nonatomic) BOOL shouldTopAlignTextContent; 
@property (assign,nonatomic) double topAlignedTextTopOffset; 
@property (assign,nonatomic) CGPoint imageViewOrigin;                                            //@synthesize imageViewOrigin=_imageViewOrigin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightForThumbnailSize:(unsigned long long)arg1 accessoryView:(id)arg2 contentSummaryEdgeInset:(UIEdgeInsets)arg3 textPadding:(double)arg4 ;
+(double)heightConstrainedToSize:(CGSize)arg1 itemContentSummaryConfig:(id)arg2 textPadding:(double)arg3 ;
+(CGSize)textContentSizeForThumbnailSize:(unsigned long long)arg1 accessoryView:(id)arg2 accessoryViewLeftOffset:(double)arg3 disclosureTextView:(id)arg4 disclosureViewPosition:(unsigned long long)arg5 hasDisclosureIcon:(BOOL)arg6 contentSummaryEdgeInset:(UIEdgeInsets)arg7 glyphSize:(unsigned long long)arg8 constrainedToSize:(CGSize)arg9 textPadding:(double)arg10 ;
-(FBRichTextView *)secondarySubtitleTextView;
-(void)setAccessoryViewLeftOffset:(double)arg1 ;
-(void)setShouldTopAlignTextContent:(BOOL)arg1 ;
-(void)setTextContentPadding:(double)arg1 ;
-(FBItemContentSummaryDisclosureView *)disclosureView;
-(void)setContentSummaryEdgeInset:(UIEdgeInsets)arg1 ;
-(FBRichTextView *)richTextLabel;
-(FBRichTextView *)primarySubtitleTextView;
-(void)setShouldCenterThumbnail:(BOOL)arg1 ;
-(void)setBottomSeparatorColor:(UIColor *)arg1 ;
-(UIEdgeInsets)contentSummaryEdgeInset;
-(FBRichTextView *)metadataTextView;
-(void)setTextThumbnailOffset:(double)arg1 ;
-(FBItemView_DEPRECATED *)summaryContentView;
-(double)textThumbnailOffset;
-(void)setBottomSeparatorInset:(UIEdgeInsets)arg1 ;
-(void)setCustomDisclosureView:(UIView *)arg1 ;
-(void)setDisclosureViewPosition:(unsigned long long)arg1 ;
-(void)setShouldSeparatorBeOffsetByThumbnail:(BOOL)arg1 ;
-(double)textContentPadding;
-(void)setImageViewOrigin:(CGPoint)arg1 ;
-(double)accessoryViewLeftOffset;
-(unsigned long long)disclosureViewPosition;
-(void)itemContentSummaryView:(id)arg1 didChangeBackgroundColor:(id)arg2 ;
-(void)itemContentSummaryView:(id)arg1 didSetSelectedBackgroundView:(id)arg2 ;
-(void)setSummaryContentView:(FBItemView_DEPRECATED *)arg1 ;
-(BOOL)shouldCenterThumbnail;
-(BOOL)shouldSeparatorBeOffsetByThumbnail;
-(BOOL)shouldTopAlignTextContent;
-(void)setTopAlignedTextTopOffset:(double)arg1 ;
-(double)topAlignedTextTopOffset;
-(CGPoint)imageViewOrigin;
-(UIColor *)bottomSeparatorColor;
-(UIEdgeInsets)bottomSeparatorInset;
-(UIView *)customDisclosureView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)imageSize;
-(void)prepareForReuse;
-(void)setThumbnailView:(UIView *)arg1 ;
-(UIView *)thumbnailView;
-(UIView *)bottomView;
-(void)setBottomView:(UIView *)arg1 ;
-(void)setImageSize:(unsigned long long)arg1 ;
-(BOOL)hasSeparator;
-(void)setHasSeparator:(BOOL)arg1 ;
@end

