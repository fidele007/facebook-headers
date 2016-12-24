/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBRichStoryElement;
@class FBRichStoryElementLayoutAttributes;

@interface FBLayoutAttributeStoreEntry : NSObject {

	FBRichStoryElementLayoutAttributes* _layoutAttributes;
	id<FBRichStoryElement> _element;

}

@property (nonatomic,retain) FBRichStoryElementLayoutAttributes * layoutAttributes;              //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (nonatomic,retain) id<FBRichStoryElement> element;                                     //@synthesize element=_element - In the implementation block
+(id)entryWithAttributes:(id)arg1 element:(id)arg2 ;
-(void)setLayoutAttributes:(FBRichStoryElementLayoutAttributes *)arg1 ;
-(FBRichStoryElementLayoutAttributes *)layoutAttributes;
-(id<FBRichStoryElement>)element;
-(void)setElement:(id<FBRichStoryElement>)arg1 ;
@end

