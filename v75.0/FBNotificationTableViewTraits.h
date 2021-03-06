/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface FBNotificationTableViewTraits : FBValueObject <NSCopying> {

	BOOL _wrapTableInCard;
	BOOL _shouldUseRoundedThumbnailStyle;
	BOOL _shouldUseUnseenDotIndicator;
	BOOL _shouldTopAlignText;
	unsigned long long _imageSize;
	UIColor* _separatorColor;
	UIColor* _separatorHighlightedColor;
	double _maxNumberOfLines;
	double _textThumbnailOffset;
	UIEdgeInsets _contentSummaryEdgeInset;
	UIEdgeInsets _separatorInset;

}

@property (nonatomic,readonly) BOOL wrapTableInCard;                                  //@synthesize wrapTableInCard=_wrapTableInCard - In the implementation block
@property (nonatomic,readonly) unsigned long long imageSize;                          //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentSummaryEdgeInset;                  //@synthesize contentSummaryEdgeInset=_contentSummaryEdgeInset - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseRoundedThumbnailStyle;                   //@synthesize shouldUseRoundedThumbnailStyle=_shouldUseRoundedThumbnailStyle - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseUnseenDotIndicator;                      //@synthesize shouldUseUnseenDotIndicator=_shouldUseUnseenDotIndicator - In the implementation block
@property (nonatomic,readonly) BOOL shouldTopAlignText;                               //@synthesize shouldTopAlignText=_shouldTopAlignText - In the implementation block
@property (nonatomic,copy,readonly) UIColor * separatorColor;                         //@synthesize separatorColor=_separatorColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * separatorHighlightedColor;              //@synthesize separatorHighlightedColor=_separatorHighlightedColor - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets separatorInset;                           //@synthesize separatorInset=_separatorInset - In the implementation block
@property (nonatomic,readonly) double maxNumberOfLines;                               //@synthesize maxNumberOfLines=_maxNumberOfLines - In the implementation block
@property (nonatomic,readonly) double textThumbnailOffset;                            //@synthesize textThumbnailOffset=_textThumbnailOffset - In the implementation block
-(UIEdgeInsets)contentSummaryEdgeInset;
-(BOOL)wrapTableInCard;
-(BOOL)shouldUseUnseenDotIndicator;
-(UIColor *)separatorHighlightedColor;
-(double)maxNumberOfLines;
-(BOOL)shouldUseRoundedThumbnailStyle;
-(BOOL)shouldTopAlignText;
-(double)textThumbnailOffset;
-(id)initWithWrapTableInCard:(BOOL)arg1 imageSize:(unsigned long long)arg2 contentSummaryEdgeInset:(UIEdgeInsets)arg3 shouldUseRoundedThumbnailStyle:(BOOL)arg4 shouldUseUnseenDotIndicator:(BOOL)arg5 shouldTopAlignText:(BOOL)arg6 separatorColor:(id)arg7 separatorHighlightedColor:(id)arg8 separatorInset:(UIEdgeInsets)arg9 maxNumberOfLines:(double)arg10 textThumbnailOffset:(double)arg11 ;
-(unsigned long long)imageSize;
-(UIColor *)separatorColor;
-(UIEdgeInsets)separatorInset;
@end

