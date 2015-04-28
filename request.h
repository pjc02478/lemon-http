#pragma once

namespace lemon {
  namespace http {
    
    multithread::task request(
      const std::string &url);
  };
};
