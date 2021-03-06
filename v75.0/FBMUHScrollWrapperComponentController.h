/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKComponentController.h>

@interface FBMUHScrollWrapperComponentController : CKComponentController {

	unsigned long long _selectedCardScrollIndex;

}
-(void)didMount;
-(void)didTapUnselectedCard:(id)arg1 context:(id)arg2 ;
-(void)didFinishPlayingSong:(id)arg1 ;
-(void)didEndDraggingScrollView:(id)arg1 context:(id)arg2 ;
-(void)_updateTappableOverlayViews;
-(void)_scrollToCardWithScrollIndexAndPlayIfNecessary:(unsigned long long)arg1 ;
-(id)_cardComponentAtScrollIndex:(unsigned long long)arg1 ;
-(id)_singleSongComponentControllerOfSingleSongComponent:(id)arg1 ;
-(unsigned long long)_numberOfSongs;
-(unsigned long long)_scrollIndexForSongIndex:(unsigned long long)arg1 ;
-(void)_updateSelectedCardScrollIndexAndPlayIfNecessary:(unsigned long long)arg1 ;
-(void)_setSelectedCardScrollIndex:(unsigned long long)arg1 ;
-(id)selectedChildComponent;
-(unsigned long long)_playbackViewState;
-(void)didTapAlbumCardPlayButton;
-(void)scrollToSongWithIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
@end

