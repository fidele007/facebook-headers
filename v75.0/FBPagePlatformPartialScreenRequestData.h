/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, NSArray, FBFirstPartyCTAPostFormFields;

@interface FBPagePlatformPartialScreenRequestData : FBGraphQLInput {

	NSString* _componentFlowId;
	NSString* _screenId;
	NSString* _screenElementId;
	NSArray* _targetScreenElementIds;
	NSString* _rawEventData;
	NSString* _rawFormFields;
	FBFirstPartyCTAPostFormFields* _formFields;
	NSString* _screenEvent;

}

@property (nonatomic,copy) NSString * componentFlowId;                              //@synthesize componentFlowId=_componentFlowId - In the implementation block
@property (nonatomic,copy) NSString * screenId;                                     //@synthesize screenId=_screenId - In the implementation block
@property (nonatomic,copy) NSString * screenElementId;                              //@synthesize screenElementId=_screenElementId - In the implementation block
@property (nonatomic,copy) NSArray * targetScreenElementIds;                        //@synthesize targetScreenElementIds=_targetScreenElementIds - In the implementation block
@property (nonatomic,copy) NSString * rawEventData;                                 //@synthesize rawEventData=_rawEventData - In the implementation block
@property (nonatomic,copy) NSString * rawFormFields;                                //@synthesize rawFormFields=_rawFormFields - In the implementation block
@property (nonatomic,copy) FBFirstPartyCTAPostFormFields * formFields;              //@synthesize formFields=_formFields - In the implementation block
@property (nonatomic,copy) NSString * screenEvent;                                  //@synthesize screenEvent=_screenEvent - In the implementation block
-(void)setComponentFlowId:(NSString *)arg1 ;
-(void)setScreenId:(NSString *)arg1 ;
-(void)setScreenElementId:(NSString *)arg1 ;
-(void)setTargetScreenElementIds:(NSArray *)arg1 ;
-(void)setRawEventData:(NSString *)arg1 ;
-(void)setRawFormFields:(NSString *)arg1 ;
-(void)setScreenEvent:(NSString *)arg1 ;
-(NSString *)componentFlowId;
-(NSString *)screenId;
-(FBFirstPartyCTAPostFormFields *)formFields;
-(NSArray *)targetScreenElementIds;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)screenElementId;
-(NSString *)rawEventData;
-(NSString *)rawFormFields;
-(void)setFormFields:(FBFirstPartyCTAPostFormFields *)arg1 ;
-(NSString *)screenEvent;
@end

