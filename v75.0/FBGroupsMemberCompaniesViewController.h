/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGroupsAbstractPagedDataViewController.h>
#import <Facebook/FBGroupsMemberCompaniesDataSourceActionHandler.h>

@protocol FBGroupsMemberPickerProviderProtocol, FBGroupsMembersViewConfig;
@class FBGroupsMemberCompaniesDataSource, NSString;

@interface FBGroupsMemberCompaniesViewController : FBGroupsAbstractPagedDataViewController <FBGroupsMemberCompaniesDataSourceActionHandler> {

	FBGroupsMemberCompaniesDataSource* _dataSource;
	id<FBGroupsMemberPickerProviderProtocol> _pickerProvider;
	NSString* _groupID;
	id<FBGroupsMembersViewConfig> _viewConfig;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fb_showNavBarSearchField;
-(id)initWithSession:(id)arg1 groupID:(id)arg2 viewConfig:(id)arg3 pickerProvider:(id)arg4 ;
-(void)dataSource:(id)arg1 didSelectWorkCommunity:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLoad;
@end
