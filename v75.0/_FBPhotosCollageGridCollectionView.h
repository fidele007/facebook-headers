/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionView.h>
#import <Facebook/FBForceTouchIntentProvider.h>

@protocol FBForceTouchIntentProvider;
@class NSString;

@interface _FBPhotosCollageGridCollectionView : UICollectionView <FBForceTouchIntentProvider> {

	BOOL _shouldCancelTouchesWhenScrolling;
	id<FBForceTouchIntentProvider> _forceTouchIntentProvider;

}

@property (assign,nonatomic) BOOL shouldCancelTouchesWhenScrolling;                                       //@synthesize shouldCancelTouchesWhenScrolling=_shouldCancelTouchesWhenScrolling - In the implementation block
@property (assign,nonatomic,__weak) id<FBForceTouchIntentProvider> forceTouchIntentProvider;              //@synthesize forceTouchIntentProvider=_forceTouchIntentProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setShouldCancelTouchesWhenScrolling:(BOOL)arg1 ;
-(BOOL)shouldCancelTouchesWhenScrolling;
-(id)forceTouchIntentAtPoint:(CGPoint)arg1 sourceView:(id)arg2 ;
-(id<FBForceTouchIntentProvider>)forceTouchIntentProvider;
-(void)setForceTouchIntentProvider:(id<FBForceTouchIntentProvider>)arg1 ;
-(BOOL)touchesShouldCancelInContentView:(id)arg1 ;
@end

