/******************************************************************************
	���E�� -yggdrasil-
		���E�����W���[���w�b�_�t�@�C��
											Coded by Wraith	in July 14, 2002.
******************************************************************************/
    
   
//�@Tab�����S�����ɐݒ肵�ĕ\�������Ă��������B
   
///////////////////////////////////////////////////////////////////////////////
//
//  �� ygg.h
//      http://tricklib.com/cxx/ex/yggdrasil/ygg.h
//
//  �� �֘A�t�@�C��
//      �{���W���[���̖{��
//      http://tricklib.com/cxx/ex/yggdrasil/ygg.cpp
//      �{���W���[���̃`���[�g���A���\�[�X�t�@�C��
//      http://tricklib.com/cxx/ex/yggdrasil/ygg_test.cpp
//      �S�t�@�C���p�b�N
//      http://tricklib.com/cxx/ex/yggdrasil/ygg.lzh
//      http://tricklib.com/cxx/ex/yggdrasil/ygg.zip
//
//  �� ���t�@�����X�E�T�|�[�g�y�[�W
//      http://tricklib.com/cxx/ex/yggdrasil/
//
//  �� ���C�Z���X���
//      http://tricklib.com/license.htm
//
   
#ifndef __YGGDRASIL_YGG_H__
   
#define __YGGDRASIL_YGG_H__
   
#if !defined(__WITH_YGGDRASIL__)
#	define	__WITH_YGGDRASIL__
#endif  /* 
   
#if !defined(__BABEL_BABEL_H__) && defined(__WITH_BABEL__)
#include "babel.h"
#endif  /* 
   
#if defined(__WITH_BABEL__) && defined(__BBL_USE_SELECTORS__)
#define __YGGDRASIL_WITH_BABEL__
#endif  /* 
   
#include <cassert>
#include <iostream>
#include <fstream>
#include <list>
   
#ifndef NDEBUG
#ifndef _DEBUG
#define _DEBUG
#endif  /* 
#endif  /* 
   
//
//  ���x�[�X�G���R�[�f�B���O�w��}�N��
//
   
//  �R���p�C�����Ɏw�肷��̂��ʓ|�ȏꍇ�͈ȉ��̃R�����g�s����K�؂Ȏw���
//  (�R�����g����������)�L���ɂ��Ă��������B���������w�肪�Ȃ���Ȃ��ꍇ��
//  ���������ʂ���܂����A���m�ɔ��f����Ȃ������蔻�ʂׂ̈�(�]��)�R�[�h��
//  �������ꂽ�肷��\��������܂��B
//
//#define __USING_ANSI__
//#define __USING_SJIS__
//#define __USING_EUC__
//#define __USING_UTF8__
   
#if !(defined(__USING_ANSI__) || defined(__USING_SJIS__) || defined(__USING_EUC__) || defined(__USING_UTF8__) || defined(__USING_UNKNOWN__))
#define	__USING_UNKNOWN__
#endif  /* 
   
#if defined(__BORLANDC__)
#	pragma warn -8022
#	pragma warn -8026
#	pragma warn -8027
#endif  /* 
   
/******************************************************************************
	��������                      TrickPalace                       ��������
	��������              http://www.trickpalace.net/               ��������
******************************************************************************/ 
   
//
//  ��yggdrasil
//
   namespace yggdrasil {
   
//
//  ���g�p���镶����N���X [ �Y ]
//
}


#include <string>
   namespace yggdrasil {
   
   struct sax_handler;
   
//  typedef std::wstring ygg_wstring;
      
//
//  ���m�[�h�^�� [ �Y ]
//
      namespace ygg_node_type {
      
      
         //const ygg_string node = "node";
      const ygg_string text = "text";
      
      
      
      
      
   
//
//  ���^�[�� [ �Y ]
//
      namespace ygg_term {
      
      const ygg_string empty = "";
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
#ifndef __REJECT_PROCESSING_INSTRUCTION__
      const ygg_string processing_instruction_node =
         "processing-instruction()";
      
#endif  /* 
//  const ygg_string doctype_node = "doctype()";
//  const ygg_string cdata_section_node = "cdata-section()";
      const ygg_string list_node = "list()";
      
//  const ygg_string root_node = "root()";
      const ygg_string path_dir = "/";
      
      
      
      
      
      
      
      
      
      
         " !\"#$%&'()*+,-./;<=>?@[\\]^`{|}~";
      
         " !\"#$%&'()*+,/;<=>?@[\\]^`{|}~";
      
         "information>\n" 
         "\t\tname=���E��  -yggdrasil- \n" 
         "\t\turl=http://tricklib.com/cxx/ex/yggdrasil/\n" 
         "\t\tversion=�x�[�^IIII-I\n" 
         "\t\tname=�����t�_n" 
         "\t\tmail=wraith@trickpalace.net\n";
   
//
//  SOX path term
//
//      term/node       comment     text        attribute   element
//      node()          ��          ��          ��          ��
//      comment()       ��          �~          �~          �~
//      text()          �~          ��          �~          �~
//      attribute()     �~          �~          ��          �~
//      @*              �~          �~          ��          �~
//      element()       �~          �~          �~          ��
//      *               �~          �~          �~          ��
//
      
/******************************************************************************
	��������                       cppll ML                         ��������
	��������           http://www.trickpalace.net/cppll/            ��������
******************************************************************************/ 
      
//
//  ����s�錾
//
      class ygg_node;
   
   
   
   
   
   
   
   
   
   
   
   
   
    
    
    
      } 
         assert (0 == ref_count);
    } 
      {
         
         {
            
+ref_count;
         
       
       
      {
         
         {
            
               
               
            
          
       
    
   
    
      
    
    
      {
         
      
      {
         
      
         
      
         
            
            
            
         
         
      
      
         
            
            
            
         
         
      
      
      {
         
      
       
      {
         
      
       
      {
         
      
       
      {
         
      
       
      {
         return !value;
      }
       
      {
         return value;
      }
      
      {
         return value;
      }
       
      {
         return *value;
      }
      
      {
         return *value;
      }
       
      {
         return value;
      }
      
      {
         return value;
      }
       
      {
         return NULL == value;
      }
       
      {
         return NULL != value;
      }
    
   
//
//  ��utilities
//
      namespace ygg_utility {
      
      
      
      
      
      
                              const ygg_string & X);
      
      
      
      
                                 unsigned int max_row_length = 40);
      
      
      
      
                                          
                                          const ygg_string & replace);
      
                                 const ygg_string & separator);
      
         
         { 
         };
      
      
      {
         
         
#ifdef	__USING_ANSI__
            return ansi;
         
#endif  /* 
#ifdef	__USING_SJIS__
            return sjis;
         
#endif  /* 
#ifdef	__USING_EUC__
            return euc;
         
#endif  /* 
#ifdef	__USING_UTF8__
            return utf8;
         
#endif  /* 
#ifdef	__USING_UNKNOWN__
         const int fingerprint = ((unsigned char *) ("����"))[0];
         
            
         
         
            
         
         
            
         
         
         
#endif  /* 
      }
   
   
//
//  ��ygg�o�����[�N���X
//
      class ygg_value {
      
    
      }
    
      } 
      {
      } 
      {
         operator= (X);
      } 
//senquack - complete conversion to floats:
//  ygg_value(double X) { operator=(X); }
         ygg_value (float X)
      {
         operator= (X);
      } 
      {
      } 
      {
         
      
      
         
      
      
         
      
      
//senquack - complete conversion to floats:
//  ygg_value & operator=(double X) {
         ygg_value & operator= (float X) {
         
      
      
         
      
      
      {
         
      
       
      {
         
      
       
      {
         
      
       
//senquack - complete conversion to floats:
//  operator const double () const {
        operator  const float () const
      {
         
      
       
      {
         
      
       
      {
         
      
       
      {
         
      
       
      {
         
      
       
//senquack - complete conversion to floats:
//  const double get_double() const {
      const float get_double () const
      {
         
      
       
      {
         
         
      
      
      
//senquack - complete conversion to floats:
//  ygg_value & set_double(double X);
         ygg_value & set_double (float X);
   
   
/******************************************************************************
	��������                          cuppa                         ��������
	��������                 http://www.unittest.org/               ��������
******************************************************************************/ 
      
//
//  ��ygg�m�[�h�z���_
//
      class ygg_node {
      
      
      
      
      
      
      
//  ygg_node_body *body;
    
      
      
      
      
      {
         
      
       
      {
         
      
       
      
      //      is_valid()/is_empty() ���g�p���Ă��������B
      inline ygg_string get_type () const;
      
      
      {
         
            
         
         {
            
         
      
      
      
      
                                  ygg_term::empty) const;
      
      
                                  ygg_term::empty) const;
      
      
      
      {
         
      
       
      {
         
      
       
      
      
      
      
      
      
      
      
      
      
      
      
      
                                    sax_handler * sax = NULL) {
         
      
      
                                    sax_handler * sax = NULL) {
         
      
      
      
         
      
      
      
      
      {
         
      
       
//inline    operator const bool() const {
//          return is_valid();
//      }
       
         //  alias functions
        bool is_valid () const
      {
         
      
       
      {
         
      
       
      
      
#ifdef _DEBUG
         inline bool assert_other (const ygg_node & X) const;
      
#endif  /* 
         
      ygg_string get_path () const;
      
      ygg_node enum_node (const ygg_string & path_where);
      
                                           sax_handler * sax = NULL);
      
                                         sax_handler * sax = NULL);
    
      
   
   
//
//  ��ygg�m�[�h�N���X
//
 class ygg_node_body:public ygg_smart_base {
      
    
    
      } 
      } 
         
      
      
      {
         
      
       
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
         
      
      
      {
         
      
       
#ifdef _DEBUG
        virtual bool assert_other (const ygg_node & X) const;
      
#endif  /* 
      
      
   
 
   } 
   {
   } 
      
      
   
   
      
      
   
   
   {
      
      
      {
         
      
      {
         
      
   
   
   {
      
//  assert(body.is_not_null());
      if (body.is_null ())
      {
         
      
      {
         
      
   
   
   {
      
      {
         
      
      {
         
      
   
   
   {
      
      
      {
         
      
      {
         
      
   
   
   {
      
      
      {
         
      
      {
         
      
   
   
   {
      
      
      {
         
      
      {
         
      
   
   
   {
      
      
      {
         
      
      {
         
      
   
   
   {
      
      
      {
         
      
      {
         
      
   
   
   {
      
      {
         
      
      {
         
      
   
   
      
//  assert(body.is_not_null());
         if (body.is_null ()) {
         
      
         
      
   
   
      
//  assert(body.is_not_null());
         if (body.is_null ()) {
         
      
         
      
   
   
   {
      
//  assert(body.is_not_null());
      if (body.is_null ())
      {
         
      
      {
         
      
   
   
   {
      
      {
         
      
      {
         
      
   
   
      
      
         
      
      
   
   
      
      
         
      
      
   
   
      
      
         
      
      
   
   
      
      
         
      
      
   
   
   {
      
      {
         
      
      {
         
      
   
   
      
   
   
      
   
   
#ifdef _DEBUG
      inline bool ygg_node::assert_other (const ygg_node & X) const
   {
      
      
   
    
#endif  /* 
    
   {
      
      
         
      
      
   
   
      
      
         
      
      
   
   
//
//  ��ygg�S�[�X�g�N���X
//
 class ygg_ghost:public ygg_node_body {
      
    
                  const ygg_string & X_path) {
         
         
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
#ifdef _DEBUG
         bool assert_other (const ygg_node & X) const;
      
#endif  /* 
    
                                const ygg_string & X_path)
      {
         
      
   
   
//
//  ��ygg�R�����g�N���X
//
 class ygg_comment:public ygg_node_body {
      
    
      }
      
      
      
      
      
      
      
      
      
      
      
    
      {
         
      
   
   
//
//  ��ygg�e�L�X�g�N���X
//
 class ygg_text:public ygg_node_body {
      
    
      }
      
      
      
      
      
      
      
      
      
      
      
    
      {
         
      
   
   
//
//  ��ygg�����N���X
//
 class ygg_attribute:public ygg_node_body {
      
      
    
      }
      
      
      
      
      
      
      
      
      
      
      
      
    
      {
         
      
   
   
//
//  ���g�p����R���e�i�N���X [ �Y ]
//
   typedef std::list < ygg_node > ygg_list_type;
   
//typedef std::iterator<std::bidirectional_iterator_tag, ygg_node> ygg_iterator_base;
//typedef std::bidirectional_iterator<ygg_node, ptrdiff_t> ygg_iterator_base;
      struct ygg_iterator_base
   {
      
       
       
       
       
    
 
      
      
      
    
         iterator (X_iterator)
      {
      } 
         iterator (X.iterator)
      {
      } 
      {
         
      
       
      
      
      
      
         
+iterator;
         
      
      
      {
         
      
      
         
         
      
      
      {
         
      
      
         
      
      
         
      
      
      {
         
         
      
       
      {
         
         
      
    
 
      
      
      
    
         iterator (X_iterator)
      {
      }
    
         iterator (X.
                   iterator) {
      } 
      {
         
      
       
      
      
      
      
         
+iterator;
         return *this;
      
      
      {
         
      
      
         
         
      
      
      {
         
      
      
         
      
      
         
      
      
      {
         
         
      
       
      {
         
         
      
    
 
      
      
      
    
                           ygg_list_type::
                           const_iterator X_iterator) 
         iterator (X_iterator)
      {
      } 
         iterator (X.iterator)
      {
      } 
         iterator (X.iterator)
      {
      } 
      {
         
      
       
      {
         
      
       
      {
         
      
       
      {
         
      
       
      {
         
      
       
      {
         
+iterator;
         
      
      
      {
         
      
      
         
         
      
      
      {
         
      
      
      {
         
      
       
      {
         
      
       
      {
         
         
      
       
      {
         
         
      
    
 
      
      
      
    
         iterator (X_iterator)
      {
      } 
#if defined(_MSC_VER) && (_MSC_VER < 1300)
      : list (X.list),
         iterator ((ygg_list_type::const_reverse_iterator &) (X.iterator))
      {
      } 
#else   /* 
      :list (X.list), iterator (X.iterator)
      {
      } 
#endif  /* 
      ygg_const_reverse_iterator (const ygg_const_reverse_iterator & X)
         
      {
      } 
      {
         
      
       
      {
         
      
       
      {
         
      
       
      {
         
      
       
      {
         
      
       
      {
         
+iterator;
         
      
      
      {
         
      
      
         
         
      
      
      {
         
      
      
      {
         
      
       
      {
         
      
       
      {
         
         
      
       
      {
         
         
      
    
   
   {
      
   
    
   {
      
   
    
   {
      
   
    
   {
      
   
    
   {
      
   
    
   {
      
   
    
   {
      
   
    
   {
      
   
    
//
//  ��ygg���X�g�N���X
//
     class ygg_proto_list:public ygg_node_body
   {
      
    
      
      }
      
      
      
      
      
      
      
      
      
      
      
      
#ifdef _DEBUG
         bool assert_other (const ygg_node & X) const;
      
#endif  /* 
         
         
      
   
 
    
      }
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
    
      {
         
      
   
   
      
         
      
         
      
   
   
      
         
      
         
      
   
   
      
         
      
         
      
   
   
      
         
      
         
      
   
   
   {
      
         
      
      {
         
      
   
   
   {
      
         
      
      {
         
      
   
   
   {
      
         
      
      {
         
      
   
   
   {
      
         
      
      {
         
      
   
   
//
//  ��ygg���N���X
//
 class ygg_root:public ygg_proto_list {
      
    
      }
      
         
      
      
      
      
      
      
      
      
    
      {
         
      
      
                                         sax_handler * sax = NULL);
      
                                         sax_handler * sax = NULL);
   
   
                                           sax_handler * sax)
   {
      
      
//  node.self_exile();
         return node;
   
   
                                         sax_handler * sax) {
      
   
   
//
//  ��ygg�v�f�N���X
//
 class ygg_element:public ygg_root {
      
    
      }
      
      
      
//  ygg_string get_value() const; use ygg_list::get_value()
//  ygg_string get_text() const; use ygg_list::get_text()
         ygg_string get_xml (const ygg_string & indent =
                             ygg_term::empty) const;
      
      
      
      
      
      
    
      {
         
      
   
   
   {
      
      
         //assert(("���̃m�[�h�ɂ͊��ɐe�����܂��B�������� '�e�m�[�h.exile_node(���̃m�[�h)' �Ő≏���邩�A'���̃m�[�h.close()' �ŃN���[�����쐬���Ă��������B", NULL == parent));
         if (NULL != this && ygg_node_type::empty != get_type ()) {
         
         
      
   
   
   {
      
         
         
      
   
   
/******************************************************************************
	��������                 Trick Library 'dagger'                 ��������
	��������             http://tricklib.com/cxx/dagger/            ��������
******************************************************************************/ 
      
//
//  ��ygg_position
//
      class ygg_position {
    
//struct ygg_position {
      
      
    
         row (X_row) {
      } 
      {
      } 
         
         
      
      
         
         
      
      
         
         
         
      
      
         
         
         
      
      
         
      
      
      {
         
      
       
      {
         
      
       
      {
         
+line;
         
      
      
      {
         
      
       
   
   
//
//  ��ygg_error_term(1/2)
//
      namespace ygg_error_term {
      
      
      
      
      
   
   
    
    
    } 
             X_case)
      {
         
      
      {
         
      
       
      {
         
      
       
      {
         
      
       
      {
         
      
       
      {
         
      
       
      {
         
      
       
      {
         
      
       
      {
         
      
       
      {
         
         
      
      
         
         
      
   
   
//
//  ��ygg_error_term(2/2)
//
      namespace ygg_error_term {
      
      {
         
      
      
                                                  X_genre, int X_category)
      {
         
      
      
                                              X_category, int X_sequence,
                                              int X_sequence_case = 0) {
         
            X_sequence_case * sequence_case;
      
      
                                                     X_sequence,
                                                     int X_sequence_case)
      {
         
         
      
      
      
         make_category (default_genre, 0x00);
      
      
         make_code (default_category, 0x01);
      
      
      
      
      
      
      
      
      
      
         make_strict_code (ygg_invalid_name, 0x01);
      
         make_strict_code (ygg_invalid_name, 0x02);
      
         make_code (ygg_syntax, 0x03);
      
      
      
      
      
      
         make_strict_code (unmatch_tags, 0x01);
      
         make_strict_code (unmatch_tags, 0x02);
      
      
      
   
   
//
//  ��ygg�G���[�N���X
//
 class ygg_error:public ygg_error_code, public ygg_position {
      
    
         message (X.message)
      {
    } 
         message (X_message)
      {
      } 
                                  ygg_error_term::no_error,
                                  const ygg_position & X_position =
                                  ygg_position (0, 0),
                                  const ygg_string & X_message =
                                  ygg_term::empty) {
         
         
         
         
      
      
         
      
      
      {
         
      
       
      {
         
         
      
   
   
//
//  ��ygg�p�[�U�N���X
//
      class ygg_parser {
    
      
    
         sax (X_sax) {
         
            
         
      
      
                                          const ygg_string & X);
      
      {
         
      
      
      {
         
      
    
      
      
      {
         
      
       
      {
         
      
       
                          ygg_error_term::default_error,
                          const ygg_string & X_message =
                          ygg_error_term::default_message) {
         
      
                            const ygg_position & X_position,
                            const ygg_string & X_message =
                            ygg_error_term::default_message) {
         
         
            
         
      
   
   
//
//  ��SAX�n���h����{�N���X
//
      class sax_handler {
      
      
      
      {
         
    
    
                                                        //  parse_error->clear() ��
      virtual void start_document (ygg_node root);  //  �R�����g�m�[�h�̕t���̂� ��
      virtual void end_document (ygg_node & root);  //  root.vanish() ����сA���̑��̑S���� ��
      virtual void start_element (ygg_node element);    //  �����̑S���� ��
      virtual void end_element (ygg_node element);  //  element.vanish() ����сA��element���̂��̑��̑S���� ��
      virtual void catch_text (ygg_node text);  //  text.set_value(...) ��
      virtual void catch_comment (ygg_node comment);    //  comment.set_value(...) ��
   };
   
//
//
//
 class error_catcher:public sax_handler {
    
      
      } 
      {
         
   
   
//
//  ��SOX�p�[�U�N���X
//
 class sox_parser:public ygg_parser {
      
      
      
      
      
      
    
         root (X_root)
      {
      } 
         set_sax_handler (X_sax);
         return *this;
      }
      
#if defined(__YGGDRASIL_WITH_BABEL__)
         sox_parser & read (std::istream & stream, int encoding =
                            babel::base_encoding::unknown);
      
                           babel::base_encoding::unknown);
      
                          babel::base_encoding::unknown);
      
                          babel::base_encoding::unknown);
      
#else //    defined(__YGGDRASIL_WITH_BABEL__)
         sox_parser & read (std::istream & stream);
      
      
      
      
#endif //   defined(__YGGDRASIL_WITH_BABEL__)
         sox_parser & init_root ();
      
      
      
      
    
      
   
   
#if defined(__YGGDRASIL_WITH_BABEL__)
      inline sox_parser & sox_parser::read (std::istream & stream,
                                            int encoding)
   {
      
#else //    defined(__YGGDRASIL_WITH_BABEL__)
      inline sox_parser & sox_parser::read (std::istream & stream) {
      
#endif //   defined(__YGGDRASIL_WITH_BABEL__)
         init_root ();
      
         
                       "�����ȃX�g���[�����w�肳��܂����B");
      
         
#if defined(__YGGDRASIL_WITH_BABEL__)
            using namespace babel;
         
         
         
            
            
            
               (babel::base_encoding::unknown ==
                encoding) ? analyze_base_encoding (second_buffer) : encoding;
            
               manual_translate_engine < bbl_binary,
               ygg_string >::order (determine_encoding);
            
               
               
               
               
                  
               
               
               
            
         
         
#else //    defined(__YGGDRASIL_WITH_BABEL__)
            ygg_string buffer;
         
            
            
         
         
#endif //   defined(__YGGDRASIL_WITH_BABEL__)
      }
      
      
   
   
#if defined(__YGGDRASIL_WITH_BABEL__)
      inline sox_parser & sox_parser::write (std::ostream & stream,
                                             int encoding) {
      
      
#else //    defined(__YGGDRASIL_WITH_BABEL__)
      inline sox_parser & sox_parser::write (std::ostream & stream) {
      
#endif //   defined(__YGGDRASIL_WITH_BABEL__)
         if (!stream) {
         
                       "�����ȃX�g���[�����w�肳��܂����B");
         
      }
      
#if defined(__YGGDRASIL_WITH_BABEL__)
         stream << translate_to_binary (root.get_sox (), encoding);
      
#else //    defined(__YGGDRASIL_WITH_BABEL__)
         stream << root.get_sox ();
      
#endif //   defined(__YGGDRASIL_WITH_BABEL__)
         
   }
   
#if defined(__YGGDRASIL_WITH_BABEL__)
      inline sox_parser & sox_parser::load (const ygg_string & X_filename,
                                            int encoding) {
      
      
#else //    defined(__YGGDRASIL_WITH_BABEL__)
      inline sox_parser & sox_parser::load (const ygg_string & X_filename) {
      
      
#endif //   defined(__YGGDRASIL_WITH_BABEL__)
         if (!file) {
         
                       "�t�@�C�� " + X_filename + " ���J���܂���ł����B");
         
      }
      
#if defined(__YGGDRASIL_WITH_BABEL__)
         return read (file, encoding);  //  return
#else //    defined(__YGGDRASIL_WITH_BABEL__)
         return read (file);    //  return
#endif //   defined(__YGGDRASIL_WITH_BABEL__)
   }
   
#if defined(__YGGDRASIL_WITH_BABEL__)
      inline sox_parser & sox_parser::save (const ygg_string & X_filename,
                                            int encoding) {
      
      
#else //    defined(__YGGDRASIL_WITH_BABEL__)
      inline sox_parser & sox_parser::save (const ygg_string & X_filename) {
      
      
#endif //   defined(__YGGDRASIL_WITH_BABEL__)
         if (!file) {
         
                       "�t�@�C�� " + X_filename + " ���J���܂���ł����B");
         
      }
      
#if defined(__YGGDRASIL_WITH_BABEL__)
         return write (file, encoding); //  return
#else //    defined(__YGGDRASIL_WITH_BABEL__)
         return write (file);   //  return
#endif //   defined(__YGGDRASIL_WITH_BABEL__)
   }
   
//
//
//
 class sox_file:public ygg_node {
      
    
    
      } 
      } 
#if defined(__YGGDRASIL_WITH_BABEL__)
         sox_file & read (sax_handler * sax = NULL, int encoding =
                          babel::base_encoding::unknown) {
         
            sox_parser (*this, sax).load (filename, encoding).parse_error;
         
#else // defined(__YGGDRASIL_WITH_BABEL__)
         sox_file & read (sax_handler * sax = NULL) {
         
         
#endif // defined(__YGGDRASIL_WITH_BABEL__)
            return *this;
      
      
#if defined(__YGGDRASIL_WITH_BABEL__)
         sox_file & write (int encoding = babel::base_encoding::unknown) {
         
         
#else // defined(__YGGDRASIL_WITH_BABEL__)
         sox_file & write () {
         
         
#endif // defined(__YGGDRASIL_WITH_BABEL__)
            return *this;
      
      
         
         
      
      
         
      
   
 
    
      {
         
      
         
   
 
    
      
#if defined(__YGGDRASIL_WITH_BABEL__)
         sox_stream & read (std::istream & stream, sax_handler * sax =
                            NULL, int encoding =
                            babel::base_encoding::unknown) {
         
            sox_parser (*this, sax).read (stream, encoding).parse_error;
         
#else // defined(__YGGDRASIL_WITH_BABEL__)
         sox_stream & read (std::istream & stream, sax_handler * sax = NULL) {
         
         
#endif // defined(__YGGDRASIL_WITH_BABEL__)
            return *this;
      
      
#if defined(__YGGDRASIL_WITH_BABEL__)
         sox_stream & write (std::ostream & stream, int encoding =
                             babel::base_encoding::unknown) {
         
            sox_parser (*this).write (stream, encoding).parse_error;
         
#else // defined(__YGGDRASIL_WITH_BABEL__)
         sox_stream & write (std::ostream & stream) {
         
         
#endif // defined(__YGGDRASIL_WITH_BABEL__)
            return *this;
      
   
   
#if defined(__YGGDRASIL_WITH_BABEL__)
   inline int get_encoding_from_label (const char *label)
   {
      
      
           || 
           || 
           || 
         
      
      
         
      
      
         
      
      
           || 
         
      
      
         
      
      
         
      
      
           || 
         
      
      
           || 
         
      
      
         
      
      
           || 
         
      
      
           || 
         
      
      
   
   
      ygg_string > get_translater (const ygg_string & header) {
      
         //  �z���g�Ȃ炱�̂܂��̃e���v���[�g�����͏ȗ��ł���n�Y�Ȃ̂ɂ�(�m�D�M) ... bcc �́R(�M�D�L)�m�΂����I
         
      
      
      
      
         manual_translate_engine < bbl_binary,
         ygg_string >::order (analyze_encoding);
      
      
         if (0 != header.find (utf8_FEFF))
            break;
      
      
      
      
      
         
      
      
         ygg_root::parse_xml (translater (header))["/?xml/@encoding"].
         get_value ().get_string ();
      
         get_encoding_from_label (encoding_label.c_str ());
      
         //  encoding_label ��D��
         if (unknown != label_encoding && analyze_encoding != label_encoding) {
         
            ygg_string >::order (label_encoding);
      
         
      
   
   
#endif //   defined(__YGGDRASIL_WITH_BABEL__)
      
//
//  ��XML�p�[�U�N���X
//
 class xml_parser:public ygg_parser {
      
      
      
      
      
      
    
         root (X_root)
      {
      } 
         set_sax_handler (X_sax);
         return *this;
      }
      
      
      
      
      
      
      
      
      
   
   
      
      
         
                       "�����ȃX�g���[�����w�肳��܂����B");
      
         
#if defined(__YGGDRASIL_WITH_BABEL__)
            using namespace babel;
         
         
         
            
            
            
               get_translater (second_buffer);
            
               
               
               
               
                  
               
               
               
            
         
         
#else //    defined(__YGGDRASIL_WITH_BABEL__)
            ygg_string buffer;
         
            
            
         
         
#endif //   defined(__YGGDRASIL_WITH_BABEL__)
      }
      
      
   
   
      
#if defined(__YGGDRASIL_WITH_BABEL__)
         using namespace babel;
      
#endif //   defined(__YGGDRASIL_WITH_BABEL__)
         if (!stream) {
         
                       "�����ȃX�g���[�����w�肳��܂����B");
         
      
      
#if defined(__YGGDRASIL_WITH_BABEL__)
      const ygg_string encoding_label =
         root["/?xml/@encoding"].get_value ().get_string ();
      
         get_encoding_from_label (encoding_label.c_str ());
      
      
#else //    defined(__YGGDRASIL_WITH_BABEL__)
         stream << root.get_xml ();
      
#endif //   defined(__YGGDRASIL_WITH_BABEL__)
         return *this;
   
   
      
#if defined(__YGGDRASIL_WITH_BABEL__)
         std::ifstream file (X_filename.c_str (), std::ios::binary);
      
#else //    defined(__YGGDRASIL_WITH_BABEL__)
         std::ifstream file (X_filename.c_str ());
      
#endif //   defined(__YGGDRASIL_WITH_BABEL__)
         if (!file) {
         
                       "�t�@�C�� " + X_filename + " ���J���܂���ł����B");
         
      
      
   
   
      
#if defined(__YGGDRASIL_WITH_BABEL__)
         std::ofstream file (X_filename.c_str (), std::ios::binary);
      
#else //    defined(__YGGDRASIL_WITH_BABEL__)
         std::ofstream file (X_filename.c_str ());
      
#endif //   defined(__YGGDRASIL_WITH_BABEL__)
         
         
                       "�t�@�C�� " + X_filename + " ���J���܂���ł����B");
         
      
      
   
   
//
//
//
 class xml_file:public ygg_node {
      
    
    
      } 
      } 
         
         
      
      
         
         
      
      
         
         
      
      
         
      
   
 
    
      {
         
      
         
   
 
    
      
         
         
      
      
         
         
      
   
   
                                             sax_handler * sax) {
      
      
      
   
   
                                         sax_handler * sax) {
      
      
      
   



#if defined(__BORLANDC__)
#	pragma warn .8022
#	pragma warn .8026
#	pragma warn .8027
#endif  /* 
   
#endif //  __YGGDRASIL_YGG_H__
   
/******************************************************************************
	��������                  Wraith the Trickster                  ��������
	�������� �`I'll go with heaven's advantage and fool's wisdom.�` ��������
******************************************************************************/ 
   