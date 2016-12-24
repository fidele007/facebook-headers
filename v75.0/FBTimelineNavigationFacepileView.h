/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSArray, UIImage, FBUserSession, FBScenePath;

@interface FBTimelineNavigationFacepileView : UIView {

	NSArray* _profilePictureViews;
	UIImage* _defaultImage;
	FBUserSession* _session;
	FBScenePath* _scenePath;
	NSArray* _facepileURLs;

}

@property (nonatomic,copy) NSArray * facepileURLs;              //@synthesize facepileURLs=_facepileURLs - In the implementation block
+(id)facepileViewForAvatars:(id)arg1 session:(id)arg2 scenePath:(id)arg3 ;
+(id)facepileURLsForAvatars:(id)arg1 ;
+(id)_defaultImageFromAvatar:(id)arg1 ;
-(id)initWithFacepileURLs:(id)arg1 defaultImage:(id)arg2 session:(id)arg3 scenePath:(id)arg4 ;
-(void)setFacepileURLs:(NSArray *)arg1 ;
-(NSArray *)facepileURLs;
-(id)init;
-(void)layoutSubviews;
@end
