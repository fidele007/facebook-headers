/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FBPaymentsCustomOptionDescriptor : FBValueObject <NSCopying> {

	NSString* _customOptionTitle;
	NSString* _actionableText;
	NSArray* _fieldsDefinition;
	NSString* _disclaimer;

}

@property (nonatomic,copy,readonly) NSString * customOptionTitle;              //@synthesize customOptionTitle=_customOptionTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionableText;                 //@synthesize actionableText=_actionableText - In the implementation block
@property (nonatomic,copy,readonly) NSArray * fieldsDefinition;                //@synthesize fieldsDefinition=_fieldsDefinition - In the implementation block
@property (nonatomic,copy,readonly) NSString * disclaimer;                     //@synthesize disclaimer=_disclaimer - In the implementation block
-(id)initWithCustomOptionTitle:(id)arg1 actionableText:(id)arg2 fieldsDefinition:(id)arg3 disclaimer:(id)arg4 ;
-(NSString *)disclaimer;
-(NSString *)actionableText;
-(NSArray *)fieldsDefinition;
-(NSString *)customOptionTitle;
@end

