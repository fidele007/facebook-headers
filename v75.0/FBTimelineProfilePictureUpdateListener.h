/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBTimelineProfilePictureUpdateListener <NSObject>
@required
-(void)profilePictureUpdaterHandlerDidChoosePic:(id)arg1 attachment:(id)arg2 selectingViewController:(id)arg3;
-(void)profilePictureDidStartUpdate;
-(void)profilePictureDidFinishUpdate;
-(void)profilePictureDidFailToUpdate;
-(void)profilePictureUpdaterHandlerDidChooseVideo:(id)arg1 selectingViewController:(id)arg2;
-(void)profilePicturePickerDidCancel;
-(id)fb_hostingViewController;
-(void)profileMediaPickerDidAppear;

@end

