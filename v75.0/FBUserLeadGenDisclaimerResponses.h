/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString;

@interface FBUserLeadGenDisclaimerResponses : FBGraphQLInput {

	NSString* _checkboxKey;
	NSString* _isChecked;

}

@property (nonatomic,copy) NSString * checkboxKey;              //@synthesize checkboxKey=_checkboxKey - In the implementation block
@property (nonatomic,copy) NSString * isChecked;                //@synthesize isChecked=_isChecked - In the implementation block
-(void)setIsChecked:(NSString *)arg1 ;
-(void)setCheckboxKey:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)checkboxKey;
-(NSString *)isChecked;
@end
