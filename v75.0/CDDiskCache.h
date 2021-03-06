/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDDiskCache <NSObject>
@optional
-(id)getFileResource:(id)arg1;
-(id)insertFile:(id)arg1 callback:(/*^block*/id)arg2;

@required
-(id)getResource:(id)arg1;
-(BOOL)updateAccessTime:(id)arg1;
-(id)insert:(id)arg1 callback:(/*^block*/id)arg2;
-(unsigned long long)memContains:(id)arg1;
-(id)getModificationTime:(id)arg1;
-(id)getAllResources;
-(void)clear;
-(BOOL)remove:(id)arg1;
-(unsigned long long)getSize;

@end

