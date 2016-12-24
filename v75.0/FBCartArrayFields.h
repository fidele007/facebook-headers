/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class FBTipCurrencyAmount, NSArray;

@interface FBCartArrayFields : FBGraphQLInput {

	FBTipCurrencyAmount* _tip;
	NSArray* _defaultField;

}

@property (nonatomic,copy) FBTipCurrencyAmount * tip;              //@synthesize tip=_tip - In the implementation block
@property (nonatomic,copy) NSArray * defaultField;                 //@synthesize defaultField=_defaultField - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSArray *)defaultField;
-(void)setDefaultField:(NSArray *)arg1 ;
-(void)setTip:(FBTipCurrencyAmount *)arg1 ;
-(FBTipCurrencyAmount *)tip;
@end
