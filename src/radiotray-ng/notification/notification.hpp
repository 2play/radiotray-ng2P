// Copyright 2017 Edward G. Bruck <ed.bruck1@gmail.com>
//
// This file is part of Radiotray-NG.
//
// Radiotray-NG is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Radiotray-NG is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Radiotray-NG.  If not, see <http://www.gnu.org/licenses/>.

#pragma once
#include <radiotray-ng/i_notification.hpp>
#include <memory>

struct notify_t;


class Notification final : public INotification
{
public:
	Notification();

	virtual ~Notification();

	void notify(const std::string& title, const std::string& message);

	void notify(const std::string& title, const std::string& message, const std::string& image);

private:
	std::unique_ptr<notify_t> n;
};
