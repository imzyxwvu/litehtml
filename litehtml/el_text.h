#pragma once

#include "element.h"

namespace litehtml
{
	class el_text : public element
	{
		std::wstring	m_text;
	public:
		el_text(const wchar_t* text, litehtml::document* doc);
		virtual ~el_text();

		virtual void	apply_stylesheet(const litehtml::style_sheet& style);
		virtual void	get_text(std::wstring& text);

	protected:
		virtual void	get_content_size(uint_ptr hdc, size& sz, int max_width);
		virtual void	draw_content(uint_ptr hdc, const litehtml::position& pos);
	};
}