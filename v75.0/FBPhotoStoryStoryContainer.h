/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPhotoStoryContainer.h>

@protocol FBPhotoStoryContainerDelegate;
@class FBMemStoryAttachment, FBMemFeedStory, NSString;

@interface FBPhotoStoryStoryContainer : NSObject <FBPhotoStoryContainer> {

	FBMemStoryAttachment* _attachment;
	FBMemFeedStory* _story;
	id<FBPhotoStoryContainerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPhotoStoryContainerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)story;
-(id)mediaSet;
-(void)_didUpdateStory:(id)arg1 ;
-(id)initWithStory:(id)arg1 attachment:(id)arg2 andGetLiveUpdatesFrom:(id)arg3 ;
-(void)setDelegate:(id<FBPhotoStoryContainerDelegate>)arg1 ;
-(id<FBPhotoStoryContainerDelegate>)delegate;
-(id)navigationBarTitle;
@end

