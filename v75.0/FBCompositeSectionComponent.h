/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSectionComponent.h>

@class FBSectionComponent;

@interface FBCompositeSectionComponent : FBSectionComponent {

	FBSectionComponent* _component;

}
+(id)newWithComponent:(id)arg1 ;
-(void)componentWillAppear;
-(void)didRequestReload;
-(void)didScrollToBottom;
-(void)didScrollToTop;
-(void)didPullToRefresh;
-(void)componentDidDisappear;
-(void)componentWillDisappear;
-(void)didRequestPrefetchingData;
-(id)initWithComponent:(id)arg1 ;
-(void)componentDidAppear;
-(void)didChangeComponentWithPreviousComponent:(id)arg1 userInfoFromStateUpdate:(id)arg2 ;
-(id)changesetFromPreviousComponent:(id)arg1 ;
-(id)changesetToRemoveAll;
-(void)didAttachComponent;
-(void)didUnattachComponent;
-(id)toSectionComponentHierarchy:(id)arg1 ;
-(void)addToCurrentScope;
-(long long)numberOfSections;
@end

