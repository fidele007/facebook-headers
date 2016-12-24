/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSDate, NSArray;

@interface FBBluetoothDataList : NSObject <NSCoding> {

	NSDate* _scannedDate;
	NSArray* _blueToothData;

}

@property (nonatomic,readonly) NSDate * scannedDate;                      //@synthesize scannedDate=_scannedDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * blueToothData;              //@synthesize blueToothData=_blueToothData - In the implementation block
-(NSArray *)blueToothData;
-(NSDate *)scannedDate;
-(id)initWithArray:(id)arg1 date:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
