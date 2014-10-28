//

#include "ygg.h"
   
#include <iterator>
#include <map>
   
#ifdef __USING_STRINGSTREAM___
#	include <sstream>
#else   /* 
#	include <cstdio>
#endif  /* 
   
#define ARRAY_SIZE(X)  		(sizeof(X)/sizeof(X[0]))
#define ARRAY_END(X)   		(X +ARRAY_SIZE(X))
#define AD_LIBTIUM(XXX)		if (!(XXX)) ; else (*(XXX))
#define PROMOTION(XXX) 		XXX = XXX
   
#define init_stack \
char init_stack_dummy[1];
\

#if defined(_MSC_VER)
#	define tricklib_alloca _alloca
#else   /* 
#	define tricklib_alloca	alloca
#endif  /* 
#define get_stack(type, volume) ((type*)tricklib_alloca(volume*sizeof(type)))
   
//#define AD_LIB(XXX)                   if (!(XXX)) ; else
//#define AD_LIBTIUM_WHILE(XXX)         while(XXX) (XXX)
//#define AD_LIB_WHILE_PROMOTION(XXX)   while(XXX) XXX = XXX
   
   
      
      {
         
            
         } else {
            
         }
      
      
         
         
         
         
         
         
//  ygg_string_replace(X_text, "\t", "&#9;");
            return X_text;      //  return
      }
      
         
         
         
         
         
         
         ygg_string_replace (X_text, "=", "&#61;");
         
         
      }
      
         
         
         
         
         
         
         
      }
      
         
      }
      
                                           const ygg_string & X) {
         
         
         
         
         
                 (p = buffer.find (ygg_term::return_code))) {
            
               indent + encode_sox (buffer.substr (0, p)) +
               ygg_term::return_code;
            
         
         
         
//  return indent +encode_sox(X);
      }
      
#if defined(__BORLANDC__)
#	pragma warn -8026
#	pragma warn -8027
#endif  /* 
         ygg_string decode_xml (const ygg_string & X) {
         
//#define __SIMPLE_XML_CODING__
#ifdef __SIMPLE_XML_CODING__
            
         
            
            
            
            
            
            
            
         
         
#else   /* 
            
          
            
            {
               
                  
                  
                     
                  
                     
                  
                  
#ifdef	__USING_UTF8__
                  char utf8[8] = { 0 };
                  
                     
                  
                     
                     
                  
                     
//              } else if (code < 0x10000) {
                        utf8[0] = 0xE0 | (code >> 12);
                     
                     
                     
//              } else if (code < 0x200000) {
//                  utf8[0] = 0xF0 | (code >> 18);
//                  utf8[1] = 0x80 | 0x3F & (code >> 12);
//                  utf8[2] = 0x80 | 0x3F & (code >> 6);
//                  utf8[3] = 0x80 | 0x3F & code;
//              } else if (code < 0x400000) {
//                  utf8[0] = 0xF8 | (code >> 24);
//                  utf8[1] = 0x80 | 0x3F & (code >> 18);
//                  utf8[2] = 0x80 | 0x3F & (code >> 12);
//                  utf8[3] = 0x80 | 0x3F & (code >> 6);
//                  utf8[4] = 0x80 | 0x3F & code;
//              } else {
//                  utf8[0] = 0xFC | (code >> 30);
//                  utf8[1] = 0x80 | 0x3F & (code >> 24);
//                  utf8[2] = 0x80 | 0x3F & (code >> 18);
//                  utf8[3] = 0x80 | 0x3F & (code >> 12);
//                  utf8[4] = 0x80 | 0x3F & (code >> 6);
//                  utf8[5] = 0x80 | 0x3F & code;
                  }
                  
                  
#else //  __USING_UTF8__
                     
                  
#	ifdef	__ACCEPT_NULLCODE__
                     do {
                     
                     
                  
                  
#	else //  __ACCEPT_NULLCODE__
                     while (code) {
                     
                     
                  
#	endif //  __ACCEPT_NULLCODE__
                     
#endif //  __USING_UTF8__
               } else {
                  
                  
               
               
            
            
            {
               
            }
         
         
         
         
         
         
         
         
                 
                 
            
                   (p_end = X_text.find (X_search_end, p))) {
               
            }
            
               || 
               || 
               || 
               || 
               || 
               && (X_replace = 
               || 
            
            
         
         
         
#endif  /* 
      }
      
#if defined(__BORLANDC__)
#	pragma warn .8026
#	pragma warn .8027
#endif  /* 
         
         
      }
      
         
//  indent;
            return decode_xml (X);  //  return
      }
      
                                              unsigned int max_row_length) {
         
         
         
         
         
               i.is_not_end (); ++i) {
            
            
               
               
                  
               
                  
                     
                  
                  
                       && max_row_length < i->get_xml ().length ()) {
                     
                  
                  
               
            
            
         
         
            
         
         
         
         
      
      
         
         
                 
                                       X_text.
                                       find_first_of (ygg_term::white_space,
                                                      p)); 
            
            
                             (ygg_string::npos !=
                              p_end) ? p_end - p : ygg_string::npos, " ");
         
         
      
      
         
         
            X_text.find_first_not_of (ygg_term::white_space);
         
            
         
         
         
            X_text.find_last_not_of (ygg_term::white_space);
         
            
         
         
      
      
         
         
         
                ygg_invalid_name_chars_a.find (X.substr (0, 1))) {
            
         
         
#if	defined(__USING_UNKNOWN__)
            if (base_encoding::sjis == get_base_encoding ()) {
            
#endif  /* 
#if	defined(__USING_UNKNOWN__) || defined(__USING_SJIS__)
               for (ygg_string::const_iterator i = X.begin (); i != X.end ();
                    ++i) {
               
                  
+i;
                  
                       && (unsigned char) *i <= 0xFC) {
                     
                  
               
                  
                     
                  
               
            
            
#endif  /* 
#if	defined(__USING_UNKNOWN__)
         } else {
            
#endif  /* 
#if	defined(__USING_UNKNOWN__) || !defined(__USING_SJIS__)
               if (ygg_string::npos !=
                   ygg_invalid_name_chars_b.find_first_of (X.substr (1))) {
               
            
            
#endif  /* 
#if	defined(__USING_UNKNOWN__)
         }
         
#endif  /* 
            return no_error;
      
      
                                                         
                                                         X_search,
                                                         const ygg_string &
                                                         X_replace) {
         
                 X_search.length ();
                 
                 
            
         
         
      }
      
                                              const ygg_string & separator) {
         
         
            
         
            
         } else {
            
         }
      
   
   
      
#ifdef __USING_STRINGSTREAM___
         std::ostringstream strstr;
      
      
      
#else   /* 
         using namespace std;
      
      
      
      
#endif  /* 
         return *this;          //  return
   }
   
//senquack - complete conversion to floats:
//ygg_value & ygg_value::set_double(double X) {
      ygg_value & ygg_value::set_double (float X) {
      
#ifdef __USING_STRINGSTREAM___
         std::ostringstream strstr;
      
      
      
#else   /* 
         using namespace std;
      
      
      
      
#endif  /* 
         return *this;          //  return
   }
   
   
      
         
         
         
            
         
      
      
   
   
      
         
            
               
               
                  
               
            
         
         
      
      
   }
   
   {
      
      {
         
      }
       
      
      
      
      
         
         
            
         
         
         
         
         
            
               
                  
                  
                  
                     +number 
                  
               }
               
            
            
         
      
         
      
      
      
   }
   
      
         
      }
      
      
             || 
         
      }
      
         
            
         } else {
            
         }
      
      
         
         
         
            
                 && 
               
                                    children[i].get_value ().get_string ());
               
            
            
         
         
      }
      
         
         
         
         
            
         case 1:
            
         }
         
      }
      
      
   }
   
      
      
         
      
      
      
         
      
   }
   
      
         
      } else {
         
      }
   
   
      
         
      } else {
         
      }
   
   
   {
      
   
    
   {
      
      
   } 
      
      
   } 
      
      
   } 
      
      
   } 
   {
      
      
   } 
   {
      
      
   } 
   {
      
      
   } 
   {
      
      
   } 
   {
      
   }
    
   {
      
   
   {
      
   
   {
      
   
   {
      
   
#ifdef _DEBUG
      bool ygg_node_body::assert_other (const ygg_node &) const
   {
      
   }
    
#endif  /* 
    
   {
      
      
      {
         
      } else
      {
         
      }
   
   
   {
      
      
      {
         
      }
       
      
      
              && ygg_term::path_dir == parent_path.substr (p =
                                                           parent_path.
                                                           length () - 1,
                                                           1)) {
         
      
      
      
      
      
      
            
            
      
         
            
            
            
         
      
      
         
         return parent;
      
      
         
      
         
      
         
      
      
      
              && ygg_term::path_dir == parent_path.substr (p =
                                                           parent_path.
                                                           length () - 1,
                                                           1)) {
         
      
      
      
   }
   
   {
      
   }
    
   {
      
   }
    
   {
      
   }
    
   {
      
   }
    
   {
      
   }
    
   {
      
   }
    
   {
      
   }
    
   {
      
   }
    
   {
      
      
         
      
      
      
   }
   
      
   }
   
   {
      
   }
    
   {
      
   }
    
   {
      
   
   {
      
   
   {
      
   
   {
      
   
   {
      
   }
    
#ifdef _DEBUG
     bool ygg_ghost::assert_other (const ygg_node & X) const
   {
      
   }
    
#endif  /* 
    
   {
      
   }
    
   {
      
   }
    
   {
      
   }
    
   {
      
   }
    
   {
      
   }
    
   {
      
      
      
   }
    
   {
      
   }
    
   {
      
      
      
      
       
         
            indent + buffer.substr (0,
                                    p) + ygg_term::comment_trail +
            ygg_term::return_code;
         
         
                  (p = buffer.find (ygg_term::return_code))) {
            
            
         
          
      
         
            indent + buffer + ygg_term::comment_trail + ygg_term::return_code;
      
      
//  return indent +value +ygg_term::comment_trail +ygg_term::return_code;
   }
   
   {
      
   }
    
   {
      
   
   {
      
   }
    
   {
      
   }
    
   {
      
   }
    
   {
      
   }
    
   {
      
   }
    
   {
      
   }
    
   {
      
   }
    
   {
      
   }
    
   {
      
   }
    
   {
      
   }
    
   {
      
   
   {
      
   }
    
   {
      
   }
    
   {
      
   }
    
   {
      
      
      
   }
    
   {
      
   }
    
   {
      
   }
    
   {
      
      
      
   }
    
   {
      
      
      
   }
    
   {
      
   }
    
   {
      
   }
    
   {
      
   
   {
      
   
   {
      
   }
    
   {
      
   }
    
   {
      
   }
    
   {
      
      
            ++i)
      {
         
      
       
   }
   
   {
      
      
      
            ++i)
      {
         
         
         {
            
            
            {
               
                    && 0 < X_part.find_first_not_of (ygg_term::white_space)) {
                  
               
                
                  X_part.find_last_not_of (ygg_term::white_space);
               
                    && end_pos + 1 < X_part.length ()) {
                  
                  
               
                  
               
            
               
                  
                  
               
            
            
         
      
      
   }
   
   {
      
      
            ++i)
      {
         
      
       
   }
   
   {
      
      
            ++i)
      {
         
      
       
   }
   
   {
      
   
   {
      
   
      
         
#ifdef _DEBUG
            assert_other (X_node);
         
#endif  /* 
            body.insert (body.end (), X_node[i]);
      
   }
   
      
         
      
   }
   
#ifdef _DEBUG
      bool ygg_proto_list::assert_other (const ygg_node & X) const
   {
      
            ++i)
      {
         
            
         }
       
       
   } 
#endif  /* 
      
   {
      
   }
    
   {
      
//  return ygg_term::list_node;
      return ygg_term::empty;   //  return
   }
    
   {
      
         
      
      
      
         
      
      
      
         
      
         
      
         
      
   
   
      
         
         
         
      } else {
         
      }
   
   
   {
      
   }
    
   {
      
   }
   
      
   }
   
      
   }
   
      
   }
   
   {
      
   }
    
   {
      
   }
    
   {
      
   }
    
   {
      
   }
    
   {
      
      
   }
    
   {
      
      
            ++i)
      {
         
      
       
   }
   
   {
      
   }
    
   {
      
   }
    
   {
      
      
      
      
      
         
      }
      
         
         
               ++i) {
            
         
         
      }
      
         
                                                            substr (ygg_term::
                                                                    path_wherever.
                                                                    length
                                                                    ()));
         
            //  return
      }
      
         
         
            
         } else {
            
         }
      
      
         
            
                                            substr (ygg_term::
                                                    path_this__wherever.
                                                    length ()));
            
               //  return
         } else if (0 == path.find (ygg_term::path_this_element)) {
            
                               substr (ygg_term::path_this_element.
                                       length ()));
            
               //  return
         } else {
            
            
               //  return
         }
      
      
         
         
            
            
               //  return
         } else {
            
            
               //  return
         }
      
      
      
      
         
         
         
               
               
         
            
               
               
            
         
      
      
      
         
            
         
      
      
         
         
         
            
         
            
            
         
                       path.find (ygg_term::path_parenthesis_end));
         
            path.substr (path.find (ygg_term::path_parenthesis_end) + 1);
         
         
         
         
         
            
               
               
            
         
      
      
         
         
            
         
            
         
         
         
            
         
      
      
      
         
      
         
      
         
      
   
   
   {
      
         
      
      
//  for(int i = 0; X_node[i].is_valid(); ++i) {
//      X_node[i].regist_parent(this);
//  }
   }
   
   {
      
         
      
      
//  for(int i = 0; X_node[i].is_valid(); ++i) {
//      X_node[i].unregist_parent(this);
//  }
   }
   
   {
      
   }
    
   {
      
      
            ++i)
      {
         
      
       
   }
   
   {
      
   }
    
   {
      
      
      
   }
    
   {
      
       
       
       
         
      
         
      
         
         
            
         
         
            X_text.find_last_not_of (ygg_term::white_space);
         
            
         
         
            "<" + name + X_attribute + ">" + X_core + "</" + name + ">";
      
      
   }
   
   {
      
   }
    
   {
      
       
       
       
       
              i != X_list.end (); ++i)
      {
         
            
         
         {
            
         
      
      
         +X_attribute 
      
   }
   
   {
      
#ifdef __REJECT_PROCESSING_INSTRUCTION__
      return 
#else   /* 
      return 
#endif  /* 
   }
    
   {
      
   
   {
      
      
         
            
         
            
+i;
         
      
      
   
   
   {
      
      
            ++i)
      {
         
      
       
   }
   
      
      
      
         ygg_term::return_code.length ();
      
         
         
      
      
      
   
   
   {
   } 
   {
   } 
   {
   } 
   {
   } 
   {
   } 
   {
   } 
   {
   } 
      
      
      
   }
   
                                                   const ygg_string & X)
   {
      
      
      
      
      
      
         
            
                          "�s�K�؂�" + type + "(" + X + ")�ł��B(���̕�����" +
                          type + "�̈ꕶ���ڂɂ͎g�p�ł��܂��� '" +
                          ygg_term::ygg_invalid_name_chars_a + "')");
         
            
                          "�s�K�؂�" + type + "(" + X + ")�ł��B(���̕�����" +
                          type + "�Ƃ��Ďg�p�ł��܂��� '" +
                          ygg_term::ygg_invalid_name_chars_b + "')");
         
            
                          "�s�K�؂�" + type + "(" + X + ")�ł��B");
         
      
         
      
      
   
   
      
      
      
      
      
      
      
      
      
      
      
   }
   
      
      
      
      
   }
   
      
      
      
      
              (p = unparsed_buffer.find (ygg_term::return_code))) {
         
         
            
         }
         
         
      
      
   }
   
      
         
         
      
      
   }
   
      
      
         
         
            
                  
                  
               
            
         
         
      
      
   }
   
   {
      
      
      
      
      
         
      }
      
      
         
            
         
      
      
      
      
         
         
+indent_count;
         
      
      
         
      }
      
         
         
         
         
         
            exile_node (indent_node_list[indent_node_list.get_size () - 1]);
         
         
            indent_node_list[indent_node_list.get_size () - 1];
         
            
            
               
                     
                     
                  
               
            
         
         
         
//      last_node = hot_element;
            last_node = NULL;
         
//      hot_element = hot_element.get_parent();
            assert (ygg_node_type::empty != hot_element.get_type ());
      
      
         
                               ygg_term::
                               return_code 
                                                           (anchor_indent +
                                                            1)) 
         
      }
      
         
      }
      
             (p = X_parse.rfind (ygg_term::comment_trail))) {
         
            //  �R�����g
            catch_event (last_node);
         
         
         
         
         
         
         
         
         
            
         
         
            
                                  +ygg_term::indent + X_parse);
         
         
      }
      
                (p = X_parse.find (ygg_term::element_trail))) {
         
            //  �G�������g
            catch_event (last_node);
         
         
            
         
         
         
         
         
            
            
            
         
         
         
            
         
      
      
         
      }
      
         
            //  �A�g���r���[�g
            name = X_parse.substr (0, p);
         
            
         
            
                          name + "�������d�����Ă��܂��B");
            
               //  sax->on_error ���ŃG���[���N���A���ꂽ�ꍇ�͋��s����...
               if (parse_error.is_error ()) {
               
            
         
         
            decode_attribute (X_parse.substr (p + ygg_term::equal.length ()));
         
//      last_node = ygg_attribute::create().set_name(name).set_value(value);
//      hot_element.adopt_node(last_node);
            hot_element.adopt_node (ygg_attribute::create ().set_name (name).
                                    set_value (value));
      
         
            //  �e�L�X�g
            if (ygg_node_type::text != last_node.get_type ()) {
            
               //  �V�K
               catch_event (last_node);
            
            
            
         
            
               //  ����...
               last_node.set_value (
                                    ygg_term::
                                    return_code 
                                                                (anchor_indent
                                                                 +
                                                                 2)) 
                                    +X_parse);
         
      
   
   
   {
      
         
         
            
         
            
         
            
         
      
   
   
//
//  ��XML�p�[�U�N���X
//
      xml_parser & xml_parser::init_root () {
      
      
      
      
      
      
      
      
   }
   
      
         
      
         
      
      
   }
   
      
         //  �Ƃ肠�����������o�b�t�@�ɒǉ�
         unparsed_buffer += X_text;
      
         //  ���ɃG���[���������Ă�����ǂ��Ԃ�
         if (parse_error.is_error ()) {
         
      }
      
      
      
                (p = unparsed_buffer.find (ygg_term::element_lead))) {
         
            
               //  ��Ƀe�L�X�g������...
               ygg_string source_text = unparsed_buffer.substr (0, p);
            
            
               
                  //  �����̃e�L�X�g...
                  last_node.set_value (last_node.get_value ().get_string () +
                                       value);
            
               
                  //  �V�K�̃e�L�X�g...
                  anchor_position = hot_position;
               
               
            
            
               //  ����������\��������̂ł��̒i�K�ł̓C�x���g�𔭐������Ȃ��B
               //  AD_LIBTIUM(sax).catch_text(last_node);
               hot_position += source_text;
            
         
         
            
               //  �R�����g...
               p_end = unparsed_buffer.find (ygg_term::comment_trail, p);
            
               
                  //  �R�����g��"��"�𔭌�...
                  
                  //  ���O�̃m�[�h���e�L�X�g�m�[�h�Ȃ�e�L�X�g�C�x���g�𔭐��B
                  if (ygg_node_type::text == last_node.get_type ()) {
                  
               
               
                  unparsed_buffer.substr (0,
                                          p_end).substr (p +
                                                         ygg_term::
                                                         comment_lead.
                                                         length ());
               
               
               
               
                  unparsed_buffer.substr (0,
                                          p_end +
                                          ygg_term::comment_trail.length ());
               
                                                    ygg_term::comment_trail.
                                                    length ());
            
               
            }
         
            
               //  CDATA�e�L�X�g...
               p_end = unparsed_buffer.find (ygg_term::cdata_trail, p);
            
               
                  //  CDATA��"��"�𔭌�...
                  
                  unparsed_buffer.substr (0,
                                          p_end).substr (p +
                                                         ygg_term::cdata_lead.
                                                         length ());
               
                  
                                        value);
               
                  
                  
               
               
                  //  ����������\��������̂ł��̒i�K�ł̓C�x���g�𔭐������Ȃ��B
                  //  AD_LIBTIUM(sax).catch_text(last_node);
                  hot_position +=
                  unparsed_buffer.substr (0,
                                          p_end +
                                          ygg_term::cdata_trail.length ());
               
                                                    ygg_term::cdata_trail.
                                                    length ());
            
               
            }
         
            
               //  �G�������g...
               p_end = unparsed_buffer.find (ygg_term::element_trail, p);
            
               
                  //  �G�������g��"��"�𔭌�...
                  
                  //  ���O�̃m�[�h���e�L�X�g�m�[�h�Ȃ�e�L�X�g�C�x���g�𔭐��B
                  if (ygg_node_type::text == last_node.get_type ()) {
                  
               
               
                  //  �^�O���̃e�L�X�g
                  ygg_string element_string =
                  unparsed_buffer.substr (0,
                                          p_end).substr (p +
                                                         ygg_term::
                                                         element_lead.
                                                         length ());
               
                  //
                  anchor_position = hot_position;
               
                  unparsed_buffer.substr (0,
                                          p_end +
                                          ygg_term::element_trail.length ());
               
                                                    ygg_term::element_trail.
                                                    length ());
               
                  //  "/" �̃`�F�b�N
                  
               
                  element_string.length () - ygg_term::element_sign.length ();
               
                  p_lead_sign == element_string.find (ygg_term::element_sign,
                                                      p_lead_sign);
               
                  p_trail_sign == element_string.find (ygg_term::element_sign,
                                                       p_trail_sign);
               
                  PROMOTION (element_string).substr (0, p_trail_sign);
               
                  PROMOTION (element_string).substr (ygg_term::element_sign.
                                                     length ());
               
#				ifdef __REJECT_PROCESSING_INSTRUCTION__
#				else
                  bool is_pi_node = false;
               
#				endif
                  
                       && 
                                                               p_lead_sign)
                       && 
                                                                p_trail_sign))
               {
                  
                     //  <?�`?> ...
#					ifdef __REJECT_PROCESSING_INSTRUCTION__
                     //  �ǂݔ�΂�
                     continue;  //  continue
#					else
                     //  ����ȃG�������g�Ƃ��ď���
                     PROMOTION (element_string).substr (0, p_trail_sign);
                  
                  
                  
#					endif
               }
               
                  //  �v�f���̎擾
                  ygg_string::size_type p_name_end =
                  element_string.find_first_of (ygg_term::white_space);
               
                  element_string.substr (0, p_name_end);
               
                  
               
                  
               
               
                  //  �擪��"/"���������
                  if (!lead_sign) {
                  
#				ifdef __REJECT_PROCESSING_INSTRUCTION__
                     if (ygg_parser::check_element_name (element_name).
                         is_error ()) {
                     
#				else
                     if (ygg_parser::
                         check_element_name ((is_pi_node) ? element_name.
                                             substr (1) : element_name).
                         is_error ()) {
                     
#				endif
                        return *this;   //  return
                  }
                  
                  
                  
                  
                     //  �����̎擾...
                     while (true) {
                     
                        element_string.
                        find_first_not_of (ygg_term::white_space);
                     
                        
                     }
                     
                     
                        element_string.find_first_of ("=" +
                                                      ygg_term::white_space);
                     
                        element_string.substr (0, p_name_end);
                     
                          is_error ()) {
                        
                     } else if (hot_element["@" + attribute_name].is_valid ()) {
                        
                                      attribute_name +
                                      "�������d�����Ă��܂��B");
                        
                           //  sax->on_error ���ŃG���[���N���A���ꂽ�ꍇ�͋��s����...
                           if (parse_error.is_error ()) {
                           
                        }
                     
                     
                     
                     
                        element_string.find ("\"", p_name_end);
                     
                        element_string.find ("\'", p_name_end);
                     
                          || 
                               && p_value_a <= p_value_b)) {
                        
                        
                     
                        
                        
                     
                     
                        element_string.find (hedge_symbol, p_value + 1);
                     
                        element_string.substr (0,
                                               p_value_end).substr (p_value +
                                                                    1);
                     
                                                set_name (attribute_name).
                                                set_value (value));
                     
                  
                  
                     //  �G�������g�J�n�C�x���g�𔭐��B
                     AD_LIBTIUM (sax).start_element (hot_element);
               
               
                  //  �擪�������͖�����"/"���L���
                  if (lead_sign || trail_sign) {
                  
                     
                        
                                      "�J�n�^�O<" + hot_element.get_name () +
                                      ">�ƏI���^�O</" + element_name +
                                      ">���}�b�`���Ă��܂���B");
                     
                        
                                      "�����Ȃ�I���^�O<" + element_name +
                                      ">����n�܂��Ă��܂��B");
                     
                     
                        
                     }
                  
                  
                     //  end_element ���� vanish �����Ɛe��������Ȃ��Ȃ�̂ł����Ŏ擾�B
                     ygg_node parent = hot_element.get_parent ();
                  
                     //  �G�������g�I���C�x���g�𔭐��B
                     AD_LIBTIUM (sax).end_element (hot_element);
                  
                  
               
            
               
            }
         
      
      
   }
   
      
         //  xml�łł͉������Ȃ��B
         return *this;          //  return
   }
   
      
      
         
            
         
         
      
      
   }



/******************************************************************************
	��������                  Wraith the Trickster                  ��������
	�������� �`I'll go with heaven's advantage and fool's wisdom.�` ��������
******************************************************************************/ 
   