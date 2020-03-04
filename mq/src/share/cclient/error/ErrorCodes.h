/*
 * Copyright (c) 2000, 2017 Oracle and/or its affiliates. All rights reserved.
 *
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License v. 2.0, which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 *
 * This Source Code may also be made available under the following Secondary
 * Licenses when the conditions for such availability set forth in the
 * Eclipse Public License v. 2.0 are satisfied: GNU General Public License,
 * version 2 with the GNU Classpath Exception, which is available at
 * https://www.gnu.org/software/classpath/license.html.
 *
 * SPDX-License-Identifier: EPL-2.0 OR GPL-2.0 WITH Classpath-exception-2.0
 */

/*
 * @(#)ErrorCodes.h	1.15 06/26/07
 */ 

#ifndef ERRORCODES_H
#define ERRORCODES_H

#ifdef __cplusplus
extern "C" {
#endif
    
#include <nspr.h>
#include "../cshim/mqerrors.h"

/*
 * These defines is to avoid massive existing code changes regarding
 * these micros. Any new error codes introduced should use the MQ
 * new name.  Eventually all these can be removed once existing
 * code migrated to the new micro names.
 *
 ****************************************************************/
#define iMQError MQError

#define IMQ_SUCCESS           MQ_SUCCESS
#define IMQ_BASE_ERROR_CODE   MQ_BASE_ERROR_CODE   

#define IMQ_INTERNAL_ERROR    MQ_INTERNAL_ERROR 

#define IMQ_NULL_PTR_ARG                 MQ_NULL_PTR_ARG
#define IMQ_WRONG_ARG_BUFFER_SIZE        MQ_WRONG_ARG_BUFFER_SIZE 
#define IMQ_OUT_OF_MEMORY                MQ_OUT_OF_MEMORY
#define IMQ_FILE_OUTPUT_ERROR             MQ_FILE_OUTPUT_ERROR
#define IMQ_NOT_FOUND                     MQ_NOT_FOUND
#define IMQ_BAD_VECTOR_INDEX              MQ_BAD_VECTOR_INDEX
#define IMQ_VECTOR_TOO_BIG                MQ_VECTOR_TOO_BIG
#define IMQ_UNEXPECTED_NULL               MQ_UNEXPECTED_NULL
#define IMQ_INVALID_ITERATOR              MQ_INVALID_ITERATOR
#define IMQ_STRING_NOT_NUMBER             MQ_STRING_NOT_NUMBER
#define IMQ_NUMBER_NOT_UINT16             MQ_NUMBER_NOT_UINT16
#define IMQ_OBJECT_NOT_CLONEABLE          MQ_OBJECT_NOT_CLONEABLE
#define IMQ_HASH_VALUE_ALREADY_EXISTS     MQ_HASH_VALUE_ALREADY_EXISTS
#define IMQ_HASH_TABLE_ALLOCATION_FAILED  MQ_HASH_TABLE_ALLOCATION_FAILED

#define IMQ_NOT_IPV4_ADDRESS              MQ_NOT_IPV4_ADDRESS

#define IMQ_UNINITIALIZED_STREAM          MQ_UNINITIALIZED_STREAM
#define IMQ_END_OF_STREAM                 MQ_END_OF_STREAM
#define IMQ_INPUT_STREAM_ERROR            MQ_INPUT_STREAM_ERROR

#define IMQ_SERIALIZE_NOT_CLASS_DEF       MQ_SERIALIZE_NOT_CLASS_DEF
#define IMQ_SERIALIZE_BAD_CLASS_UID       MQ_SERIALIZE_BAD_CLASS_UID
#define IMQ_SERIALIZE_BAD_MAGIC_NUMBER    MQ_SERIALIZE_BAD_MAGIC_NUMBER
#define IMQ_SERIALIZE_BAD_VERSION         MQ_SERIALIZE_BAD_VERSION
#define IMQ_SERIALIZE_NOT_HASHTABLE       MQ_SERIALIZE_NOT_HASHTABLE
#define IMQ_SERIALIZE_UNEXPECTED_BYTES    MQ_SERIALIZE_UNEXPECTED_BYTES
#define IMQ_SERIALIZE_UNRECOGNIZED_CLASS  MQ_SERIALIZE_UNRECOGNIZED_CLASS
#define IMQ_SERIALIZE_BAD_SUPER_CLASS     MQ_SERIALIZE_BAD_SUPER_CLASS
#define IMQ_SERIALIZE_BAD_HANDLE          MQ_SERIALIZE_BAD_HANDLE
#define IMQ_SERIALIZE_NOT_CLASS_HANDLE    MQ_SERIALIZE_NOT_CLASS_HANDLE
#define IMQ_SERIALIZE_NOT_OBJECT_HANDLE   MQ_SERIALIZE_NOT_OBJECT_HANDLE
#define IMQ_SERIALIZE_STRING_TOO_BIG      MQ_SERIALIZE_STRING_TOO_BIG
#define IMQ_SERIALIZE_CANNOT_CLONE        MQ_SERIALIZE_CANNOT_CLONE
#define IMQ_SERIALIZE_NO_CLASS_DESC       MQ_SERIALIZE_NO_CLASS_DESC
#define IMQ_SERIALIZE_CORRUPTED_HASHTABLE MQ_SERIALIZE_CORRUPTED_HASHTABLE
#define IMQ_SERIALIZE_TEST_ERROR          MQ_SERIALIZE_TEST_ERROR
#define IMQ_SERIALIZE_STRING_CONTAINS_NULL MQ_SERIALIZE_STRING_CONTAINS_NULL

#define IMQ_PROPERTY_NULL                 MQ_PROPERTY_NULL
#define IMQ_PROPERTY_WRONG_VALUE_TYPE     MQ_PROPERTY_WRONG_VALUE_TYPE
#define IMQ_INVALID_TYPE_CONVERSION       MQ_INVALID_TYPE_CONVERSION
#define IMQ_NULL_STRING                   MQ_NULL_STRING
#define IMQ_TYPE_CONVERSION_OUT_OF_BOUNDS MQ_TYPE_CONVERSION_OUT_OF_BOUNDS
#define IMQ_PROPERTY_FILE_ERROR           MQ_PROPERTY_FILE_ERROR
#define IMQ_FILE_NOT_FOUND                MQ_FILE_NOT_FOUND

#define IMQ_TCP_INVALID_PORT              MQ_TCP_INVALID_PORT
#define IMQ_TCP_CONNECTION_CLOSED         MQ_TCP_CONNECTION_CLOSED
#define IMQ_TCP_ALREADY_CONNECTED         MQ_TCP_ALREADY_CONNECTED

#define IMQ_PORTMAPPER_INVALID_INPUT      MQ_PORTMAPPER_INVALID_INPUT
#define IMQ_PORTMAPPER_WRONG_VERSION      MQ_PORTMAPPER_WRONG_VERSION
#define IMQ_PORTMAPPER_ERROR              MQ_PORTMAPPER_ERROR

#define IMQ_INVALID_PACKET                MQ_INVALID_PACKET
#define IMQ_INVALID_PACKET_FIELD          MQ_INVALID_PACKET_FIELD
#define IMQ_PACKET_OUTPUT_ERROR           MQ_PACKET_OUTPUT_ERROR
#define IMQ_UNRECOGNIZED_PACKET_TYPE      MQ_UNRECOGNIZED_PACKET_TYPE
#define IMQ_UNSUPPORTED_MESSAGE_TYPE      MQ_UNSUPPORTED_MESSAGE_TYPE
#define IMQ_BAD_PACKET_MAGIC_NUMBER       MQ_BAD_PACKET_MAGIC_NUMBER
#define IMQ_UNSUPPORTED_PACKET_VERSION    MQ_UNSUPPORTED_PACKET_VERSION

#define IMQ_COULD_NOT_CONNECT_TO_BROKER   MQ_COULD_NOT_CONNECT_TO_BROKER
#define IMQ_BROKER_CONNECTION_CLOSED      MQ_BROKER_CONNECTION_CLOSED
#define IMQ_UNEXPECTED_ACKNOWLEDGEMENT    MQ_UNEXPECTED_ACKNOWLEDGEMENT
#define IMQ_ACK_STATUS_NOT_OK             MQ_ACK_STATUS_NOT_OK
#define IMQ_COULD_NOT_CREATE_THREAD       MQ_COULD_NOT_CREATE_THREAD
#define IMQ_INVALID_AUTHENTICATE_REQUEST  MQ_INVALID_AUTHENTICATE_REQUEST
#define IMQ_ADMIN_KEY_AUTH_MISMATCH       MQ_ADMIN_KEY_AUTH_MISMATCH
#define IMQ_NO_AUTHENTICATION_HANDLER     MQ_NO_AUTHENTICATION_HANDLER
#define IMQ_UNSUPPORTED_AUTH_TYPE         MQ_UNSUPPORTED_AUTH_TYPE

#define IMQ_REUSED_CONSUMER_ID            MQ_REUSED_CONSUMER_ID
#define IMQ_INVALID_CONSUMER_ID           MQ_INVALID_CONSUMER_ID

#define IMQ_SOCKET_ERROR                  MQ_SOCKET_ERROR
#define IMQ_NEGATIVE_AMOUNT               MQ_NEGATIVE_AMOUNT
#define IMQ_POLL_ERROR                    MQ_POLL_ERROR
#define IMQ_TIMEOUT_EXPIRED               MQ_TIMEOUT_EXPIRED
#define IMQ_INVALID_PORT                  MQ_INVALID_PORT
#define IMQ_SOCKET_CONNECT_FAILED         MQ_SOCKET_CONNECT_FAILED
#define IMQ_SOCKET_READ_FAILED            MQ_SOCKET_READ_FAILED
#define IMQ_SOCKET_WRITE_FAILED           MQ_SOCKET_WRITE_FAILED
#define IMQ_SOCKET_SHUTDOWN_FAILED        MQ_SOCKET_SHUTDOWN_FAILED
#define IMQ_SOCKET_CLOSE_FAILED           MQ_SOCKET_CLOSE_FAILED
#define IMQ_SSL_INIT_ERROR                MQ_SSL_INIT_ERROR
#define IMQ_SSL_SOCKET_INIT_ERROR         MQ_SSL_SOCKET_INIT_ERROR
#define IMQ_SSL_CERT_ERROR                MQ_SSL_CERT_ERROR
#define IMQ_SSL_ERROR                     MQ_SSL_ERROR
#define IMQ_SSL_ALREADY_INITIALIZED       MQ_SSL_ALREADY_INITIALIZED

#define IMQ_MD5_HASH_FAILURE              MQ_MD5_HASH_FAILURE

#define IMQ_BROKER_BAD_REQUEST            MQ_BROKER_BAD_REQUEST
#define IMQ_BROKER_UNAUTHORIZED           MQ_BROKER_UNAUTHORIZED
#define IMQ_BROKER_FORBIDDEN              MQ_BROKER_FORBIDDEN
#define IMQ_BROKER_NOT_FOUND              MQ_BROKER_NOT_FOUND
#define IMQ_BROKER_NOT_ALLOWED            MQ_BROKER_NOT_ALLOWED
#define IMQ_BROKER_TIMEOUT                MQ_BROKER_TIMEOUT
#define IMQ_BROKER_CONFLICT               MQ_BROKER_CONFLICT
#define IMQ_BROKER_GONE                   MQ_BROKER_GONE
#define IMQ_BROKER_PRECONDITION_FAILED    MQ_BROKER_PRECONDITION_FAILED
#define IMQ_BROKER_INVALID_LOGIN          MQ_BROKER_INVALID_LOGIN
#define IMQ_BROKER_ERROR                  MQ_BROKER_ERROR
#define IMQ_BROKER_NOT_IMPLEMENTED        MQ_BROKER_NOT_IMPLEMENTED
#define IMQ_BROKER_UNAVAILABLE            MQ_BROKER_UNAVAILABLE
#define IMQ_BROKER_BAD_VERSION            MQ_BROKER_BAD_VERSION

#define IMQ_PROTOCOL_HANDLER_GOODBYE_FAILED      MQ_PROTOCOL_HANDLER_GOODBYE_FAILED
#define IMQ_PROTOCOL_HANDLER_START_FAILED        MQ_PROTOCOL_HANDLER_START_FAILED
#define IMQ_PROTOCOL_HANDLER_STOP_FAILED         MQ_PROTOCOL_HANDLER_STOP_FAILED
#define IMQ_PROTOCOL_HANDLER_AUTHENTICATE_FAILED MQ_PROTOCOL_HANDLER_AUTHENTICATE_FAILED
#define IMQ_PROTOCOL_HANDLER_UNEXPECTED_REPLY    MQ_PROTOCOL_HANDLER_UNEXPECTED_REPLY
#define IMQ_PROTOCOL_HANDLER_WRITE_ERROR         MQ_PROTOCOL_HANDLER_WRITE_ERROR
#define IMQ_PROTOCOL_HANDLER_READ_ERROR          MQ_PROTOCOL_HANDLER_READ_ERROR
#define IMQ_PROTOCOL_HANDLER_ERROR               MQ_PROTOCOL_HANDLER_ERROR
#define IMQ_PROTOCOL_HANDLER_SET_CLIENTID_FAILED MQ_PROTOCOL_HANDLER_SET_CLIENTID_FAILED
#define IMQ_PROTOCOL_HANDLER_DELETE_DESTINATION_FAILED MQ_PROTOCOL_HANDLER_DELETE_DESTINATION_FAILED
#define IMQ_PROTOCOL_HANDLER_HELLO_FAILED        MQ_PROTOCOL_HANDLER_HELLO_FAILED
#define IMQ_PROTOCOL_HANDLER_RESUME_FLOW_FAILED  MQ_PROTOCOL_HANDLER_RESUME_FLOW_FAILED

#define IMQ_READ_CHANNEL_DISPATCH_ERROR          MQ_READ_CHANNEL_DISPATCH_ERROR

#define IMQ_READQTABLE_ERROR                     MQ_READQTABLE_ERROR

#define IMQ_UNSUPPORTED_ARGUMENT_VALUE           MQ_UNSUPPORTED_ARGUMENT_VALUE

#define IMQ_SESSION_CLOSED                       MQ_SESSION_CLOSED
#define IMQ_CONSUMER_NOT_IN_SESSION              MQ_CONSUMER_NOT_IN_SESSION
#define IMQ_PRODUCER_NOT_IN_SESSION              MQ_PRODUCER_NOT_IN_SESSION
#define IMQ_CANNOT_UNSUBSCRIBE_ACTIVE_CONSUMER   MQ_CANNOT_UNSUBSCRIBE_ACTIVE_CONSUMER
#define IMQ_RECEIVE_QUEUE_CLOSED                 MQ_RECEIVE_QUEUE_CLOSED
#define IMQ_RECEIVE_QUEUE_ERROR                  MQ_RECEIVE_QUEUE_ERROR
#define IMQ_NO_CONNECTION                        MQ_NO_CONNECTION
#define IMQ_CONNECTION_CLOSED                    MQ_CONNECTION_CLOSED
#define IMQ_INVALID_ACKNOWLEDGE_MODE             MQ_INVALID_ACKNOWLEDGE_MODE
  
#define IMQ_MESSAGE_NO_DESTINATION               MQ_MESSAGE_NO_DESTINATION
#define IMQ_DESTINATION_NO_CLASS                 MQ_DESTINATION_NO_CLASS
#define IMQ_DESTINATION_NO_NAME                  MQ_DESTINATION_NO_NAME
#define IMQ_NO_REPLY_TO_DESTINATION              MQ_NO_REPLY_TO_DESTINATION

#define IMQ_PRODUCER_NO_DESTINATION              MQ_PRODUCER_NO_DESTINATION

#define IMQ_CONSUMER_NO_DURABLE_NAME             MQ_CONSUMER_NO_DURABLE_NAME
#define IMQ_CONSUMER_NOT_INITIALIZED             MQ_CONSUMER_NOT_INITIALIZED
#define IMQ_CONSUMER_EXCEPTION                   MQ_CONSUMER_EXCEPTION
#define IMQ_CONSUMER_NO_SESSION                  MQ_CONSUMER_NO_SESSION
#define IMQ_NO_MESSAGE                           MQ_NO_MESSAGE
#define IMQ_CONSUMER_CLOSED                      MQ_CONSUMER_CLOSED

#define IMQ_CONNECTION_START_ERROR               MQ_CONNECTION_START_ERROR
#define IMQ_CONNECTION_CREATE_SESSION_ERROR      MQ_CONNECTION_CREATE_SESSION_ERROR
#define IMQ_CONNECTION_OPEN_ERROR                MQ_CONNECTION_OPEN_ERROR
#define IMQ_CONNECTION_UNSUPPORTED_TRANSPORT     MQ_CONNECTION_UNSUPPORTED_TRANSPORT

#define IMQ_HANDLED_OBJECT_INVALID_HANDLE_ERROR  MQ_HANDLED_OBJECT_INVALID_HANDLE_ERROR
#define IMQ_HANDLED_OBJECT_IN_USE                MQ_HANDLED_OBJECT_IN_USE
#define IMQ_HANDLED_OBJECT_NO_MORE_HANDLES       MQ_HANDLED_OBJECT_NO_MORE_HANDLES

#define IMQ_REFERENCED_FREED_OBJECT_ERROR        MQ_REFERENCED_FREED_OBJECT_ERROR

#define IMQ_DESTINATION_NOT_TEMPORARY            MQ_DESTINATION_NOT_TEMPORARY

/** These are returned only by the cshim layer */
#define IMQ_STATUS_INVALID_HANDLE                MQ_STATUS_INVALID_HANDLE
#define IMQ_NO_MESSAGE_PROPERTIES                MQ_NO_MESSAGE_PROPERTIES
#define IMQ_STATUS_NULL_LOGGER                   MQ_STATUS_NULL_LOGGER
#define IMQ_STATUS_CONNECTION_NOT_CLOSED         MQ_STATUS_CONNECTION_NOT_CLOSED


/*END 
 ****************************************************************/

const char * 
errorStr(const iMQError errorCode);


#ifdef __cplusplus
}
#endif

#endif  /* ERRORCODES_H */





