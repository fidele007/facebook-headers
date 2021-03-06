/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Facebook/FBSocialSearchPlaceListDisplayProtocol.h>

@protocol FBSocialSearchPlaceListEditorDelegate;
@class NSArray, FBFeedToolbox, FBMemFeedStory, NSObject, NSString;

@interface FBSocialSearchPlaceListListViewController : UITableViewController <FBSocialSearchPlaceListDisplayProtocol> {

	NSArray* _placeListItemModels;
	FBFeedToolbox* _toolbox;
	FBMemFeedStory* _targetStory;
	NSObject*<FBSocialSearchPlaceListEditorDelegate> _placeListEditorDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) NSObject*<FBSocialSearchPlaceListEditorDelegate> placeListEditorDelegate;              //@synthesize placeListEditorDelegate=_placeListEditorDelegate - In the implementation block
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)_addRecommendationAction:(id)arg1 ;
-(void)reloadPlaceList:(id)arg1 eventType:(long long)arg2 ;
-(NSObject*<FBSocialSearchPlaceListEditorDelegate>)placeListEditorDelegate;
-(void)setPlaceListEditorDelegate:(NSObject*<FBSocialSearchPlaceListEditorDelegate>)arg1 ;
-(id)initWithTargetStory:(id)arg1 placeListEditorDelegate:(id)arg2 toolbox:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end

