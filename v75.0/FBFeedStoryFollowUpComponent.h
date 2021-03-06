/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBFeedEventBus, FBMemFeedStory, FBFeedToolbox;

@interface FBFeedStoryFollowUpComponent : CKCompositeComponent {

	FBFeedEventBus* _eventBus;
	FBMemFeedStory* _story;
	FBFeedToolbox* _toolbox;

}

@property (nonatomic,retain) FBFeedEventBus * eventBus;              //@synthesize eventBus=_eventBus - In the implementation block
@property (nonatomic,readonly) FBMemFeedStory * story;               //@synthesize story=_story - In the implementation block
@property (nonatomic,retain) FBFeedToolbox * toolbox;                //@synthesize toolbox=_toolbox - In the implementation block
+(id)newWithContentComponent:(id)arg1 story:(id)arg2 eventBus:(id)arg3 toolbox:(id)arg4 ;
-(FBFeedToolbox *)toolbox;
-(FBMemFeedStory *)story;
-(void)setToolbox:(FBFeedToolbox *)arg1 ;
-(FBFeedEventBus *)eventBus;
-(void)setEventBus:(FBFeedEventBus *)arg1 ;
@end

