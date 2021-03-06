/*
 * Copyright 2010-2013 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#import "DynamoDBAttributeValue.h"
#import "DynamoDBAttributeValueUpdate.h"
#import "DynamoDBExpectedAttributeValue.h"

#ifdef AWS_MULTI_FRAMEWORK
#import <AWSRuntime/AmazonServiceRequestConfig.h>
#else
#import "../AmazonServiceRequestConfig.h"
#endif



/**
 * Update Item Request
 */

@interface DynamoDBUpdateItemRequest:AmazonServiceRequestConfig

{
    NSString            *tableName;
    NSMutableDictionary *key;
    NSMutableDictionary *attributeUpdates;
    NSMutableDictionary *expected;
    NSString            *returnValues;
    NSString            *returnConsumedCapacity;
    NSString            *returnItemCollectionMetrics;
}



/**
 * The value of the TableName property for this object.
 * <p>
 * <b>Constraints:</b><br/>
 * <b>Length: </b>3 - 255<br/>
 * <b>Pattern: </b>[a-zA-Z0-9_.-]+<br/>
 */
@property (nonatomic, retain) NSString *tableName;

/**
 * The value of the Key property for this object.
 */
@property (nonatomic, retain) NSMutableDictionary *key;

/**
 * The value of the AttributeUpdates property for this object.
 */
@property (nonatomic, retain) NSMutableDictionary *attributeUpdates;

/**
 * The value of the Expected property for this object.
 */
@property (nonatomic, retain) NSMutableDictionary *expected;

/**
 * The value of the ReturnValues property for this object.
 * <p>
 * <b>Constraints:</b><br/>
 * <b>Allowed Values: </b>NONE, ALL_OLD, UPDATED_OLD, ALL_NEW, UPDATED_NEW
 */
@property (nonatomic, retain) NSString *returnValues;

/**
 * The value of the ReturnConsumedCapacity property for this object.
 * <p>
 * <b>Constraints:</b><br/>
 * <b>Allowed Values: </b>TOTAL, NONE
 */
@property (nonatomic, retain) NSString *returnConsumedCapacity;

/**
 * The value of the ReturnItemCollectionMetrics property for this object.
 * <p>
 * <b>Constraints:</b><br/>
 * <b>Allowed Values: </b>SIZE, NONE
 */
@property (nonatomic, retain) NSString *returnItemCollectionMetrics;


/**
 * Default constructor for a new UpdateItemRequest object.  Callers should use the
 * property methods to initialize this object after creating it.
 */
-(id)init;

/**
 * Constructs a new UpdateItemRequest object.
 * Callers should use properties to initialize any additional object members.
 *
 * @param theTableName
 * @param theKey
 * @param theAttributeUpdates
 */
-(id)initWithTableName:(NSString *)theTableName andKey:(NSMutableDictionary *)theKey andAttributeUpdates:(NSMutableDictionary *)theAttributeUpdates;


/**
 * Set a value in the dictionary key for the specified key.
 * This function will alloc and init key if not already done.
 */
-(void)setKeyValue:(DynamoDBAttributeValue *)theValue forKey:(NSString *)theKey;


/**
 * Set a value in the dictionary attributeUpdates for the specified key.
 * This function will alloc and init attributeUpdates if not already done.
 */
-(void)setAttributeUpdatesValue:(DynamoDBAttributeValueUpdate *)theValue forKey:(NSString *)theKey;


/**
 * Set a value in the dictionary expected for the specified key.
 * This function will alloc and init expected if not already done.
 */
-(void)setExpectedValue:(DynamoDBExpectedAttributeValue *)theValue forKey:(NSString *)theKey;

/**
 * Returns a string representation of this object; useful for testing and
 * debugging.
 *
 * @return A string representation of this object.
 */
-(NSString *)description;


@end
