/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBViewModelAdapter.h>

@protocol FBViewModelAdapterToolbox;
@class FBViewModelAdapterRegistry, FBMemEventCollectionDocument, FBRichStoryPresentationState, FBRichStoryViewModel, NSString;

@interface FBEventCollectionDocumentAdapter : NSObject <FBViewModelAdapter> {

	FBViewModelAdapterRegistry* _adapterRegistry;
	FBMemEventCollectionDocument* _eventCollectionDocument;
	FBRichStoryPresentationState* _presentationState;
	FBRichStoryViewModel* _viewModel;
	id<FBViewModelAdapterToolbox> _toolbox;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canAdaptDataModel:(id)arg1 ;
+(id)adapterWithDataModel:(id)arg1 toolbox:(id)arg2 ;
+(id)baseStyleSheet;
-(id)initWithEventCollectionDocument:(id)arg1 toolbox:(id)arg2 ;
-(void)_generateViewModelIfNecessary;
-(id)viewModel;
-(id)presentationState;
@end
