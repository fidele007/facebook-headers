/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FIGCardContentHScrollChildCompliant.h>

@class NSString, FBMemPerson, FBFeedToolbox;

@interface FBProfileDiscoveryHScrollChildComponent : CKCompositeComponent <FIGCardContentHScrollChildCompliant> {

	NSString* _bucketID;
	unsigned long long _index;
	FBMemPerson* _person;
	NSString* _referrerID;
	NSString* _referrerType;
	FBFeedToolbox* _toolbox;

}
+(id)newWithPerson:(id)arg1 bucketID:(id)arg2 index:(unsigned long long)arg3 referrerID:(id)arg4 referrerType:(id)arg5 toolbox:(id)arg6 ;
-(void)didTapChildComponent;
@end

