/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBFeedToolbox, FBMemPage, NSArray;

@interface FBFeedStoryPlaceCoverComponent : CKCompositeComponent {

	FBFeedToolbox* _toolbox;
	FBMemPage* _placePage;
	NSArray* _trackingCodes;

}
+(id)newWithPlace:(const FBFeedStoryPlaceCoverComponentGraphQL*)arg1 multiPlaceInfo:(id)arg2 trackingCodes:(id)arg3 toolbox:(id)arg4 ;
-(void)didTapOnMap;
@end

