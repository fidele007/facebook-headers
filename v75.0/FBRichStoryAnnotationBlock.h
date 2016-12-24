/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBRichStoryEntityBlock.h>

@class FBRichStoryTextAnnotation;

@interface FBRichStoryAnnotationBlock : FBRichStoryEntityBlock {

	BOOL _rendered;
	BOOL _requiresShadow;
	BOOL _requiresRelativeLayout;
	FBRichStoryTextAnnotation* _text;
	long long _order;
	long long _zIndex;
	FBAnnotationPosition _position;

}

@property (assign,nonatomic) BOOL rendered;                                 //@synthesize rendered=_rendered - In the implementation block
@property (assign,nonatomic) FBAnnotationPosition position;                 //@synthesize position=_position - In the implementation block
@property (nonatomic,retain) FBRichStoryTextAnnotation * text;              //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) BOOL requiresRelativeLayout;                   //@synthesize requiresRelativeLayout=_requiresRelativeLayout - In the implementation block
@property (nonatomic,readonly) BOOL requiresShadow;                         //@synthesize requiresShadow=_requiresShadow - In the implementation block
@property (nonatomic,readonly) long long order;                             //@synthesize order=_order - In the implementation block
@property (nonatomic,readonly) long long zIndex;                            //@synthesize zIndex=_zIndex - In the implementation block
+(id)annotationBlockWithID:(id)arg1 position:(FBAnnotationPosition)arg2 text:(id)arg3 entity:(id)arg4 ;
+(id)annotationBlockWithID:(id)arg1 position:(FBAnnotationPosition)arg2 text:(id)arg3 entity:(id)arg4 requiresShadow:(BOOL)arg5 requiresRelativeLayout:(BOOL)arg6 order:(long long)arg7 zIndex:(long long)arg8 ;
+(BOOL)_textRequiresRelativeLayout:(id)arg1 ;
-(id)copyWithPosition:(FBAnnotationPosition)arg1 ;
-(BOOL)rendered;
-(BOOL)requiresShadow;
-(BOOL)requiresRelativeLayout;
-(id)copyWithText:(id)arg1 ;
-(id)copyWithRendered:(BOOL)arg1 ;
-(id)initWithBlockID:(id)arg1 position:(FBAnnotationPosition)arg2 text:(id)arg3 entity:(id)arg4 rendered:(BOOL)arg5 requiresShadow:(BOOL)arg6 requiresRelativeLayout:(BOOL)arg7 order:(long long)arg8 zIndex:(long long)arg9 ;
-(void)setRendered:(BOOL)arg1 ;
-(void)setRequiresRelativeLayout:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FBRichStoryTextAnnotation *)text;
-(void)setText:(FBRichStoryTextAnnotation *)arg1 ;
-(void)setPosition:(FBAnnotationPosition)arg1 ;
-(FBAnnotationPosition)position;
-(long long)order;
-(long long)zIndex;
@end

