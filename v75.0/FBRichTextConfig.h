/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSAttributedString, UIFont;

@interface FBRichTextConfig : NSObject {

	NSAttributedString* _attributedString;
	UIFont* _defaultFont;
	unsigned long long _maximumNumberOfLines;
	unsigned long long _truncationMode;
	NSAttributedString* _truncationAttributedString;
	CGSize _constrainedSize;
	CGSize _textShadowOffset;

}

@property (nonatomic,copy) NSAttributedString * attributedString;                        //@synthesize attributedString=_attributedString - In the implementation block
@property (assign,nonatomic) CGSize constrainedSize;                                     //@synthesize constrainedSize=_constrainedSize - In the implementation block
@property (nonatomic,retain) UIFont * defaultFont;                                       //@synthesize defaultFont=_defaultFont - In the implementation block
@property (assign,nonatomic) CGSize textShadowOffset;                                    //@synthesize textShadowOffset=_textShadowOffset - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfLines;                    //@synthesize maximumNumberOfLines=_maximumNumberOfLines - In the implementation block
@property (assign,nonatomic) unsigned long long truncationMode;                          //@synthesize truncationMode=_truncationMode - In the implementation block
@property (nonatomic,copy) NSAttributedString * truncationAttributedString;              //@synthesize truncationAttributedString=_truncationAttributedString - In the implementation block
-(void)setConstrainedSize:(CGSize)arg1 ;
-(void)setTruncationAttributedString:(NSAttributedString *)arg1 ;
-(CGSize)textShadowOffset;
-(NSAttributedString *)truncationAttributedString;
-(void)setTextShadowOffset:(CGSize)arg1 ;
-(CGSize)constrainedSize;
-(void)setMaximumNumberOfLines:(unsigned long long)arg1 ;
-(UIFont *)defaultFont;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedString;
-(unsigned long long)maximumNumberOfLines;
-(void)setTruncationMode:(unsigned long long)arg1 ;
-(void)setDefaultFont:(UIFont *)arg1 ;
-(unsigned long long)truncationMode;
@end

