/******************************************************************************
	���E�� -yggdrasil-
		���E���`���[�g���A���\�[�X�t�@�C��
											Coded by Wraith	in July 14, 2002.
******************************************************************************/
    
   
//�@Tab�����S�����ɐݒ肵�ĕ\�������Ă��������B
   
///////////////////////////////////////////////////////////////////////////////
//
//  �� ygg_test.cpp
//      http://tricklib.com/cxx/ex/yggdrasil/ygg_test.cpp
//
//  �� �֘A�t�@�C��
//      ygg���W���[���̃w�b�_�t�@�C��
//      http://tricklib.com/cxx/ex/yggdrasil/ygg.h
//      ygg���W���[���̖{��
//      http://tricklib.com/cxx/ex/yggdrasil/ygg.cpp
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
   
#include <stdio.h>
   
//#include <iostream>   //  for debug
   
//#define __USING_UTF8__
   
//#include "..\babel\babel.cpp"
#include "ygg.cpp"
   
#include <stdio.h>
#include <malloc.h>
   
//  VC�΍�
#if defined(_MSC_VER)
#	define std_for  if(0) ; else for
#else   /* 
#	define std_for  for
#endif  /* 
   
//  gcc�΍�(�ꎞ�I�u�W�F�N�g�̍��Ӓl��)
   template < class T > T & vitalize (const T & X)
{
   return (T &) X;
}



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

 



error_print::on_error (ygg_error * parse_error)
{
   
      
               "\tlocation %d:%d\n" 
               "\tcode     %02x:%02x:%02x:%02x\n" 
               "\tmessage  %s\n", 
               
               
               
               
   



test_enum ()
{
   
   
   
   
//  std_for(int i = 0; node_list[i].is_valid(); ++i) {
//      printf("path:%s\n", node_list[i].get_path().c_str());
//  }
      
//  std_for(ygg_iterator i = node_list.begin(); i != node_list.end(); ++i) {
//      printf("path:%s\n", i->get_path().c_str());
//  }
      
                i.is_not_end ();
                ++i) {
      


test_enum_stream ()
{
   
   
   
   
   
             node_list[i].is_valid ();
             ++i) {
      


test_path ()
{
   
   
   
   
             length[i].is_valid ();
             ++i) {
      
   
   
             hige[i].is_valid ();
             ++i) {
      
   
   
             p[i].is_valid ();
             ++i) {
      


test_csv ()
{
   
   
   
             item[i].is_valid ();
             ++i) {
      
               ygg_utility::create_line (item[i]["node()"], ",").c_str ());


test_text ()
{
   
            sox_file ("test.sox").read (&vitalize (error_print ())).
            get_text ().c_str ());


 
   
   
   
   
   
   



sax_print::on_error (ygg_error * parse_error)
{
   
   


sax_print::start_document (ygg_node)
{
   


sax_print::end_document (ygg_node &)
{
   


sax_print::start_element (ygg_node element)
{
   
   
//  ygg_node attributes = element["@*"];
//  std_for(int i = 0; attributes[i].is_valid(); ++i) {
//      printf("@%s=\"%s\"\n", attributes[i].get_name().c_str(), attributes[i].get_value().c_str());
//  }
      
                i.is_not_end ();
                ++i) {
      
               i->get_value ().c_str ());


sax_print::end_element (ygg_node element)
{
   


sax_print::catch_text (ygg_node text)
{
   


sax_print::catch_comment (ygg_node)
{
   


test_handler ()
{
   
   


test_const ()
{
   
      sox_file ("test.sox").read (&vitalize (error_print ()))["//node()"];
   
             i.is_not_end ();
             ++i) {
      


test_locacl_enum ()
{
   
   
   
   
             i.is_not_end ();
             ++i) {
      


test_xml ()
{
   
   
   
   
   
             i.is_not_end ();
             ++i) {
      
   


test_string ()
{
   
                                         "\traw>\n" 
                                         "\t\ttext\n",
                                         &vitalize (error_print ()));
   
   
   


test_error ()
{
   
   
//      "\t&raw>\n"         //  (02:00:02:01)
//      "\traw*>\n"         //  (02:00:02:02)
                         "\t\traw>\n"   //  (02:01:01:00)
                         "\traw>\n" 
//      "\t\thage=true\n"   //  (02:00:03:00)
//      "\t\t-hage=true\n"  //  (02:00:02:01)
//      "\t\thage?=true\n"  //  (02:00:02:02)
                         "\t\ttext\n", &error_holder);
   
   
      
               "\tlocation %d:%d\n" 
               "\tcode     %02x:%02x:%02x:%02x\n" 
               "\tmessage  %s\n", 
               
               
               
   
      
   



main ()
{
   
//  std::locale::global(std::locale("japanese"));
      
#if defined(__WITH_BABEL__)
      babel::init_babel ();
   
#endif //   defined(__WITH_BABEL__)
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
         
         
            get_sox ().c_str () << std::endl;
         
         
            get_xml ().c_str () << std::endl;
         
      
         
         
         
      
         
         
         
      
         
         
         
      
         
         
         
      
         
         
         
      
         
         
         
      
         
         
         
      
         
         
         
      
         
         
         
      
         
         
         
      
         
         
         
      
         
         
      
   



/******************************************************************************
	��������                  Wraith the Trickster                  ��������
	�������� �`I'll go with heaven's advantage and fool's wisdom.�` ��������
******************************************************************************/ 
   