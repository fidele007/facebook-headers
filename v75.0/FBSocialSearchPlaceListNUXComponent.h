/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBFeedToolbox, FBMemFeedStory, FBMemPlaceList, CKComponent;

@interface FBSocialSearchPlaceListNUXComponent : CKCompositeComponent {

	FBFeedToolbox* _toolbox;
	FBMemFeedStory* _story;
	FBMemPlaceList* _placeList;
	CKComponent* _nuxTargetComponent;

}

@property (nonatomic,readonly) FBFeedToolbox * toolbox;                       //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) FBMemFeedStory * story;                        //@synthesize story=_story - In the implementation block
@property (nonatomic,readonly) FBMemPlaceList * placeList;                    //@synthesize placeList=_placeList - In the implementation block
@property (nonatomic,readonly) CKComponent * nuxTargetComponent;              //@synthesize nuxTargetComponent=_nuxTargetComponent - In the implementation block
+(id)newWithComponent:(id)arg1 PlaceList:(id)arg2 story:(id)arg3 confirmLocationAction:(CKTypedComponentAction<>)arg4 editLocationAction:(CKTypedComponentAction<>)arg5 toolbox:(id)arg6 ;
-(FBFeedToolbox *)toolbox;
-(FBMemFeedStory *)story;
-(CKComponent *)nuxTargetComponent;
-(FBMemPlaceList *)placeList;
@end
