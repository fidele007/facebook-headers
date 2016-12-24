/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBHScrollImpressionLogging.h>

@class FBLivestreamVideoPlayerComponent, FBMemVideo;

@interface FBLiveMapVideoComponent : CKCompositeComponent <FBHScrollImpressionLogging> {

	FBLivestreamVideoPlayerComponent* _livestreamComponent;
	CKTypedComponentAction<> _cardMoreAction;
	FBMemVideo* _video;

}
+(id)newWithVideo:(id)arg1 story:(id)arg2 imageDownloader:(id)arg3 scenePath:(id)arg4 toolbox:(id)arg5 cardMoreAction:(CKTypedComponentAction<>)arg6 ;
-(void)didStartPlaying;
-(void)didStopPlaying;
-(void)tapped;
-(void)threeDotsTap:(id)arg1 ;
@end
