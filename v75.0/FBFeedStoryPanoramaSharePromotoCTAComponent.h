/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBFeedStoryCTARenderingComponent.h>

@class FBFeedToolbox, FBMemFeedStory, NSString;

@interface FBFeedStoryPanoramaSharePromotoCTAComponent : CKCompositeComponent <FBFeedStoryCTARenderingComponent> {

	FBFeedToolbox* _toolbox;
	FBMemFeedStory* _story;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithStory:(id)arg1 options:(const FBFeedStoryCTARenderingComponentOptions*)arg2 toolbox:(id)arg3 ;
+(id)identifier;
-(unordered_set<FBFeedEventBusEvents, std::__1::hash<FBFeedEventBusEvents>, std::__1::equal_to<FBFeedEventBusEvents>, std::__1::allocator<FBFeedEventBusEvents> >*)eventsTriggeringFadeIn;
@end

