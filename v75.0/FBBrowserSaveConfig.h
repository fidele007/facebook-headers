/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBBrowserSaveConfig : FBValueObject <NSCopying> {

	NSString* _saveConfirmationText;
	NSString* _unsaveConfirmationText;
	NSString* _loggingSurface;
	NSString* _dashboardReferrer;

}

@property (nonatomic,copy,readonly) NSString * saveConfirmationText;                //@synthesize saveConfirmationText=_saveConfirmationText - In the implementation block
@property (nonatomic,copy,readonly) NSString * unsaveConfirmationText;              //@synthesize unsaveConfirmationText=_unsaveConfirmationText - In the implementation block
@property (nonatomic,copy,readonly) NSString * loggingSurface;                      //@synthesize loggingSurface=_loggingSurface - In the implementation block
@property (nonatomic,copy,readonly) NSString * dashboardReferrer;                   //@synthesize dashboardReferrer=_dashboardReferrer - In the implementation block
-(id)initWithSaveConfirmationText:(id)arg1 unsaveConfirmationText:(id)arg2 loggingSurface:(id)arg3 dashboardReferrer:(id)arg4 ;
-(NSString *)saveConfirmationText;
-(NSString *)unsaveConfirmationText;
-(NSString *)loggingSurface;
-(NSString *)dashboardReferrer;
@end

