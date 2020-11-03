;; Auto-generated. Do not edit!


(when (boundp 'beginner_tutorials::changeBaseString)
  (if (not (find-package "BEGINNER_TUTORIALS"))
    (make-package "BEGINNER_TUTORIALS"))
  (shadow 'changeBaseString (find-package "BEGINNER_TUTORIALS")))
(unless (find-package "BEGINNER_TUTORIALS::CHANGEBASESTRING")
  (make-package "BEGINNER_TUTORIALS::CHANGEBASESTRING"))
(unless (find-package "BEGINNER_TUTORIALS::CHANGEBASESTRINGREQUEST")
  (make-package "BEGINNER_TUTORIALS::CHANGEBASESTRINGREQUEST"))
(unless (find-package "BEGINNER_TUTORIALS::CHANGEBASESTRINGRESPONSE")
  (make-package "BEGINNER_TUTORIALS::CHANGEBASESTRINGRESPONSE"))

(in-package "ROS")





(defclass beginner_tutorials::changeBaseStringRequest
  :super ros::object
  :slots (_inputString ))

(defmethod beginner_tutorials::changeBaseStringRequest
  (:init
   (&key
    ((:inputString __inputString) "")
    )
   (send-super :init)
   (setq _inputString (string __inputString))
   self)
  (:inputString
   (&optional __inputString)
   (if __inputString (setq _inputString __inputString)) _inputString)
  (:serialization-length
   ()
   (+
    ;; string _inputString
    4 (length _inputString)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _inputString
       (write-long (length _inputString) s) (princ _inputString s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _inputString
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _inputString (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass beginner_tutorials::changeBaseStringResponse
  :super ros::object
  :slots (_newString ))

(defmethod beginner_tutorials::changeBaseStringResponse
  (:init
   (&key
    ((:newString __newString) "")
    )
   (send-super :init)
   (setq _newString (string __newString))
   self)
  (:newString
   (&optional __newString)
   (if __newString (setq _newString __newString)) _newString)
  (:serialization-length
   ()
   (+
    ;; string _newString
    4 (length _newString)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _newString
       (write-long (length _newString) s) (princ _newString s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _newString
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _newString (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass beginner_tutorials::changeBaseString
  :super ros::object
  :slots ())

(setf (get beginner_tutorials::changeBaseString :md5sum-) "46f552d87d2d70b2ba3ed0f446c8da6f")
(setf (get beginner_tutorials::changeBaseString :datatype-) "beginner_tutorials/changeBaseString")
(setf (get beginner_tutorials::changeBaseString :request) beginner_tutorials::changeBaseStringRequest)
(setf (get beginner_tutorials::changeBaseString :response) beginner_tutorials::changeBaseStringResponse)

(defmethod beginner_tutorials::changeBaseStringRequest
  (:response () (instance beginner_tutorials::changeBaseStringResponse :init)))

(setf (get beginner_tutorials::changeBaseStringRequest :md5sum-) "46f552d87d2d70b2ba3ed0f446c8da6f")
(setf (get beginner_tutorials::changeBaseStringRequest :datatype-) "beginner_tutorials/changeBaseStringRequest")
(setf (get beginner_tutorials::changeBaseStringRequest :definition-)
      "
string inputString

---

string newString

")

(setf (get beginner_tutorials::changeBaseStringResponse :md5sum-) "46f552d87d2d70b2ba3ed0f446c8da6f")
(setf (get beginner_tutorials::changeBaseStringResponse :datatype-) "beginner_tutorials/changeBaseStringResponse")
(setf (get beginner_tutorials::changeBaseStringResponse :definition-)
      "
string inputString

---

string newString

")



(provide :beginner_tutorials/changeBaseString "46f552d87d2d70b2ba3ed0f446c8da6f")


