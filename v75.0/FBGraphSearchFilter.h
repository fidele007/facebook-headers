/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString;

@interface FBGraphSearchFilter : FBGraphQLInput {

	NSString* _name;
	NSString* _handle;
	NSString* _action;
	NSString* _value;

}

@property (nonatomic,copy) NSString * name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * handle;              //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy) NSString * action;              //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * value;               //@synthesize value=_value - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)action;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setAction:(NSString *)arg1 ;
-(void)setHandle:(NSString *)arg1 ;
-(NSString *)handle;
@end

