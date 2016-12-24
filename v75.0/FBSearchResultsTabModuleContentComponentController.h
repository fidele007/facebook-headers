/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponentController.h>
#import <Facebook/FBSearchResultsTabModuleContentLoaderDelegate.h>

@class NSArray, FBSearchResultsTabModuleContentState, FBSearchComponentModel, FBSearchResultsTabModuleContentComponent, NSString;

@interface FBSearchResultsTabModuleContentComponentController : CKComponentController <FBSearchResultsTabModuleContentLoaderDelegate> {

	CGSize _containerSize;
	unsigned long long _currentIndex;
	NSArray* _contentLoaders;
	FBSearchResultsTabModuleContentState* _previousState;
	FBSearchComponentModel* _moduleEdgeModel;

}

@property (nonatomic,readonly) FBSearchResultsTabModuleContentComponent * contentComponent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBSearchResultsTabModuleContentComponent *)contentComponent;
-(void)didMount;
-(void)didTapComponent:(id)arg1 index:(id)arg2 ;
-(id)initWithComponent:(id)arg1 ;
-(void)updateTabIndexUpdate;
-(void)preloadContentIfNeeded;
-(void)updateComponentState;
-(void)didLoadContentAtIndex:(unsigned long long)arg1 ;
@end

