namespace cpu {

void integral_image(at::Tensor & input, at::Tensor & output);

}

namespace gpu {

void integral_image(at::Tensor & input, at::Tensor & output);

}
