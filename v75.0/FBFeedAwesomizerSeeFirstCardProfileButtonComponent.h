/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@protocol FBQueriedProfileFieldsProtocol;
@class FBMemModelObject, FBFeedAwesomizerProfileListCardToolbox;

@interface FBFeedAwesomizerSeeFirstCardProfileButtonComponent : CKCompositeComponent {

	FBMemModelObject*<FBQueriedProfileFieldsProtocol> _profile;
	FBFeedAwesomizerProfileListCardToolbox* _toolbox;

}

@property (nonatomic,readonly) FBMemModelObject*<FBQueriedProfileFieldsProtocol> profile;              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) FBFeedAwesomizerProfileListCardToolbox * toolbox;                       //@synthesize toolbox=_toolbox - In the implementation block
+(id)newWithProfile:(id)arg1 toolbox:(id)arg2 ;
-(FBFeedAwesomizerProfileListCardToolbox *)toolbox;
-(FBMemModelObject*<FBQueriedProfileFieldsProtocol>)profile;
@end

