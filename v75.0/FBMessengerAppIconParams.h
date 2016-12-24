/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSArray, NSNumber;

@interface FBMessengerAppIconParams : FBGraphQLInput {

	NSArray* _typeAttribute;
	NSNumber* _width;
	NSNumber* _height;
	NSNumber* _scale;

}

@property (nonatomic,copy) NSArray * typeAttribute;              //@synthesize typeAttribute=_typeAttribute - In the implementation block
@property (nonatomic,copy) NSNumber * width;                     //@synthesize width=_width - In the implementation block
@property (nonatomic,copy) NSNumber * height;                    //@synthesize height=_height - In the implementation block
@property (nonatomic,copy) NSNumber * scale;                     //@synthesize scale=_scale - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setScale:(NSNumber *)arg1 ;
-(NSNumber *)scale;
-(NSNumber *)width;
-(NSNumber *)height;
-(void)setWidth:(NSNumber *)arg1 ;
-(void)setHeight:(NSNumber *)arg1 ;
-(void)setTypeAttribute:(NSArray *)arg1 ;
-(NSArray *)typeAttribute;
@end

