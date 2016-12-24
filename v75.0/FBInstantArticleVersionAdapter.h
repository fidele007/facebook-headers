/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNativeArticleAdapter.h>

@protocol FBViewModelAdapterToolbox;
@class FBViewModelAdapterRegistry, FBMemInstantArticleVersion, NSOrderedSet, FBRichStoryStyleSheet, FBRichStoryPresentationState, FBRichStoryViewModel, NSArray, NSString;

@interface FBInstantArticleVersionAdapter : NSObject <FBNativeArticleAdapter> {

	FBViewModelAdapterRegistry* _adapterRegistry;
	FBMemInstantArticleVersion* _articleVersion;
	NSOrderedSet* _contributors;
	FBRichStoryStyleSheet* _fallbackStyleSheet;
	long long _layoutDirection;
	FBRichStoryPresentationState* _presentationState;
	FBRichStoryStyleSheet* _styleSheet;
	FBRichStoryViewModel* _story;
	NSArray* _thirdPartyTrackers;
	id<FBViewModelAdapterToolbox> _toolbox;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canAdaptDataModel:(id)arg1 ;
+(id)adapterWithDataModel:(id)arg1 toolbox:(id)arg2 ;
-(id)shareable;
-(id)thirdPartyTrackers;
-(id)fallbackStyleSheet;
-(id)publisherID;
-(id)publisherName;
-(void)_generateViewModelIfNecessary;
-(id)initWithArticleVersion:(id)arg1 toolbox:(id)arg2 ;
-(id)contributors;
-(id)viewModel;
-(id)styleSheet;
-(id)presentationState;
@end

