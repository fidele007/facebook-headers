/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBAnnouncerBase.h>
#import <Facebook/FBFeedAwesomizerProfileListCardViewControllerListener.h>

@class NSString;

@interface FBFeedAwesomizerProfileListCardViewControllerListenerAnnouncer : FBAnnouncerBase <FBFeedAwesomizerProfileListCardViewControllerListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cardWillOpenWithIdentifier:(long long)arg1 analyticInfo:(id)arg2 profileSelectionAnimationsEnabled:(BOOL)arg3 ;
-(void)cardWillCloseWithProfileProviderAnalyticInfo:(id)arg1 ;
-(void)learnMorePageWillOpen;
-(void)learnMorePageWillClose;
-(void)profileAtIndexWillAppear:(long long)arg1 ;
-(void)profileAtIndexWasOptimisticallySelected:(long long)arg1 inMode:(id)arg2 ;
-(void)profileAtIndexWasOptimisticallyUnselected:(long long)arg1 inMode:(id)arg2 ;
-(void)profileAtIndexWasSelected:(long long)arg1 ;
-(void)profileAtIndexWasUnselected:(long long)arg1 ;
-(void)didOpenSearchMode;
-(void)didCloseSearchMode;
-(void)searchLoadingFinished;
-(void)scrollViewDidScroll:(FBScrollViewState)arg1 ;
-(void)viewDidAppear;
-(void)viewDidDisappear;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
