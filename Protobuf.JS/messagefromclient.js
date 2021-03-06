/**
 * @fileoverview
 * @enhanceable
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!

goog.provide('proto.MessageFromClient');

goog.require('jspb.BinaryReader');
goog.require('jspb.BinaryWriter');
goog.require('jspb.Message');
goog.require('proto.ArduinoAction');
goog.require('proto.WebClientAction');

goog.forwardDeclare('proto.ClientType');

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
proto.MessageFromClient = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, proto.MessageFromClient.oneofGroups_);
};
goog.inherits(proto.MessageFromClient, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.MessageFromClient.displayName = 'proto.MessageFromClient';
}
/**
 * Oneof group definitions for this message. Each group defines the field
 * numbers belonging to that group. When of these fields' value is set, all
 * other fields in the group are cleared. During deserialization, if multiple
 * fields are encountered for a group, only the last value seen will be kept.
 * @private {!Array<!Array<number>>}
 * @const
 */
proto.MessageFromClient.oneofGroups_ = [[2,3]];

/**
 * @enum {number}
 */
proto.MessageFromClient.MessageCase = {
  MESSAGE_NOT_SET: 0,
  ARDUINOACTION: 2,
  WEBCLIENTACTION: 3
};

/**
 * @return {proto.MessageFromClient.MessageCase}
 */
proto.MessageFromClient.prototype.getMessageCase = function() {
  return /** @type {proto.MessageFromClient.MessageCase} */(jspb.Message.computeOneofCase(this, proto.MessageFromClient.oneofGroups_[0]));
};



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
proto.MessageFromClient.prototype.toObject = function(opt_includeInstance) {
  return proto.MessageFromClient.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.MessageFromClient} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.MessageFromClient.toObject = function(includeInstance, msg) {
  var f, obj = {
    clienttype: jspb.Message.getFieldWithDefault(msg, 1, 0),
    arduinoaction: (f = msg.getArduinoaction()) && proto.ArduinoAction.toObject(includeInstance, f),
    webclientaction: (f = msg.getWebclientaction()) && proto.WebClientAction.toObject(includeInstance, f)
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
 * @return {!proto.MessageFromClient}
 */
proto.MessageFromClient.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.MessageFromClient;
  return proto.MessageFromClient.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.MessageFromClient} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.MessageFromClient}
 */
proto.MessageFromClient.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {!proto.ClientType} */ (reader.readEnum());
      msg.setClienttype(value);
      break;
    case 2:
      var value = new proto.ArduinoAction;
      reader.readMessage(value,proto.ArduinoAction.deserializeBinaryFromReader);
      msg.setArduinoaction(value);
      break;
    case 3:
      var value = new proto.WebClientAction;
      reader.readMessage(value,proto.WebClientAction.deserializeBinaryFromReader);
      msg.setWebclientaction(value);
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
proto.MessageFromClient.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.MessageFromClient.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.MessageFromClient} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.MessageFromClient.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getClienttype();
  if (f !== 0.0) {
    writer.writeEnum(
      1,
      f
    );
  }
  f = message.getArduinoaction();
  if (f != null) {
    writer.writeMessage(
      2,
      f,
      proto.ArduinoAction.serializeBinaryToWriter
    );
  }
  f = message.getWebclientaction();
  if (f != null) {
    writer.writeMessage(
      3,
      f,
      proto.WebClientAction.serializeBinaryToWriter
    );
  }
};


/**
 * optional ClientType clientType = 1;
 * @return {!proto.ClientType}
 */
proto.MessageFromClient.prototype.getClienttype = function() {
  return /** @type {!proto.ClientType} */ (jspb.Message.getFieldWithDefault(this, 1, 0));
};


/** @param {!proto.ClientType} value */
proto.MessageFromClient.prototype.setClienttype = function(value) {
  jspb.Message.setProto3EnumField(this, 1, value);
};


/**
 * optional ArduinoAction arduinoAction = 2;
 * @return {?proto.ArduinoAction}
 */
proto.MessageFromClient.prototype.getArduinoaction = function() {
  return /** @type{?proto.ArduinoAction} */ (
    jspb.Message.getWrapperField(this, proto.ArduinoAction, 2));
};


/** @param {?proto.ArduinoAction|undefined} value */
proto.MessageFromClient.prototype.setArduinoaction = function(value) {
  jspb.Message.setOneofWrapperField(this, 2, proto.MessageFromClient.oneofGroups_[0], value);
};


proto.MessageFromClient.prototype.clearArduinoaction = function() {
  this.setArduinoaction(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.MessageFromClient.prototype.hasArduinoaction = function() {
  return jspb.Message.getField(this, 2) != null;
};


/**
 * optional WebClientAction webClientAction = 3;
 * @return {?proto.WebClientAction}
 */
proto.MessageFromClient.prototype.getWebclientaction = function() {
  return /** @type{?proto.WebClientAction} */ (
    jspb.Message.getWrapperField(this, proto.WebClientAction, 3));
};


/** @param {?proto.WebClientAction|undefined} value */
proto.MessageFromClient.prototype.setWebclientaction = function(value) {
  jspb.Message.setOneofWrapperField(this, 3, proto.MessageFromClient.oneofGroups_[0], value);
};


proto.MessageFromClient.prototype.clearWebclientaction = function() {
  this.setWebclientaction(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.MessageFromClient.prototype.hasWebclientaction = function() {
  return jspb.Message.getField(this, 3) != null;
};


