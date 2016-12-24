/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSArray, FBLocationManagerConnectedWifiScan;

@interface FBLocationManagerWifiInfo : FBGraphQLInput {

	NSArray* _scanResults;
	FBLocationManagerConnectedWifiScan* _connected;

}

@property (nonatomic,copy) NSArray * scanResults;                                       //@synthesize scanResults=_scanResults - In the implementation block
@property (nonatomic,copy) FBLocationManagerConnectedWifiScan * connected;              //@synthesize connected=_connected - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setConnected:(FBLocationManagerConnectedWifiScan *)arg1 ;
-(FBLocationManagerConnectedWifiScan *)connected;
-(NSArray *)scanResults;
-(void)setScanResults:(NSArray *)arg1 ;
@end

