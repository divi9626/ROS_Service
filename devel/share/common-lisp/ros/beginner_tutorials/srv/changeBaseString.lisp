; Auto-generated. Do not edit!


(cl:in-package beginner_tutorials-srv)


;//! \htmlinclude changeBaseString-request.msg.html

(cl:defclass <changeBaseString-request> (roslisp-msg-protocol:ros-message)
  ((inputString
    :reader inputString
    :initarg :inputString
    :type cl:string
    :initform ""))
)

(cl:defclass changeBaseString-request (<changeBaseString-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <changeBaseString-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'changeBaseString-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name beginner_tutorials-srv:<changeBaseString-request> is deprecated: use beginner_tutorials-srv:changeBaseString-request instead.")))

(cl:ensure-generic-function 'inputString-val :lambda-list '(m))
(cl:defmethod inputString-val ((m <changeBaseString-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader beginner_tutorials-srv:inputString-val is deprecated.  Use beginner_tutorials-srv:inputString instead.")
  (inputString m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <changeBaseString-request>) ostream)
  "Serializes a message object of type '<changeBaseString-request>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'inputString))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'inputString))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <changeBaseString-request>) istream)
  "Deserializes a message object of type '<changeBaseString-request>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'inputString) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'inputString) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<changeBaseString-request>)))
  "Returns string type for a service object of type '<changeBaseString-request>"
  "beginner_tutorials/changeBaseStringRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'changeBaseString-request)))
  "Returns string type for a service object of type 'changeBaseString-request"
  "beginner_tutorials/changeBaseStringRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<changeBaseString-request>)))
  "Returns md5sum for a message object of type '<changeBaseString-request>"
  "46f552d87d2d70b2ba3ed0f446c8da6f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'changeBaseString-request)))
  "Returns md5sum for a message object of type 'changeBaseString-request"
  "46f552d87d2d70b2ba3ed0f446c8da6f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<changeBaseString-request>)))
  "Returns full string definition for message of type '<changeBaseString-request>"
  (cl:format cl:nil "~%string inputString~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'changeBaseString-request)))
  "Returns full string definition for message of type 'changeBaseString-request"
  (cl:format cl:nil "~%string inputString~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <changeBaseString-request>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'inputString))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <changeBaseString-request>))
  "Converts a ROS message object to a list"
  (cl:list 'changeBaseString-request
    (cl:cons ':inputString (inputString msg))
))
;//! \htmlinclude changeBaseString-response.msg.html

(cl:defclass <changeBaseString-response> (roslisp-msg-protocol:ros-message)
  ((newString
    :reader newString
    :initarg :newString
    :type cl:string
    :initform ""))
)

(cl:defclass changeBaseString-response (<changeBaseString-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <changeBaseString-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'changeBaseString-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name beginner_tutorials-srv:<changeBaseString-response> is deprecated: use beginner_tutorials-srv:changeBaseString-response instead.")))

(cl:ensure-generic-function 'newString-val :lambda-list '(m))
(cl:defmethod newString-val ((m <changeBaseString-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader beginner_tutorials-srv:newString-val is deprecated.  Use beginner_tutorials-srv:newString instead.")
  (newString m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <changeBaseString-response>) ostream)
  "Serializes a message object of type '<changeBaseString-response>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'newString))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'newString))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <changeBaseString-response>) istream)
  "Deserializes a message object of type '<changeBaseString-response>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'newString) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'newString) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<changeBaseString-response>)))
  "Returns string type for a service object of type '<changeBaseString-response>"
  "beginner_tutorials/changeBaseStringResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'changeBaseString-response)))
  "Returns string type for a service object of type 'changeBaseString-response"
  "beginner_tutorials/changeBaseStringResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<changeBaseString-response>)))
  "Returns md5sum for a message object of type '<changeBaseString-response>"
  "46f552d87d2d70b2ba3ed0f446c8da6f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'changeBaseString-response)))
  "Returns md5sum for a message object of type 'changeBaseString-response"
  "46f552d87d2d70b2ba3ed0f446c8da6f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<changeBaseString-response>)))
  "Returns full string definition for message of type '<changeBaseString-response>"
  (cl:format cl:nil "~%string newString~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'changeBaseString-response)))
  "Returns full string definition for message of type 'changeBaseString-response"
  (cl:format cl:nil "~%string newString~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <changeBaseString-response>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'newString))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <changeBaseString-response>))
  "Converts a ROS message object to a list"
  (cl:list 'changeBaseString-response
    (cl:cons ':newString (newString msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'changeBaseString)))
  'changeBaseString-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'changeBaseString)))
  'changeBaseString-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'changeBaseString)))
  "Returns string type for a service object of type '<changeBaseString>"
  "beginner_tutorials/changeBaseString")