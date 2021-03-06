/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBComposerPrivacySetting;

@interface FBPrivacyReviewCorePrivacyActionBundle : FBValueObject <NSCopying> {

	id _model;
	FBComposerPrivacySetting* _privacySetting;

}

@property (nonatomic,copy,readonly) id model;                                               //@synthesize model=_model - In the implementation block
@property (nonatomic,copy,readonly) FBComposerPrivacySetting * privacySetting;              //@synthesize privacySetting=_privacySetting - In the implementation block
-(id)initWithModel:(id)arg1 privacySetting:(id)arg2 ;
-(id)model;
-(FBComposerPrivacySetting *)privacySetting;
@end

