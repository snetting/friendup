/*©agpl*************************************************************************
*                                                                              *
* This file is part of FRIEND UNIFYING PLATFORM.                               *
*                                                                              *
* This program is free software: you can redistribute it and/or modify         *
* it under the terms of the GNU Affero General Public License as published by  *
* the Free Software Foundation, either version 3 of the License, or            *
* (at your option) any later version.                                          *
*                                                                              *
* This program is distributed in the hope that it will be useful,              *
* but WITHOUT ANY WARRANTY; without even the implied warranty of               *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                 *
* GNU Affero General Public License for more details.                          *
*                                                                              *
* You should have received a copy of the GNU Affero General Public License     *
* along with this program.  If not, see <http://www.gnu.org/licenses/>.        *
*                                                                              *
*****************************************************************************©*/
/** @file
 *
 * Tree Workspace Desktop
 *
 * @author FL (Francois Lionet)
 * @date first pushed on 06/11/2017
 */
Friend = window.Friend || {};
Friend.Workspace = Friend.FileSystem || {};

Friend.Workspace.File = function( tree, name, flags )
{
 	Friend.Tree.Items.init( this, tree, name, 'Friend.Tree.Game.Sprite', flags );
};
Friend.Workspace.File.render = function( flags )
{
	return flags;
};
Friend.Workspace.File.messageUp = function( message )
{
 return this.startProcess( message, [] );
};
Friend.Workspace.File.messageDown = function( message )
{
	return this.endProcess( message, [] );
};
