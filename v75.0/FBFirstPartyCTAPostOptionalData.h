/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSNumber, NSString;

@interface FBFirstPartyCTAPostOptionalData : FBGraphQLInput {

	NSNumber* _cacheBuster;
	NSString* _initialInput;
	NSString* _flowSource;

}

@property (nonatomic,copy) NSNumber * cacheBuster;               //@synthesize cacheBuster=_cacheBuster - In the implementation block
@property (nonatomic,copy) NSString * initialInput;              //@synthesize initialInput=_initialInput - In the implementation block
@property (nonatomic,copy) NSString * flowSource;                //@synthesize flowSource=_flowSource - In the implementation block
-(void)setFlowSource:(NSString *)arg1 ;
-(NSString *)flowSource;
-(void)setInitialInput:(NSString *)arg1 ;
-(NSString *)initialInput;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSNumber *)cacheBuster;
-(void)setCacheBuster:(NSNumber *)arg1 ;
@end
