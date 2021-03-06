/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemPerson, NSDate;

@interface FBDirectParticipant : FBValueObject <NSCopying> {

	FBMemPerson* _person;
	NSDate* _seenTime;

}

@property (nonatomic,copy,readonly) FBMemPerson * person;              //@synthesize person=_person - In the implementation block
@property (nonatomic,copy,readonly) NSDate * seenTime;                 //@synthesize seenTime=_seenTime - In the implementation block
-(id)initWithPerson:(id)arg1 seenTime:(id)arg2 ;
-(NSDate *)seenTime;
-(FBMemPerson *)person;
@end

