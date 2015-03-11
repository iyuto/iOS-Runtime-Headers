/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@class NSMutableArray, NSString;

@interface NNMKProtoSendMessageRequest : PBRequest <NSCopying> {
    NSString *_body;
    NSMutableArray *_ccs;
    NSString *_subject;
    NSMutableArray *_tos;
}

@property(retain) NSString * body;
@property(retain) NSMutableArray * ccs;
@property(readonly) bool hasBody;
@property(readonly) bool hasSubject;
@property(retain) NSString * subject;
@property(retain) NSMutableArray * tos;

- (void).cxx_destruct;
- (void)addCc:(id)arg1;
- (void)addTo:(id)arg1;
- (id)body;
- (id)ccAtIndex:(unsigned long long)arg1;
- (id)ccs;
- (unsigned long long)ccsCount;
- (void)clearCcs;
- (void)clearTos;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBody;
- (bool)hasSubject;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setCcs:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setTos:(id)arg1;
- (id)subject;
- (id)toAtIndex:(unsigned long long)arg1;
- (id)tos;
- (unsigned long long)tosCount;
- (void)writeTo:(id)arg1;

@end