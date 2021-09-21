/*
Copyright 2021 vuckale

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
cube([3,1,3.5]);

translate([9,0,0]) cube([15.5,1,3.5]);

translate([0,0,-1]) cube([12,1.5,1]);

translate([2,0,-1]) cube([8,3.5,1]);

translate([4.5,2.5,0]) cube([3,0.5,3.5]);


module prism(l, w, h) {
    polyhedron(
           points=[[0,0,0], [l,0,0], [l,w,0], [0,w,0], [0,w,h], [l,w,h]],
           faces=[[0,1,2,3],[5,4,3,2],[0,4,5,1],[0,3,4],[5,2,1]]
    );
    z = 0.08;
    separation = 2;
    border = .2;
}

translate([7.5,2.5,3.5]) rotate([90,180,00]) prism(3, 2, 1);

translate([4.5,0,0]) cube([3,3,0.5]);

translate([0,0,-9]) cube([1,1.5,8]);

translate([0,0,-7.5]) cube([1,6,6]);

translate([1,7.5,-1.5]) rotate([180,90,0]) prism(6, 2, 1.5);

translate([11,0,-9]) cube([1,1.5,8]);

translate([11,0,-7.5]) cube([1,6,6]);

translate([12.5,5.5,-1.5]) rotate([0,90,90]) prism(6, 1.5, 2);

translate([0,0,-9]) cube([12,1.5,1]);

translate([2,0,-9]) cube([8,3.5,1]);

translate([16,0,-1.5]) cube([5,4,1.5]);
