
(cl:in-package :asdf)

(defsystem "beginner_tutorials-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "changeBaseString" :depends-on ("_package_changeBaseString"))
    (:file "_package_changeBaseString" :depends-on ("_package"))
  ))