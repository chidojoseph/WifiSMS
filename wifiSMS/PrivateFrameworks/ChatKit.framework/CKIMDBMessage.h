/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class IMPerson, IMAccount, IMChat;

@interface CKIMDBMessage : CKDBMessage  {
    IMPerson *_person;
}

@property(retain,readonly) IMChat * chat;
@property(retain,readonly) IMAccount * account;
@property(retain) IMPerson * person;


- (id)account;
- (void)resetIMPerson;
- (void)setPerson:(id)arg1;
- (id)chat;
- (id)initWithRecordID:(int)arg1;
- (id)person;
- (void)markAsRead;
- (void)dealloc;

@end
