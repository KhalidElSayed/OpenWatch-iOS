// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to OWUser.h instead.

#import <CoreData/CoreData.h>


extern const struct OWUserAttributes {
	__unsafe_unretained NSString *csrfToken;
	__unsafe_unretained NSString *serverID;
	__unsafe_unretained NSString *thumbnailURLString;
	__unsafe_unretained NSString *username;
} OWUserAttributes;

extern const struct OWUserRelationships {
	__unsafe_unretained NSString *objects;
	__unsafe_unretained NSString *tags;
} OWUserRelationships;

extern const struct OWUserFetchedProperties {
} OWUserFetchedProperties;

@class OWMediaObject;
@class OWTag;






@interface OWUserID : NSManagedObjectID {}
@end

@interface _OWUser : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (OWUserID*)objectID;





@property (nonatomic, strong) NSString* csrfToken;



//- (BOOL)validateCsrfToken:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSNumber* serverID;



@property int32_t serverIDValue;
- (int32_t)serverIDValue;
- (void)setServerIDValue:(int32_t)value_;

//- (BOOL)validateServerID:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* thumbnailURLString;



//- (BOOL)validateThumbnailURLString:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* username;



//- (BOOL)validateUsername:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSSet *objects;

- (NSMutableSet*)objectsSet;




@property (nonatomic, strong) NSSet *tags;

- (NSMutableSet*)tagsSet;





@end

@interface _OWUser (CoreDataGeneratedAccessors)

- (void)addObjects:(NSSet*)value_;
- (void)removeObjects:(NSSet*)value_;
- (void)addObjectsObject:(OWMediaObject*)value_;
- (void)removeObjectsObject:(OWMediaObject*)value_;

- (void)addTags:(NSSet*)value_;
- (void)removeTags:(NSSet*)value_;
- (void)addTagsObject:(OWTag*)value_;
- (void)removeTagsObject:(OWTag*)value_;

@end

@interface _OWUser (CoreDataGeneratedPrimitiveAccessors)


- (NSString*)primitiveCsrfToken;
- (void)setPrimitiveCsrfToken:(NSString*)value;




- (NSNumber*)primitiveServerID;
- (void)setPrimitiveServerID:(NSNumber*)value;

- (int32_t)primitiveServerIDValue;
- (void)setPrimitiveServerIDValue:(int32_t)value_;




- (NSString*)primitiveThumbnailURLString;
- (void)setPrimitiveThumbnailURLString:(NSString*)value;




- (NSString*)primitiveUsername;
- (void)setPrimitiveUsername:(NSString*)value;





- (NSMutableSet*)primitiveObjects;
- (void)setPrimitiveObjects:(NSMutableSet*)value;



- (NSMutableSet*)primitiveTags;
- (void)setPrimitiveTags:(NSMutableSet*)value;


@end
