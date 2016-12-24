/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBComponentCellAppearanceEventListener.h>

@class FBNotificationsComponentDataSourceWrapper, UIView, NSString;

@interface FBNotificationsFriendingIntermixedLoadingViewManager : NSObject <FBComponentCellAppearanceEventListener> {

	FBNotificationsComponentDataSourceWrapper* _componentDataSource;
	UIView* _loadingView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)componentWillAppearInViewWithFrame:(CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3 ;
-(void)componentDidDisappearFromViewWithFrame:(CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3 ;
-(id)initWithContainingView:(id)arg1 componentDataSource:(id)arg2 ;
-(id)initWithContainingView:(id)arg1 componentDataSource:(id)arg2 loadingViewFactory:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

