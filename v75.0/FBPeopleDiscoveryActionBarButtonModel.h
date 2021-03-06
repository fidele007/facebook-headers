/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBPeopleDiscoveryActionBarButtonModel : FBValueObject <NSCopying> {

	BOOL _enabled;
	NSString* _label;
	unsigned long long _glyphName;
	SEL _buttonAction;
	NSString* _accessibilityIdentifier;

}

@property (nonatomic,copy,readonly) NSString * label;                                //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) unsigned long long glyphName;                         //@synthesize glyphName=_glyphName - In the implementation block
@property (nonatomic,readonly) SEL buttonAction;                                     //@synthesize buttonAction=_buttonAction - In the implementation block
@property (nonatomic,readonly) BOOL enabled;                                         //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessibilityIdentifier;              //@synthesize accessibilityIdentifier=_accessibilityIdentifier - In the implementation block
-(id)initWithLabel:(id)arg1 glyphName:(unsigned long long)arg2 buttonAction:(SEL)arg3 enabled:(BOOL)arg4 accessibilityIdentifier:(id)arg5 ;
-(unsigned long long)glyphName;
-(BOOL)enabled;
-(NSString *)accessibilityIdentifier;
-(NSString *)label;
-(SEL)buttonAction;
@end

