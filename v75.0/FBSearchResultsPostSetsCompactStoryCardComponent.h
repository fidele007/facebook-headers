/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBSearchResultsContext, FBSearchComponentModel, FBGraphSearchLiveFeedStoryComponent;

@interface FBSearchResultsPostSetsCompactStoryCardComponent : CKCompositeComponent {

	FBSearchResultsContext* _context;
	FBSearchComponentModel* _storyEdgeModel;
	FBGraphSearchLiveFeedStoryComponent* _storyComponent;

}
+(id)newWithStoryEdgeModel:(id)arg1 style:(const FBSearchResultsPostSetsCompactStoryCardComponentStyle*)arg2 context:(id)arg3 ;
-(void)didTapStory;
@end

