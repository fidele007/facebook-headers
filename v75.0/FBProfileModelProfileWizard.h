/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemImage, NSArray;

@interface FBProfileModelProfileWizard : FBValueObject <NSCopying> {

	FBMemImage* _coverPhoto;
	NSArray* _stepsInfo;
	unsigned long long _wizardType;
	NSArray* _flowType;

}

@property (nonatomic,copy,readonly) FBMemImage * coverPhoto;               //@synthesize coverPhoto=_coverPhoto - In the implementation block
@property (nonatomic,copy,readonly) NSArray * stepsInfo;                   //@synthesize stepsInfo=_stepsInfo - In the implementation block
@property (nonatomic,readonly) unsigned long long wizardType;              //@synthesize wizardType=_wizardType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * flowType;                    //@synthesize flowType=_flowType - In the implementation block
-(FBMemImage *)coverPhoto;
-(id)initWithCoverPhoto:(id)arg1 stepsInfo:(id)arg2 wizardType:(unsigned long long)arg3 flowType:(id)arg4 ;
-(unsigned long long)wizardType;
-(NSArray *)stepsInfo;
-(NSArray *)flowType;
@end

