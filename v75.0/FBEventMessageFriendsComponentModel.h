/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemPerson;

@interface FBEventMessageFriendsComponentModel : FBValueObject <NSCopying> {

	BOOL _isSelected;
	FBMemPerson* _person;

}

@property (nonatomic,copy,readonly) FBMemPerson * person;              //@synthesize person=_person - In the implementation block
@property (nonatomic,readonly) BOOL isSelected;                        //@synthesize isSelected=_isSelected - In the implementation block
-(id)initWithPerson:(id)arg1 isSelected:(BOOL)arg2 ;
-(BOOL)isSelected;
-(FBMemPerson *)person;
@end

