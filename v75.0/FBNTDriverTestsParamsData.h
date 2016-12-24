/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class FBNativeTemplateContextData, NSArray;

@interface FBNTDriverTestsParamsData : FBGraphQLInput {

	FBNativeTemplateContextData* _ntContext;
	NSArray* _setNames;

}

@property (nonatomic,copy) FBNativeTemplateContextData * ntContext;              //@synthesize ntContext=_ntContext - In the implementation block
@property (nonatomic,copy) NSArray * setNames;                                   //@synthesize setNames=_setNames - In the implementation block
-(void)setNtContext:(FBNativeTemplateContextData *)arg1 ;
-(FBNativeTemplateContextData *)ntContext;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSArray *)setNames;
-(void)setSetNames:(NSArray *)arg1 ;
@end
