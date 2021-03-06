/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASLayoutable <ASEnvironment,ASStackLayoutable,ASStaticLayoutable,ASLayoutablePrivate,ASLayoutableExtensibility>
@property (nonatomic,readonly) unsigned long long layoutableType; 
@property (nonatomic,readonly) BOOL canLayoutAsynchronous; 
@property (assign,nonatomic) double spacingBefore; 
@property (assign,nonatomic) double spacingAfter; 
@property (assign,nonatomic) BOOL flexGrow; 
@property (assign,nonatomic) BOOL flexShrink; 
@property (assign,nonatomic) SCD_Struct_AS883 flexBasis; 
@property (assign,nonatomic) unsigned long long alignSelf; 
@property (assign,nonatomic) double ascender; 
@property (assign,nonatomic) double descender; 
@property (assign,nonatomic) SCD_Struct_AS885 sizeRange; 
@property (assign,nonatomic) CGPoint layoutPosition; 
@required
-(id)measureWithSizeRange:(CKSizeRange)arg1;
-(unsigned long long)layoutableType;
-(BOOL)canLayoutAsynchronous;
-(void)setSpacingBefore:(double)arg1;
-(void)setSpacingAfter:(double)arg1;
-(void)setFlexGrow:(BOOL)arg1;
-(void)setFlexShrink:(BOOL)arg1;
-(void)setFlexBasis:(SCD_Struct_AS883)arg1;
-(void)setAlignSelf:(unsigned long long)arg1;
-(void)setAscender:(double)arg1;
-(void)setDescender:(double)arg1;
-(void)setSizeRange:(SCD_Struct_AS885)arg1;
-(SCD_Struct_AS885)sizeRange;
-(double)spacingBefore;
-(double)spacingAfter;
-(BOOL)flexGrow;
-(BOOL)flexShrink;
-(SCD_Struct_AS883)flexBasis;
-(unsigned long long)alignSelf;
-(double)ascender;
-(double)descender;
-(void)setLayoutPosition:(CGPoint)arg1;
-(CGPoint)layoutPosition;

@end

