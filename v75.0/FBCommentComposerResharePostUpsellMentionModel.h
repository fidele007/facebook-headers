/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMention, FBMemPerson;

@interface FBCommentComposerResharePostUpsellMentionModel : FBValueObject <NSCopying> {

	FBMention* _mention;
	FBMemPerson* _mentionee;

}

@property (nonatomic,copy,readonly) FBMention * mention;                  //@synthesize mention=_mention - In the implementation block
@property (nonatomic,copy,readonly) FBMemPerson * mentionee;              //@synthesize mentionee=_mentionee - In the implementation block
-(FBMention *)mention;
-(FBMemPerson *)mentionee;
-(id)initWithMention:(id)arg1 mentionee:(id)arg2 ;
@end
