/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBExperimentParamaterTypeBridge : NSObject {

	id _defaultValue;
	char* _encodedType;

}

@property (assign,nonatomic) char* encodedType;              //@synthesize encodedType=_encodedType - In the implementation block
@property (nonatomic,retain) id defaultValue;                //@synthesize defaultValue=_defaultValue - In the implementation block
+(id)_coercedObjectFromValuePointer:(void*)arg1 encodedType:(inout char**)arg2 ;
+(id)_coercedNumberFromValue:(id)arg1 ;
+(id)_coercedStringFromValue:(id)arg1 ;
-(id)initWithEncodedType:(char*)arg1 defaultValue:(void*)arg2 ;
-(id)coercedValueFromValue:(id)arg1 ;
-(void)setEncodedType:(char*)arg1 ;
-(char*)encodedType;
-(void)callBlock:(id)arg1 withFirstArgument:(id)arg2 secondArgumentWithBridgedTypeAndValue:(id)arg3 ;
-(void)dealloc;
-(id)defaultValue;
-(void)setDefaultValue:(id)arg1 ;
-(id)typeString;
@end

