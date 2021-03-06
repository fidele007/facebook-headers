/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class NSString, UIFont;

@interface FBOfferExpandableTextSectionComponent : CKCompositeComponent {

	NSString* _content;
	UIFont* _contentFont;
	unsigned long long _maxCollapsedLines;

}

@property (nonatomic,copy) NSString * content;                                  //@synthesize content=_content - In the implementation block
@property (assign,nonatomic,__weak) UIFont * contentFont;                       //@synthesize contentFont=_contentFont - In the implementation block
@property (assign,nonatomic) unsigned long long maxCollapsedLines;              //@synthesize maxCollapsedLines=_maxCollapsedLines - In the implementation block
+(id)newWithTitle:(id)arg1 content:(id)arg2 maxCollapsedLines:(unsigned long long)arg3 attributes:(const FBOfferExpandableTextSectionComponentAttributes*)arg4 ;
+(id)initialState;
-(void)_onTappedText:(id)arg1 ;
-(void)setContentFont:(UIFont *)arg1 ;
-(void)setMaxCollapsedLines:(unsigned long long)arg1 ;
-(UIFont *)contentFont;
-(unsigned long long)maxCollapsedLines;
-(NSString *)content;
-(void)setContent:(NSString *)arg1 ;
@end

