/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@interface FBRichStoryElementLayoutAttributes : NSObject {

	CGPoint _origin;
	CGSize _size;
	CGSize _constrainingSize;

}

@property (assign,nonatomic) CGPoint origin;                       //@synthesize origin=_origin - In the implementation block
@property (assign,nonatomic) CGSize size;                          //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) CGSize constrainingSize;              //@synthesize constrainingSize=_constrainingSize - In the implementation block
+(id)layoutAttributesWithOrigin:(CGPoint)arg1 size:(CGSize)arg2 constrainingSize:(CGSize)arg3 ;
-(CGSize)constrainingSize;
-(void)setConstrainingSize:(CGSize)arg1 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(CGPoint)origin;
-(void)setOrigin:(CGPoint)arg1 ;
@end

