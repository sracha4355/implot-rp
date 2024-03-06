#include "implot.h"
#include "implot_internal.h"
int main(){
	ImGui::CreateContext();
	ImPlot::CreateContext();
	ImPlot::DestroyContext();
	ImGui::DestroyContext();
	return 0;
}
