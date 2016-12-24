/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNotificationsSettingsDataSourceListener.h>
#import <Facebook/FBNotificationsComponentSeparatorProviding.h>

@class FBNotificationsSettingsDataSource, NSSet, NSString;

@interface FBNotificationsOptionsComponentSeparatorProvider : NSObject <FBNotificationsSettingsDataSourceListener, FBNotificationsComponentSeparatorProviding> {

	FBNotificationsSettingsDataSource* _settingsDataSource;
	NSSet* _optionsWithoutBottomSeparator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)notificationsSettingsDataSource:(id)arg1 didLoadOptionSets:(id)arg2 ;
-(void)notificationsSettingsDataSource:(id)arg1 didFailLoadingOptionSetsWithError:(id)arg2 ;
-(void)notificationsSettingsDataSource:(id)arg1 didUpdateOptionSet:(id)arg2 atIndex:(long long)arg3 ;
-(BOOL)shouldShowBottomSeparatorForObject:(id)arg1 ;
-(id)initWithSettingsDataSource:(id)arg1 ;
-(void)dealloc;
@end

