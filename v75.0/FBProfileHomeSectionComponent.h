/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCompositeSectionComponent.h>

@class FBProfileWaterMarkTracker, FBRootGraphQLQuerySectionComponentListenerAnnouncer;

@interface FBProfileHomeSectionComponent : FBCompositeSectionComponent {

	FBProfileWaterMarkTracker* _waterMarkTracker;
	FBRootGraphQLQuerySectionComponentListenerAnnouncer* _rootGQLAnnouncer;

}

@property (nonatomic,readonly) FBProfileWaterMarkTracker * waterMarkTracker;                                        //@synthesize waterMarkTracker=_waterMarkTracker - In the implementation block
@property (nonatomic,readonly) FBRootGraphQLQuerySectionComponentListenerAnnouncer * rootGQLAnnouncer;              //@synthesize rootGQLAnnouncer=_rootGQLAnnouncer - In the implementation block
+(id)newWithSession:(id)arg1 sectionComponentToolbox:(id)arg2 profileToolbox:(id)arg3 isViewingSelf:(BOOL)arg4 targetPerson:(id)arg5 shouldShowFriendingBoost:(BOOL)arg6 shouldShowPYMK:(BOOL)arg7 shouldShowUnseenSection:(BOOL)arg8 watermarkTracker:(id)arg9 shouldShowComposerAboveProtiles:(BOOL)arg10 shouldShowNavBar:(BOOL)arg11 shouldShowIntroCard:(BOOL)arg12 shouldUseSlimProtiles:(BOOL)arg13 sectionTypes:(id)arg14 viewStyleTypes:(id)arg15 shouldShowExpandingButton:(BOOL)arg16 shouldShowBottomLabel:(BOOL)arg17 headerSectionConfiguration:(id)arg18 feedUnitsWithPostingToolbox:(id)arg19 shouldOmitUnseenStories:(BOOL)arg20 rootGQLAnnouncer:(id)arg21 ;
-(FBProfileWaterMarkTracker *)waterMarkTracker;
-(FBRootGraphQLQuerySectionComponentListenerAnnouncer *)rootGQLAnnouncer;
@end

