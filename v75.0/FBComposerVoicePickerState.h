/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBComposerAuthor, FBComposerPublishTarget;

@interface FBComposerVoicePickerState : FBValueObject <NSCopying> {

	FBComposerAuthor* _author;
	FBComposerPublishTarget* _publishTarget;

}

@property (nonatomic,copy,readonly) FBComposerAuthor * author;                            //@synthesize author=_author - In the implementation block
@property (nonatomic,copy,readonly) FBComposerPublishTarget * publishTarget;              //@synthesize publishTarget=_publishTarget - In the implementation block
-(FBComposerPublishTarget *)publishTarget;
-(id)initWithAuthor:(id)arg1 publishTarget:(id)arg2 ;
-(FBComposerAuthor *)author;
@end
