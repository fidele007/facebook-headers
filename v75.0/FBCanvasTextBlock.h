/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBRichStoryTextBlock.h>

@class FBMemInstantShoppingDocumentTextElement, UIColor, NSDictionary;

@interface FBCanvasTextBlock : FBRichStoryTextBlock {

	FBMemInstantShoppingDocumentTextElement* _element;
	unsigned long long _maxLines;
	UIColor* _backgroundColor;
	NSDictionary* _elementDescription;

}

@property (nonatomic,readonly) FBMemInstantShoppingDocumentTextElement * element;              //@synthesize element=_element - In the implementation block
@property (nonatomic,readonly) unsigned long long maxLines;                                    //@synthesize maxLines=_maxLines - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor;                                      //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * elementDescription;                         //@synthesize elementDescription=_elementDescription - In the implementation block
+(id)blockWithType:(long long)arg1 text:(id)arg2 alignment:(long long)arg3 attributedEntities:(id)arg4 attributedInlineStyles:(id)arg5 blockID:(id)arg6 annotations:(id)arg7 element:(id)arg8 maxLines:(unsigned long long)arg9 backgroundColor:(id)arg10 elementDescription:(id)arg11 ;
-(NSDictionary *)elementDescription;
-(UIColor *)backgroundColor;
-(FBMemInstantShoppingDocumentTextElement *)element;
-(unsigned long long)maxLines;
@end
