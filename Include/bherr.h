//=============================================================================
//  Microsoft (R) Network Monitor (tm). 
//  Copyright (C) 1991-1999. All rights reserved.
//
//  MODULE: bherr.h
//
//  Do NOT use this file anymore.  Use NMErr.h and the NMERR_ prefex.
//  This file is only around to keep parsers compatible.
//=============================================================================

#if !defined(_BHERR_)
#pragma option push -b -a8 -pc -A- /*P_O_Push*/

#define _BHERR_

#include "nmerr.h"

#define BHERR_SUCCESS                        NMERR_SUCCESS                        
#define BHERR_MEMORY_MAPPED_FILE_ERROR       NMERR_MEMORY_MAPPED_FILE_ERROR       
#define BHERR_INVALID_HFILTER                NMERR_INVALID_HFILTER                
#define BHERR_CAPTURING                      NMERR_CAPTURING                      
#define BHERR_NOT_CAPTURING                  NMERR_NOT_CAPTURING                  
#define BHERR_NO_MORE_FRAMES                 NMERR_NO_MORE_FRAMES                 
#define BHERR_BUFFER_TOO_SMALL               NMERR_BUFFER_TOO_SMALL               
#define BHERR_FRAME_NOT_RECOGNIZED           NMERR_FRAME_NOT_RECOGNIZED           
#define BHERR_FILE_ALREADY_EXISTS            NMERR_FILE_ALREADY_EXISTS            
#define BHERR_DRIVER_NOT_FOUND               NMERR_DRIVER_NOT_FOUND               
#define BHERR_ADDRESS_ALREADY_EXISTS         NMERR_ADDRESS_ALREADY_EXISTS         
#define BHERR_INVALID_HFRAME                 NMERR_INVALID_HFRAME                 
#define BHERR_INVALID_HPROTOCOL              NMERR_INVALID_HPROTOCOL              
#define BHERR_INVALID_HPROPERTY              NMERR_INVALID_HPROPERTY              
#define BHERR_LOCKED                         NMERR_LOCKED                         
#define BHERR_STACK_EMPTY                    NMERR_STACK_EMPTY                    
#define BHERR_STACK_OVERFLOW                 NMERR_STACK_OVERFLOW                 
#define BHERR_TOO_MANY_PROTOCOLS             NMERR_TOO_MANY_PROTOCOLS             
#define BHERR_FILE_NOT_FOUND                 NMERR_FILE_NOT_FOUND                 
#define BHERR_OUT_OF_MEMORY                  NMERR_OUT_OF_MEMORY                  
#define BHERR_CAPTURE_PAUSED                 NMERR_CAPTURE_PAUSED                 
#define BHERR_NO_BUFFERS                     NMERR_NO_BUFFERS                     
#define BHERR_BUFFERS_ALREADY_EXIST          NMERR_BUFFERS_ALREADY_EXIST          
#define BHERR_NOT_LOCKED                     NMERR_NOT_LOCKED                     
#define BHERR_OUT_OF_RANGE                   NMERR_OUT_OF_RANGE                   
#define BHERR_LOCK_NESTING_TOO_DEEP          NMERR_LOCK_NESTING_TOO_DEEP          
#define BHERR_LOAD_PARSER_FAILED             NMERR_LOAD_PARSER_FAILED             
#define BHERR_UNLOAD_PARSER_FAILED           NMERR_UNLOAD_PARSER_FAILED          
#define BHERR_INVALID_HADDRESSDB             NMERR_INVALID_HADDRESSDB             
#define BHERR_ADDRESS_NOT_FOUND              NMERR_ADDRESS_NOT_FOUND              
#define BHERR_NETWORK_NOT_PRESENT            NMERR_NETWORK_NOT_PRESENT            
#define BHERR_NO_PROPERTY_DATABASE           NMERR_NO_PROPERTY_DATABASE           
#define BHERR_PROPERTY_NOT_FOUND             NMERR_PROPERTY_NOT_FOUND             
#define BHERR_INVALID_HPROPERTYDB            NMERR_INVALID_HPROPERTYDB            
#define BHERR_PROTOCOL_NOT_ENABLED           NMERR_PROTOCOL_NOT_ENABLED          
#define BHERR_PROTOCOL_NOT_FOUND             NMERR_PROTOCOL_NOT_FOUND            
#define BHERR_INVALID_PARSER_DLL             NMERR_INVALID_PARSER_DLL            
#define BHERR_NO_ATTACHED_PROPERTIES         NMERR_NO_ATTACHED_PROPERTIES         
#define BHERR_NO_FRAMES                      NMERR_NO_FRAMES                      
#define BHERR_INVALID_FILE_FORMAT            NMERR_INVALID_FILE_FORMAT            
#define BHERR_COULD_NOT_CREATE_TEMPFILE      NMERR_COULD_NOT_CREATE_TEMPFILE      
#define BHERR_OUT_OF_DOS_MEMORY              NMERR_OUT_OF_DOS_MEMORY              
#define BHERR_NO_PROTOCOLS_ENABLED           NMERR_NO_PROTOCOLS_ENABLED           
#define BHERR_UNKNOWN_MACTYPE                NMERR_UNKNOWN_MACTYPE                
#define BHERR_ROUTING_INFO_NOT_PRESENT       NMERR_ROUTING_INFO_NOT_PRESENT       
#define BHERR_INVALID_HNETWORK               NMERR_INVALID_HNETWORK               
#define BHERR_NETWORK_ALREADY_OPENED         NMERR_NETWORK_ALREADY_OPENED         
#define BHERR_NETWORK_NOT_OPENED             NMERR_NETWORK_NOT_OPENED             
#define BHERR_FRAME_NOT_FOUND                NMERR_FRAME_NOT_FOUND                
#define BHERR_NO_HANDLES                     NMERR_NO_HANDLES                     
#define BHERR_INVALID_NETWORK_ID             NMERR_INVALID_NETWORK_ID             
#define BHERR_INVALID_HCAPTURE               NMERR_INVALID_HCAPTURE               
#define BHERR_PROTOCOL_ALREADY_ENABLED       NMERR_PROTOCOL_ALREADY_ENABLED       
#define BHERR_FILTER_INVALID_EXPRESSION      NMERR_FILTER_INVALID_EXPRESSION      
#define BHERR_TRANSMIT_ERROR                 NMERR_TRANSMIT_ERROR                 
#define BHERR_INVALID_HBUFFER                NMERR_INVALID_HBUFFER                
#define BHERR_INVALID_DATA                   NMERR_INVALID_DATA                   
#define BHERR_MSDOS_DRIVER_NOT_LOADED        NMERR_MSDOS_DRIVER_NOT_LOADED        
#define BHERR_WINDOWS_DRIVER_NOT_LOADED      NMERR_WINDOWS_DRIVER_NOT_LOADED      
#define BHERR_MSDOS_DRIVER_INIT_FAILURE      NMERR_MSDOS_DRIVER_INIT_FAILURE      
#define BHERR_WINDOWS_DRIVER_INIT_FAILURE    NMERR_WINDOWS_DRIVER_INIT_FAILURE    
#define BHERR_NETWORK_BUSY                   NMERR_NETWORK_BUSY                   
#define BHERR_CAPTURE_NOT_PAUSED             NMERR_CAPTURE_NOT_PAUSED             
#define BHERR_INVALID_PACKET_LENGTH          NMERR_INVALID_PACKET_LENGTH          
#define BHERR_INTERNAL_EXCEPTION             NMERR_INTERNAL_EXCEPTION             
#define BHERR_PROMISCUOUS_MODE_NOT_SUPPORTED NMERR_PROMISCUOUS_MODE_NOT_SUPPORTED 
#define BHERR_MAC_DRIVER_OPEN_FAILURE        NMERR_MAC_DRIVER_OPEN_FAILURE        
#define BHERR_RUNAWAY_PROTOCOL               NMERR_RUNAWAY_PROTOCOL               
#define BHERR_PENDING                        NMERR_PENDING                        
#define BHERR_ACCESS_DENIED                  NMERR_ACCESS_DENIED                  
#define BHERR_INVALID_HPASSWORD              NMERR_INVALID_HPASSWORD              
#define BHERR_INVALID_PARAMETER              NMERR_INVALID_PARAMETER              
#define BHERR_FILE_READ_ERROR                NMERR_FILE_READ_ERROR                
#define BHERR_FILE_WRITE_ERROR               NMERR_FILE_WRITE_ERROR               
#define BHERR_PROTOCOL_NOT_REGISTERED        NMERR_PROTOCOL_NOT_REGISTERED        
#define BHERR_IP_ADDRESS_NOT_FOUND           NMERR_IP_ADDRESS_NOT_FOUND           
#define BHERR_TRANSMIT_CANCELLED             NMERR_TRANSMIT_CANCELLED             
#define BHERR_LOCKED_FRAMES                  NMERR_LOCKED_FRAMES                  
#define BHERR_NO_TRANSMITS_PENDING           NMERR_NO_TRANSMITS_PENDING           
#define BHERR_PATH_NOT_FOUND                 NMERR_PATH_NOT_FOUND                 
#define BHERR_WINDOWS_ERROR                  NMERR_WINDOWS_ERROR                  
#define BHERR_NO_FRAME_NUMBER                NMERR_NO_FRAME_NUMBER                
#define BHERR_FRAME_HAS_NO_CAPTURE           NMERR_FRAME_HAS_NO_CAPTURE           
#define BHERR_FRAME_ALREADY_HAS_CAPTURE      NMERR_FRAME_ALREADY_HAS_CAPTURE      
#define BHERR_NAL_IS_NOT_REMOTE              NMERR_NAL_IS_NOT_REMOTE              
#define BHERR_NOT_SUPPORTED                  NMERR_NOT_SUPPORTED                  
#define BHERR_DISCARD_FRAME                  NMERR_DISCARD_FRAME                  
#define BHERR_CANCEL_SAVE_CAPTURE            NMERR_CANCEL_SAVE_CAPTURE            
#define BHERR_LOST_CONNECTION                NMERR_LOST_CONNECTION                
#define BHERR_INVALID_MEDIA_TYPE             NMERR_INVALID_MEDIA_TYPE             
#define BHERR_AGENT_IN_USE                   NMERR_AGENT_IN_USE                   
#define BHERR_TIMEOUT                        NMERR_TIMEOUT                        
#define BHERR_DISCONNECTED                   NMERR_DISCONNECTED                   
#define BHERR_SETTIMER_FAILED                NMERR_SETTIMER_FAILED                
#define BHERR_NETWORK_ERROR                  NMERR_NETWORK_ERROR                  
#define BHERR_UPLEVEL_CAPTURE_FILE           NMERR_UPLEVEL_CAPTURE_FILE           


#pragma option pop /*P_O_Pop*/
#endif
