/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPlacePickerViewControllerDelegate <NSObject>
@optional
-(void)placePickerDidShowErrorView:(id)arg1;
-(void)placePicker:(id)arg1 didUpdateNearbyDataset:(id)arg2;
-(void)placePicker:(id)arg1 didFinishWithCrowdsourcedPlace:(id)arg2 location:(id)arg3 suggestedPhoto:(BOOL)arg4;
-(void)placePickerNeedsMaximize:(id)arg1;

@required
-(BOOL)placePickerDidCancel:(id)arg1;
-(void)placePicker:(id)arg1 didFinishWithPlace:(id)arg2 location:(id)arg3 suggestedPhoto:(BOOL)arg4;
-(void)placePicker:(id)arg1 didFinishWithFreeString:(id)arg2;
-(void)placePickerDidRemoveCurrentPlace:(id)arg1;

@end

