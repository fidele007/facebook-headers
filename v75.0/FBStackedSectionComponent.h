/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBSectionComponent.h>

@class NSDictionary;

@interface FBStackedSectionComponent : FBSectionComponent {

	vector<FBSectionComponent *, std::__1::allocator<FBSectionComponent *> >* _children;
	long long _numberOfSections;
	NSDictionary* _keyToComponentMap;

}
+(id)newWithChildren:(const vector<FBSectionComponent *, std::__1::allocator<FBSectionComponent *> >*)arg1 ;
-(void)componentWillAppear;
-(void)didRequestReload;
-(void)didScrollToBottom;
-(void)didScrollToTop;
-(void)didPullToRefresh;
-(void)componentDidDisappear;
-(void)componentWillDisappear;
-(void)didRequestPrefetchingData;
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

