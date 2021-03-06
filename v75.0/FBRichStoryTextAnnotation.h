/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBRichStoryEntity.h>

@class NSString, UIImage, NSArray;

@interface FBRichStoryTextAnnotation : NSObject <FBRichStoryEntity> {

	NSString* _text;
	UIImage* _icon;
	NSArray* _attributedEntities;
	NSArray* _attributedInlineStyles;
	unsigned long long _textSize;
	unsigned long long _contentType;

}

@property (nonatomic,copy,readonly) NSString * text;                               //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) UIImage * icon;                                     //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy,readonly) NSArray * attributedEntities;                  //@synthesize attributedEntities=_attributedEntities - In the implementation block
@property (nonatomic,copy,readonly) NSArray * attributedInlineStyles;              //@synthesize attributedInlineStyles=_attributedInlineStyles - In the implementation block
@property (nonatomic,readonly) unsigned long long textSize;                        //@synthesize textSize=_textSize - In the implementation block
@property (nonatomic,readonly) unsigned long long contentType;                     //@synthesize contentType=_contentType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)annotationWithText:(id)arg1 icon:(id)arg2 attributedEntities:(id)arg3 attributedInlineStyles:(id)arg4 textSize:(unsigned long long)arg5 contentType:(unsigned long long)arg6 ;
-(NSArray *)attributedEntities;
-(NSArray *)attributedInlineStyles;
-(id)initWithText:(id)arg1 icon:(id)arg2 attributedEntities:(id)arg3 attributedInlineStyles:(id)arg4 textSize:(unsigned long long)arg5 contentType:(unsigned long long)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(unsigned long long)contentType;
-(unsigned long long)textSize;
-(UIImage *)icon;
@end

