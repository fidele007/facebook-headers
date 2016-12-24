/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBRichStoryBlock.h>

@class NSArray, NSString;

@interface FBRichStoryTextBlock : FBRichStoryBlock {

	NSArray* _attributedEntities;
	NSArray* _attributedInlineStyles;
	long long _type;
	long long _alignment;
	NSString* _text;

}

@property (nonatomic,copy) NSArray * attributedEntities;                  //@synthesize attributedEntities=_attributedEntities - In the implementation block
@property (nonatomic,copy) NSArray * attributedInlineStyles;              //@synthesize attributedInlineStyles=_attributedInlineStyles - In the implementation block
@property (nonatomic,copy) NSString * text;                               //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long alignment;                       //@synthesize alignment=_alignment - In the implementation block
+(id)sponsoredBlockWithID:(id)arg1 ;
-(id)initWithType:(long long)arg1 text:(id)arg2 alignment:(long long)arg3 attributedEntities:(id)arg4 attributedInlineStyles:(id)arg5 blockID:(id)arg6 annotations:(id)arg7 ;
-(NSArray *)attributedEntities;
-(NSArray *)attributedInlineStyles;
-(id)copyWithType:(long long)arg1 ;
-(void)setAttributedEntities:(NSArray *)arg1 ;
-(void)setAttributedInlineStyles:(NSArray *)arg1 ;
-(id)description;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(long long)alignment;
@end
