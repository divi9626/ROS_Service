// Auto-generated. Do not edit!

// (in-package beginner_tutorials.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class changeBaseStringRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.inputString = null;
    }
    else {
      if (initObj.hasOwnProperty('inputString')) {
        this.inputString = initObj.inputString
      }
      else {
        this.inputString = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type changeBaseStringRequest
    // Serialize message field [inputString]
    bufferOffset = _serializer.string(obj.inputString, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type changeBaseStringRequest
    let len;
    let data = new changeBaseStringRequest(null);
    // Deserialize message field [inputString]
    data.inputString = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.inputString.length;
    return length + 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'beginner_tutorials/changeBaseStringRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '998e350d95d4a84f3e250cb220ede566';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    string inputString
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new changeBaseStringRequest(null);
    if (msg.inputString !== undefined) {
      resolved.inputString = msg.inputString;
    }
    else {
      resolved.inputString = ''
    }

    return resolved;
    }
};

class changeBaseStringResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.newString = null;
    }
    else {
      if (initObj.hasOwnProperty('newString')) {
        this.newString = initObj.newString
      }
      else {
        this.newString = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type changeBaseStringResponse
    // Serialize message field [newString]
    bufferOffset = _serializer.string(obj.newString, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type changeBaseStringResponse
    let len;
    let data = new changeBaseStringResponse(null);
    // Deserialize message field [newString]
    data.newString = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.newString.length;
    return length + 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'beginner_tutorials/changeBaseStringResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'c0c563c1186b0496fac9d1eb0bbaaa29';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    string newString
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new changeBaseStringResponse(null);
    if (msg.newString !== undefined) {
      resolved.newString = msg.newString;
    }
    else {
      resolved.newString = ''
    }

    return resolved;
    }
};

module.exports = {
  Request: changeBaseStringRequest,
  Response: changeBaseStringResponse,
  md5sum() { return '46f552d87d2d70b2ba3ed0f446c8da6f'; },
  datatype() { return 'beginner_tutorials/changeBaseString'; }
};
