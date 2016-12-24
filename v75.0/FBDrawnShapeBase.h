/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBRichTextAttachmentImageGenerating.h>
#import <Facebook/FBDrawableShapeProtocol.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, NSArray, UIImage, NSString;

@interface FBDrawnShapeBase : NSObject <FBRichTextAttachmentImageGenerating, FBDrawableShapeProtocol, NSCoding, NSCopying> {

	BOOL _filled;
	UIColor* _color;
	double _lineWidth;
	double _rotation;
	double _cornerRadius;
	NSArray* _dashedLinePattern;
	UIImage* _image;
	CGRect _rect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) UIColor * color;                          //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) CGRect rect;                            //@synthesize rect=_rect - In the implementation block
@property (assign,nonatomic) double lineWidth;                       //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) double rotation;                        //@synthesize rotation=_rotation - In the implementation block
@property (assign,nonatomic) double cornerRadius;                    //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) BOOL filled;                            //@synthesize filled=_filled - In the implementation block
@property (nonatomic,copy) NSArray * dashedLinePattern;              //@synthesize dashedLinePattern=_dashedLinePattern - In the implementation block
@property (nonatomic,retain) UIImage * image;                        //@synthesize image=_image - In the implementation block
+(id)newWithRect:(CGRect)arg1 color:(id)arg2 lineWidth:(double)arg3 rotation:(double)arg4 filled:(BOOL)arg5 cornerRadius:(double)arg6 image:(id)arg7 ;
+(id)compositeImageWithBlock;
-(id)imageOfShapeWithSize:(CGSize)arg1 ;
-(id)imageWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(void)setDashedLinePattern:(NSArray *)arg1 ;
-(id)imageOfShapeWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)bezierPathInRect:(CGRect)arg1 ;
-(NSArray *)dashedLinePattern;
-(BOOL)filled;
-(CGSize)_boundingBoxSize:(CGSize)arg1 withRotation:(double)arg2 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setCornerRadius:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(void)drawInRect:(CGRect)arg1 ;
-(UIImage *)image;
-(double)cornerRadius;
-(CGRect)rect;
-(void)setRect:(CGRect)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setRotation:(double)arg1 ;
-(double)rotation;
-(void)setFilled:(BOOL)arg1 ;
@end

