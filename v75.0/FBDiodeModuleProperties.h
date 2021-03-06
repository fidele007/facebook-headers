/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBDiodeModuleProperties : FBValueObject <NSCopying> {

	NSString* _defaultDisplayName;
	NSString* _displayNameForMessengerRedirectMenuItem;

}

@property (nonatomic,copy,readonly) NSString * defaultDisplayName;                                   //@synthesize defaultDisplayName=_defaultDisplayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayNameForMessengerRedirectMenuItem;              //@synthesize displayNameForMessengerRedirectMenuItem=_displayNameForMessengerRedirectMenuItem - In the implementation block
-(NSString *)defaultDisplayName;
-(NSString *)displayNameForMessengerRedirectMenuItem;
-(id)initWithDefaultDisplayName:(id)arg1 displayNameForMessengerRedirectMenuItem:(id)arg2 ;
@end

