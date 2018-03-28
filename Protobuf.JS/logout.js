/**
 * @fileoverview
 * @enhanceable
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!

goog.provide('proto.Logout');

goog.require('jspb.BinaryReader');
goog.require('jspb.BinaryWriter');
goog.require('jspb.Message');


/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.Logout = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.Logout, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.Logout.displayName = 'proto.Logout';
}


if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto suitable for use in Soy templates.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     com.google.apps.jspb.JsClassTemplate.JS_RESERVED_WORDS.
 * @param {boolean=} opt_includeInstance Whether to include the JSPB instance
 *     for transitional soy proto support: http://goto/soy-param-migration
 * @return {!Object}
 */
proto.Logout.prototype.toObject = function(opt_includeInstance) {
  return proto.Logout.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.Logout} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.Logout.toObject = function(includeInstance, msg) {
  var f, obj = {
    rfidcardno: jspb.Message.getFieldWithDefault(msg, 1, 0),
    set: jspb.Message.getFieldWithDefault(msg, 2, 0),
    resttimer: jspb.Message.getFieldWithDefault(msg, 3, 0)
  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.Logout}
 */
proto.Logout.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.Logout;
  return proto.Logout.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.Logout} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.Logout}
 */
proto.Logout.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {number} */ (reader.readInt32());
      msg.setRfidcardno(value);
      break;
    case 2:
      var value = /** @type {number} */ (reader.readInt32());
      msg.setSet(value);
      break;
    case 3:
      var value = /** @type {number} */ (reader.readInt32());
      msg.setResttimer(value);
      break;
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.Logout.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.Logout.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.Logout} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.Logout.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getRfidcardno();
  if (f !== 0) {
    writer.writeInt32(
      1,
      f
    );
  }
  f = message.getSet();
  if (f !== 0) {
    writer.writeInt32(
      2,
      f
    );
  }
  f = message.getResttimer();
  if (f !== 0) {
    writer.writeInt32(
      3,
      f
    );
  }
};


/**
 * optional int32 rfIdCardNo = 1;
 * @return {number}
 */
proto.Logout.prototype.getRfidcardno = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 1, 0));
};


/** @param {number} value */
proto.Logout.prototype.setRfidcardno = function(value) {
  jspb.Message.setProto3IntField(this, 1, value);
};


/**
 * optional int32 set = 2;
 * @return {number}
 */
proto.Logout.prototype.getSet = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 2, 0));
};


/** @param {number} value */
proto.Logout.prototype.setSet = function(value) {
  jspb.Message.setProto3IntField(this, 2, value);
};


/**
 * optional int32 restTimer = 3;
 * @return {number}
 */
proto.Logout.prototype.getResttimer = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 3, 0));
};


/** @param {number} value */
proto.Logout.prototype.setResttimer = function(value) {
  jspb.Message.setProto3IntField(this, 3, value);
};


