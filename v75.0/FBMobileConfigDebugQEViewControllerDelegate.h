/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMobileConfigDebugQEViewControllerDelegate <NSObject>
@required
-(void)overrideGroup:(const FBMobileConfigQEGroupInfo*)arg1 universe:(const FBMobileConfigQEUniverseInfo*)arg2;
-(void)removeOverrideForUniverse:(FBMobileConfigQEUniverseInfo*)arg1;
-(id)getParamName:(FBMobileConfigQEParamInfo*)arg1;
-(void)populateActualParamValuesWithGroup:(const FBMobileConfigQEGroupInfo*)arg1 actualParams:(vector<mobileconfig::FBMobileConfigQEParamInfo, std::__1::allocator<mobileconfig::FBMobileConfigQEParamInfo> >*)arg2;

@end

