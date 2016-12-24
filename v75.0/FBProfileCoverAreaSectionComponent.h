/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCompositeSectionComponent.h>

@protocol FBProfileCoverAreaSectionComponentToolbox;
@class FBMemPerson;

@interface FBProfileCoverAreaSectionComponent : FBCompositeSectionComponent {

	FBMemPerson* _person;
	id<FBProfileCoverAreaSectionComponentToolbox> _toolbox;

}

@property (nonatomic,readonly) FBMemPerson * person;                                               //@synthesize person=_person - In the implementation block
@property (nonatomic,readonly) id<FBProfileCoverAreaSectionComponentToolbox> toolbox;              //@synthesize toolbox=_toolbox - In the implementation block
+(id)newWithPerson:(id)arg1 hasFullySyncedData:(BOOL)arg2 toolbox:(id)arg3 ;
-(id<FBProfileCoverAreaSectionComponentToolbox>)toolbox;
-(FBMemPerson *)person;
@end

