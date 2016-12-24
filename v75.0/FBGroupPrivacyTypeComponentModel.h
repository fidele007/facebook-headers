/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBGroupPrivacyTypeComponentModel : FBValueObject <NSCopying> {

	BOOL _isSelected;
	BOOL _isLastRow;
	NSString* _privacyValue;
	NSString* _parentGroupName;

}

@property (nonatomic,copy,readonly) NSString * privacyValue;                 //@synthesize privacyValue=_privacyValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * parentGroupName;              //@synthesize parentGroupName=_parentGroupName - In the implementation block
@property (nonatomic,readonly) BOOL isSelected;                              //@synthesize isSelected=_isSelected - In the implementation block
@property (nonatomic,readonly) BOOL isLastRow;                               //@synthesize isLastRow=_isLastRow - In the implementation block
-(BOOL)isLastRow;
-(NSString *)parentGroupName;
-(id)initWithPrivacyValue:(id)arg1 parentGroupName:(id)arg2 isSelected:(BOOL)arg3 isLastRow:(BOOL)arg4 ;
-(NSString *)privacyValue;
-(BOOL)isSelected;
@end

