/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBSaveDashboardContext, FBSavedListViewItemDataModel;

@interface FBSavedItemBaseComponent : CKCompositeComponent {

	FBSaveDashboardContext* _toolbox;
	FBSavedListViewItemDataModel* _dataModel;

}
+(id)newWithDataModel:(id)arg1 thumbnailComponent:(id)arg2 toolbox:(id)arg3 ;
+(id)progressDot:(id)arg1 session:(id)arg2 ;
+(id)blueDot;
-(void)didTapSecondaryActionButton:(id)arg1 ;
-(void)didTapSocialContextRow:(id)arg1 ;
-(void)didTapShareButton:(id)arg1 ;
-(void)didTapArchiveButton:(id)arg1 ;
@end

