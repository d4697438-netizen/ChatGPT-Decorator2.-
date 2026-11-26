# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/workspaces/ChatGPT-Decorator2.-/decorator/build-android64/_deps/asp2-src"
  "/workspaces/ChatGPT-Decorator2.-/decorator/build-android64/_deps/asp2-build"
  "/workspaces/ChatGPT-Decorator2.-/decorator/build-android64/_deps/asp2-subbuild/asp2-populate-prefix"
  "/workspaces/ChatGPT-Decorator2.-/decorator/build-android64/_deps/asp2-subbuild/asp2-populate-prefix/tmp"
  "/workspaces/ChatGPT-Decorator2.-/decorator/build-android64/_deps/asp2-subbuild/asp2-populate-prefix/src/asp2-populate-stamp"
  "/workspaces/ChatGPT-Decorator2.-/decorator/build-android64/_deps/asp2-subbuild/asp2-populate-prefix/src"
  "/workspaces/ChatGPT-Decorator2.-/decorator/build-android64/_deps/asp2-subbuild/asp2-populate-prefix/src/asp2-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/workspaces/ChatGPT-Decorator2.-/decorator/build-android64/_deps/asp2-subbuild/asp2-populate-prefix/src/asp2-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/workspaces/ChatGPT-Decorator2.-/decorator/build-android64/_deps/asp2-subbuild/asp2-populate-prefix/src/asp2-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
