/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSPropertyDescription, NSSQLEntity, NSString;

@interface NSSQLProperty : NSStoreMapping {
    NSSQLEntity *_entity;
    NSString *_name;
    NSPropertyDescription *_propertyDescription;
    unsigned int _propertyType;
}

- (void)_setName:(id)arg1;
- (id)columnName;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)entity;
- (id)externalName;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (bool)isAttribute;
- (bool)isColumn;
- (bool)isEntityKey;
- (bool)isEqual:(id)arg1;
- (bool)isForeignEntityKey;
- (bool)isForeignKey;
- (bool)isForeignOrderKey;
- (bool)isManyToMany;
- (bool)isOptLockKey;
- (bool)isPrimaryKey;
- (bool)isRelationship;
- (bool)isToMany;
- (bool)isToOne;
- (id)name;
- (id)propertyDescription;
- (unsigned int)propertyType;
- (void)setEntityForReadOnlyFetch:(id)arg1;
- (void)setPropertyDescription:(id)arg1;
- (unsigned int)slot;

@end
