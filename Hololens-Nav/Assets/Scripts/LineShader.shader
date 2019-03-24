Shader "Custom/LineShader"
{
	Subshader{
		 BindChannels {
		   Bind "vertex", vertex
		   Bind "color", color
		 }
		 Pass {}
	}
}

