/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBMediaCreativeToolsBaseViewDelegate.h>
#import <Facebook/FBMediaCreativeToolAnimationProtocol.h>

@protocol FBVideoCreativeToolsApplier, FBMediaCreativeToolFilterViewDelegate;
@class FBMediaCreativeToolsBaseView, NSString;

@interface FBMediaCreativeToolFilterView : UIView <FBMediaCreativeToolsBaseViewDelegate, FBMediaCreativeToolAnimationProtocol> {

	FBMediaCreativeToolsBaseView* _baseView;
	id<FBVideoCreativeToolsApplier> _creativeToolsApplier;
	BOOL _enableStaticFilteredImage;
	unsigned long long _selectedIndex;
	id<FBMediaCreativeToolFilterViewDelegate> _filterDelegate;

}

@property (assign,nonatomic) unsigned long long selectedIndex;                                             //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (assign,nonatomic,__weak) id<FBMediaCreativeToolFilterViewDelegate> filterDelegate;              //@synthesize filterDelegate=_filterDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)collectionViewDataFromFilters:(id)arg1 masksEnabled:(BOOL)arg2 ;
-(id<FBMediaCreativeToolFilterViewDelegate>)filterDelegate;
-(void)setFilterDelegate:(id<FBMediaCreativeToolFilterViewDelegate>)arg1 ;
-(void)loadWithInitialAnimation:(/*^block*/id)arg1 ;
-(void)loadWithTransitionAnimation:(/*^block*/id)arg1 ;
-(void)disappearWithFinishAnimation:(/*^block*/id)arg1 ;
-(void)disappearWithTransitionAnimation:(/*^block*/id)arg1 ;
-(void)mediaCreativeToolsBaseView:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3 ;
-(id)initWithSession:(id)arg1 creativeToolsApplier:(id)arg2 filters:(id)arg3 masksEnabled:(BOOL)arg4 enableStaticFilteredImage:(BOOL)arg5 ;
-(void)updateViewWithCameraSampleBuffer:(opaqueCMSampleBufferRef)arg1 contentTransform:(GLKMatrix4)arg2 ;
-(void)layoutSubviews;
-(unsigned long long)selectedIndex;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
@end

