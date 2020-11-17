#include "framework.h"


namespace simple_drawing
{


   document::document()
   {

   }


   document::~document()
   {

   }





   void document::assert_valid() const
   {

      ::user::document::assert_valid();

   }


   void document::dump(dump_context & dumpcontext) const
   {

      ::user::document::dump(dumpcontext);

   }


   bool document::on_new_document()
   {

      return ::user::document::on_new_document();

   }


   bool document::on_open_document(const var & varFile)
   {

      view * pview = get_typed_view < view >();

      if(pview == NULL)
      {

         return true;

      }

      string strPath = varFile.get_file_path();


      return true;

   }


#ifdef _DEBUG


   int64_t document::add_ref(OBJ_REF_DBG_PARAMS_DEF)
   {

      return  ::user::document::add_ref(OBJ_REF_DBG_ARGS);

   }

   int64_t document::dec_ref(OBJ_REF_DBG_PARAMS_DEF)
   {

      return  ::user::document::dec_ref(OBJ_REF_DBG_ARGS);

   }


#endif


   stream& document::write(::stream& stream) const
   {

      return stream;

   }


} // namespace simple_drawing

















