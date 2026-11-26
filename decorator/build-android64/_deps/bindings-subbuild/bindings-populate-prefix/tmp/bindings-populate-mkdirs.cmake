# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/workspaces/ChatGPT-Decorator2.-/decorator/build-android64/_deps/bindings-src"
  "/workspaces/ChatGPT-Decorator2.-/decorator/build-android64/_deps/bindings-build"
  "/workspaces/ChatGPT-Decorator2.-/decorator/build-android64/_deps/bindings-subbuild/bindings-populate-prefix"
  "/workspaces/ChatGPT-Decorator2.-/decorator/build-android64/_deps/bindings-subbuild/bindings-populate-prefix/tmp"
  "/workspaces/ChatGPT-Decorator2.-/decorator/build-android64/_deps/bindings-subbuild/bindings-populate-prefix/src/bindings-populate-stamp"
  "/workspaces/ChatGPT-Decorator2.-/decorator/build-android64/_deps/bindings-subbuild/bindings-populate-prefix/src"
  "/workspaces/ChatGPT-Decorator2.-/decorator/build-android64/_deps/bindings-subbuild/bindings-populate-prefix/src/bindings-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/workspaces/ChatGPT-Decorator2.-/decorator/build-android64/_deps/bindings-subbuild/bindings-populate-prefix/src/bindings-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/workspaces/ChatGPT-Decorator2.-/decorator/build-android64/_deps/bindings-subbuild/bindings-populate-prefix/src/bindings-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
