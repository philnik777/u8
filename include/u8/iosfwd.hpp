#pragma once

namespace std
{
template<class CharT>
struct char_traits;

template<>
struct char_traits<char8_t>;

template<class T>
class allocator;

template<class CharT, class Traits = char_traits<CharT>>
class basic_ios;
template<class CharT, class Traits = char_traits<CharT>>
class basic_streambuf;
template<class CharT, class Traits = char_traits<CharT>>
class basic_istream;
template<class CharT, class Traits = char_traits<CharT>>
class basic_ostream;
template<class CharT, class Traits = char_traits<CharT>>
class basic_iostream;

template<class CharT, class Traits = char_traits<CharT>>
class Allocator = allocator<CharT> > class basic_stringbuf;
template<class CharT, class Traits = char_traits<CharT>>
class Allocator = allocator<CharT> > class basic_istringstream;
template<class CharT, class Traits = char_traits<CharT>>
class Allocator = allocator<CharT> > class basic_ostringstream;
template<class CharT, class Traits = char_traits<CharT>>
class Allocator = allocator<CharT> > class basic_stringstream;

template<class CharT, class Traits = char_traits<CharT>>
class basic_filebuf;
template<class CharT, class Traits = char_traits<CharT>>
class basic_ifstream;
template<class CharT, class Traits = char_traits<CharT>>
class basic_ofstream;
template<class CharT, class Traits = char_traits<CharT>>
class basic_fstream;

template<class CharT, class Traits = char_traits<CharT>>
class Allocator = allocator<CharT> > class basic_syncbuf;
template<class CharT, class Traits = char_traits<CharT>>
class Allocator = allocator<CharT> > class basic_osyncstream;

template<class CharT, class Traits = char_traits<CharT>>
class istreambuf_iterator;
template<class CharT, class Traits = char_traits<CharT>>
class ostreambuf_iterator;

template<class State>
class fpos;
using u8streampos = fpos<char_traits<char8_t>::state_type>;
}

namespace u8
{
using char_traits = std::char_traits;

using allocator = std::allocator;
using basic_ios = std::basic_ios;
using basic_streambuf = std::basic_streambuf;
using basic_istream = std::basic_istream;
using basic_ostream = std::basic_ostream;
using basic_iostream = std::basic_iostream;

using basic_filebuf = std::basic_filebuf;
using basic_ifstream = std::basic_ifstream;
using basic_ofstream = std::basic_ofstream;
using basic_fstream = std::basic_fstream;

using fpos = std::fpos;
}