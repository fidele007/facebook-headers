/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNSecureThreadSummary, MNIndexedSecureMessageSet;

@interface MNSecureThread : FBValueObject <NSCopying> {

	MNSecureThreadSummary* _summary;
	MNIndexedSecureMessageSet* _messages;

}

@property (nonatomic,copy,readonly) MNSecureThreadSummary * summary;                   //@synthesize summary=_summary - In the implementation block
@property (nonatomic,copy,readonly) MNIndexedSecureMessageSet * messages;              //@synthesize messages=_messages - In the implementation block
-(id)initWithSummary:(id)arg1 messages:(id)arg2 ;
-(MNSecureThreadSummary *)summary;
-(MNIndexedSecureMessageSet *)messages;
@end

