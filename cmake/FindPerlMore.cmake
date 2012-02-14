# - Find Perl
# This module finds detailed info about how Perl is installed and determines
# where the include files and libraries are. This code sets the following
# variables:
#
#  PERL_INCLUDE_PATH = path to where perl.h can be found

if(PERL_INCLUDE_PATH)
   # Already in cache, be silent
   SET(PERL_HEADERS_FOUND TRUE)
endif (PERL_INCLUDE_PATH)		

IF(PERL_EXECUTABLE)
	EXECUTE_PROCESS(COMMAND ${PERL_EXECUTABLE} -MConfig -e "print \$Config{archlib}"
   		OUTPUT_VARIABLE PERL_ARCH_LIB_DIR)

	EXECUTE_PROCESS(COMMAND ${PERL_EXECUTABLE} -MConfig -e "print \$Config{sitearch}"
   		OUTPUT_VARIABLE PERL_SITE_ARCH_DIR)

	EXECUTE_PROCESS(COMMAND ${PERL_EXECUTABLE} -MConfig -e "print \$Config{vendorarch}"
   		OUTPUT_VARIABLE PERL_VENDOR_ARCH_DIR)

	EXECUTE_PROCESS(COMMAND ${PERL_EXECUTABLE} -MConfig -e "print \$Config{sitelib}"
   		OUTPUT_VARIABLE PERL_SITE_LIB_DIR)

	EXECUTE_PROCESS(COMMAND ${PERL_EXECUTABLE} -MConfig -e "print \$Config{vendorlib}"
   		OUTPUT_VARIABLE PERL_VENDOR_LIB_DIR)

	EXECUTE_PROCESS(COMMAND ${PERL_EXECUTABLE} -MConfig -e "print \$Config{version}"
   		OUTPUT_VARIABLE PERL_VERSION)

	EXECUTE_PROCESS(COMMAND ${PERL_EXECUTABLE} -MConfig -e "print \$Config{ccflags}"
   		OUTPUT_VARIABLE PERL_CXX_FLAGS)

	EXECUTE_PROCESS(COMMAND ${PERL_EXECUTABLE} -MConfig -e "print \$Config{ccdlflags}"
   		OUTPUT_VARIABLE PERL_CCDL_FLAGS)

	EXECUTE_PROCESS(COMMAND ${PERL_EXECUTABLE} -MConfig -MFile::Spec -e "print '-L' . File::Spec->catdir(\$Config{archlibexp}, 'CORE')"
   		OUTPUT_VARIABLE PERL_EXTRA_LIB_PATHS)

	EXECUTE_PROCESS(COMMAND ${PERL_EXECUTABLE} -MConfig -e "print \$Config{perllibs}"
   		OUTPUT_VARIABLE PERL_LIBS)

	FIND_PATH(PERL_INCLUDE_PATH 
  		NAMES perl.h
  		PATHS ${PERL_ARCH_LIB_DIR}/CORE
  	)

	if(PERL_INCLUDE_PATH)
		SET(PERL_HEADERS_FOUND TRUE)
	endif (PERL_INCLUDE_PATH)

	MARK_AS_ADVANCED(
	  PERL_INCLUDE_PATH
	  )
ENDIF(PERL_EXECUTABLE)

IF(PERL_HEADERS_FOUND)
  IF(NOT PERL_FIND_QUIETLY)
    MESSAGE(STATUS "Perl headers found: ${PERL_INCLUDE_PATH}")
  ENDIF(NOT PERL_FIND_QUIETLY)
ELSE(PERL_HEADERS_FOUND)
  IF(PERL_FIND_HEADERS_REQUIRED)
    MESSAGE(FATAL_ERROR "Could not find Perl headers")
  ENDIF(PERL_FIND_HEADERS_REQUIRED)
ENDIF(PERL_HEADERS_FOUND)

IF ( PERL_LIBRARY MATCHES .*-NOTFOUND )
  EXECUTE_PROCESS ( COMMAND ${PERL_EXECUTABLE}
                    -MConfig -e "print \$Config{libperl}"
                    OUTPUT_VARIABLE PERL_OUTPUT
                    RESULT_VARIABLE PERL_RETURN_VALUE )
  IF ( NOT PERL_RETURN_VALUE )
    FIND_LIBRARY ( PERL_LIBRARY NAMES ${PERL_OUTPUT}
                                PATHS ${PERL_INCLUDE_PATH} )
  ENDIF ( NOT PERL_RETURN_VALUE )
ENDIF ( PERL_LIBRARY MATCHES .*-NOTFOUND )

