/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBFriendableContactsDataSourceDelegate <NSObject>
@required
-(void)didUpdateSearchResults:(id)arg1 inSection:(unsigned long long)arg2;
-(void)didFinishLoadingFriendableContacts:(id)arg1 numberOfNew:(unsigned long long)arg2;
-(void)didFailLoadingFriendableContactsWithError:(id)arg1 currentLoadedContacts:(id)arg2;
-(void)didRemoveFriendableContact:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)didUpdateFriendableContact:(id)arg1 atIndex:(unsigned long long)arg2;

@end

