/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPhotosCollageInsetsTrackingViewController.h>
#import <Facebook/FBPhotoSuggestionsControllerDelegate.h>

@class FBPhotoSuggestionsController, FBPhotoCollageSuggestionsView, FBUserSession;

@interface FBUploadedPhotosCollageGridViewController : FBPhotosCollageInsetsTrackingViewController <FBPhotoSuggestionsControllerDelegate> {

	FBPhotoSuggestionsController* _suggestionsController;
	FBPhotoCollageSuggestionsView* _photoCollageSuggestionView;
	FBUserSession* _session;
	BOOL _isOwner;

}
-(id)analyticsModule;
-(id)initWithMediaStore:(id)arg1 session:(id)arg2 referrer:(id)arg3 analyticsModule:(id)arg4 ;
-(id)initWithPerson:(id)arg1 session:(id)arg2 ;
-(id)photosConsumptionReferrerName;
-(void)_photoSuggestionsControllerMediaChanged:(id)arg1 ;
-(void)photoSuggestionsControllerContentDidChange:(id)arg1 ;
-(BOOL)photoSuggestionsController:(id)arg1 shouldShowTagGuideForUser:(id)arg2 ;
-(void)photoSuggestionsController:(id)arg1 photosDidUpdate:(id)arg2 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)_setupHeaderView;
@end
