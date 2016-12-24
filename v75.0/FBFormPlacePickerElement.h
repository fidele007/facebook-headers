/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBFormPickerElement.h>
#import <Facebook/FBPlacePickerViewControllerDelegate.h>

@class FBNearbyCache, FBPlacePickerBaseViewController, FBUserSession, FBNearbyPlace, NSString;

@interface FBFormPlacePickerElement : FBFormPickerElement <FBPlacePickerViewControllerDelegate> {

	FBNearbyCache* _nearbyCache;
	FBPlacePickerBaseViewController* _picker;
	FBUserSession* _session;
	/*^block*/id _pickerSelectBlock;

}

@property (nonatomic,readonly) FBNearbyPlace * selectedPlace; 
@property (nonatomic,copy) id pickerSelectBlock;                           //@synthesize pickerSelectBlock=_pickerSelectBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)placePickerDidCancel:(id)arg1 ;
-(void)placePicker:(id)arg1 didFinishWithPlace:(id)arg2 location:(id)arg3 suggestedPhoto:(BOOL)arg4 ;
-(void)placePicker:(id)arg1 didFinishWithFreeString:(id)arg2 ;
-(void)placePickerDidRemoveCurrentPlace:(id)arg1 ;
-(void)setSelectBlock:(/*^block*/id)arg1 ;
-(id)initWithID:(long long)arg1 selectedPlace:(id)arg2 session:(id)arg3 ;
-(id)pickerSelectBlock;
-(void)setPickerSelectBlock:(id)arg1 ;
-(void)_openPlacePicker;
-(FBNearbyPlace *)selectedPlace;
-(BOOL)showingPlaceholder;
-(id)nearbyCache;
-(id)stringValue;
@end
