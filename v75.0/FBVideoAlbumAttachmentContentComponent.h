/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@protocol FBQueriedVideoChannelFieldsProtocol;
@class NSArray, FBVideoAlbumAttachmentChannelVideoPlayerComponent, FBMemModelObject, NSString, FBVideoAlbumAttachmentSummaryComponent, NSMutableArray, FBFeedToolbox;

@interface FBVideoAlbumAttachmentContentComponent : CKCompositeComponent {

	NSArray* _contentInfo;
	FBVideoAlbumAttachmentChannelVideoPlayerComponent* _channelVideoPlayerComponent;
	FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol> _singlePublisherChannel;
	NSString* _storySetID;
	FBVideoAlbumAttachmentSummaryComponent* _summaryComponent;
	long long _summaryDuration;
	NSMutableArray* _thumbnailComponents;
	FBFeedToolbox* _toolbox;
	NSMutableArray* _stories;
	NSArray* _trackingCodes;
	CKTypedComponentAction<> _onSeeAllTapAction;
	unsigned long long _playState;

}
+(id)newWithContentInfo:(id)arg1 singlePublisherChannel:(id)arg2 onSeeAllTapAction:(CKTypedComponentAction<>)arg3 storySetID:(id)arg4 options:(const FBVideoAlbumAttachmentContentComponentOptions*)arg5 toolbox:(id)arg6 ;
+(id)initialState;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsFromPreviousComponent:(id)arg1 ;
-(void)_enterChannel;
@end

