/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAnnouncerBase.h>
#import <Facebook/FBSearchResultsActivityListener.h>

@class NSString;

@interface FBSearchResultsActivityListenerAnnouncer : FBAnnouncerBase <FBSearchResultsActivityListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)searchSessionDidEnterBackground;
-(void)resultsWithContext:(id)arg1 didReceiveClickOnNode:(id)arg2 atIndex:(long long)arg3 ;
-(void)resultsWithSessionID:(id)arg1 clientSessionID:(id)arg2 resultType:(unsigned long long)arg3 didTapSeeMoreOnModuleEdge:(id)arg4 inHeader:(BOOL)arg5 moduleIndex:(long long)arg6 ;
-(void)viewDidAppearForResultsWithContext:(id)arg1 ;
-(void)viewWillDisappearForResultsWithContext:(id)arg1 ;
-(void)resultsWithContext:(id)arg1 didMountPhoto:(id)arg2 toPhotoComponentController:(id)arg3 ;
-(void)resultsDidChangePageIndexToActiveViewController:(id)arg1 ;
-(void)resultsDidReceiveInitialContent:(id)arg1 ;
-(void)filtersModuleDidReceiveTapOnFilterAtIndex:(long long)arg1 ;
-(void)reloadableViewController:(id)arg1 shouldReloadWithQueryRewriteModel:(id)arg2 ;
-(void)resultsDidReceiveTabConfigsFromServer:(id)arg1 ;
-(void)filtersViewController:(id)arg1 didApplyFilters:(id)arg2 onController:(id)arg3 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

