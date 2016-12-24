/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBQuickPerformanceLoggerProtocol;
@interface FBDynamicLibraryLoaderInternal : NSObject {

	id<FBQuickPerformanceLoggerProtocol> _qplogger;
	/*^block*/id _dynamicLoadErrorBlock;

}
-(id)initWithQpl:(id)arg1 errorBlock:(/*^block*/id)arg2 ;
-(void)logErrorMessage:(id)arg1 forLibrary:(unsigned long long)arg2 ;
-(void)logStartDynamicLoad:(unsigned long long)arg1 withPath:(const char*)arg2 ;
-(void)logStopDynamicLoadSuccess:(unsigned long long)arg1 ;
-(void)logStopDynamicLoadFail:(unsigned long long)arg1 ;
@end

