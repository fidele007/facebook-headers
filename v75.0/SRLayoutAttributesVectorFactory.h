/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@interface SRLayoutAttributesVectorFactory : NSObject {

	map<long, std::__1::vector<_CellLayoutDesc, std::__1::allocator<_CellLayoutDesc> >, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, std::__1::vector<_CellLayoutDesc, std::__1::allocator<_CellLayoutDesc> > > > >* _allVectors;
	vector<long, std::__1::allocator<long> >* _freeIdentifiers;
	long long _nextIdentifier;

}
-(vector<_CellLayoutDesc, std::__1::allocator<_CellLayoutDesc> >*)vectorForIdentifier:(long long)arg1 ;
-(long long)acquireVector;
-(void)reclaimVector:(long long)arg1 ;
-(void)reclaimAllVectors;
-(id)init;
@end
