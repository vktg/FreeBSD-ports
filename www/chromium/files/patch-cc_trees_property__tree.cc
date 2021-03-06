<<<<<<< HEAD
--- cc/trees/property_tree.cc.orig	2019-12-16 21:51:22 UTC
+++ cc/trees/property_tree.cc
@@ -1229,13 +1229,13 @@ gfx::ScrollOffset ScrollTree::MaxScrollOffset(int scro
=======
--- cc/trees/property_tree.cc.orig	2020-03-03 18:53:47 UTC
+++ cc/trees/property_tree.cc
@@ -1234,13 +1234,13 @@ gfx::ScrollOffset ScrollTree::MaxScrollOffset(int scro
>>>>>>> upstream/master
 
   gfx::Size clip_layer_bounds = container_bounds(scroll_node->id);
 
-  gfx::ScrollOffset max_offset(
+  gfx::ScrollOffset _max_offset(
       scaled_scroll_bounds.width() - clip_layer_bounds.width(),
       scaled_scroll_bounds.height() - clip_layer_bounds.height());
 
-  max_offset.Scale(1 / scale_factor);
-  max_offset.SetToMax(gfx::ScrollOffset());
-  return max_offset;
+  _max_offset.Scale(1 / scale_factor);
+  _max_offset.SetToMax(gfx::ScrollOffset());
+  return _max_offset;
 }
 
 gfx::SizeF ScrollTree::scroll_bounds(int scroll_node_id) const {
