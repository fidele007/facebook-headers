/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPlacePickerV2NearbyFetcherDelegate <NSObject>
@required
-(void)nearbyFetcher:(id)arg1 didFetchLocation:(id)arg2 withError:(id)arg3;
-(void)nearbyFetcherLocationAccessDenied:(id)arg1;
-(void)nearbyFetcherLocationAccessGranted:(id)arg1;
-(void)nearbyFetcher:(id)arg1 didFetchNearby:(id)arg2 withError:(id)arg3;

@end
